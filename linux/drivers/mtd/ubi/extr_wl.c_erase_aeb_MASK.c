
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_wl_entry {size_t pnum; int ec; } ;
struct ubi_device {int free_count; int free; struct ubi_wl_entry** lookuptbl; } ;
struct ubi_ainf_peb {size_t pnum; int lnum; int vol_id; int ec; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ubi_wl_entry* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ubi_device*,struct ubi_wl_entry*,int ,int ,int ,int) ;
 int FUNC_2 (struct ubi_device*,struct ubi_wl_entry*,int) ;
 int VAR_2 ;
 int FUNC_3 (struct ubi_device*,struct ubi_wl_entry*) ;
 int FUNC_4 (struct ubi_wl_entry*,int *) ;

__attribute__((used)) static int FUNC_5(struct ubi_device *VAR_3, struct ubi_ainf_peb *VAR_4, bool VAR_5)
{
 struct ubi_wl_entry *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_2, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->pnum = VAR_4->pnum;
 VAR_6->ec = VAR_4->ec;
 VAR_3->lookuptbl[VAR_6->pnum] = VAR_6;

 if (VAR_5) {
  VAR_7 = FUNC_2(VAR_3, VAR_6, 0);
  if (VAR_7)
   goto out_free;

  FUNC_4(VAR_6, &VAR_3->free);
  VAR_3->free_count++;
 } else {
  VAR_7 = FUNC_1(VAR_3, VAR_6, VAR_4->vol_id, VAR_4->lnum, 0, 0);
  if (VAR_7)
   goto out_free;
 }

 return 0;

out_free:
 FUNC_3(VAR_3, VAR_6);

 return VAR_7;
}

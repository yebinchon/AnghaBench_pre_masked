
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rb; } ;
struct ubi_wl_entry {int ec; int pnum; TYPE_1__ u; } ;
struct ubi_device {int free_count; int free; } ;


 int FUNC_0 (char*,int ,int ) ;
 struct ubi_wl_entry* FUNC_1 (struct ubi_device*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ubi_device*,struct ubi_wl_entry*,int *) ;
 int FUNC_4 (struct ubi_device*,char*) ;

__attribute__((used)) static struct ubi_wl_entry *FUNC_5(struct ubi_device *VAR_0)
{
 struct ubi_wl_entry *VAR_1;

 VAR_1 = FUNC_1(VAR_0, &VAR_0->free);
 if (!VAR_1) {
  FUNC_4(VAR_0, "no free eraseblocks");
  return ((void*)0);
 }

 FUNC_3(VAR_0, VAR_1, &VAR_0->free);





 FUNC_2(&VAR_1->u.rb, &VAR_0->free);
 VAR_0->free_count--;
 FUNC_0("PEB %d EC %d", VAR_1->pnum, VAR_1->ec);

 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_vid_hdr {int sqnum; int vol_id; } ;
struct ubi_attach_info {int fastmap; } ;
struct TYPE_2__ {int list; } ;
struct ubi_ainf_peb {int sqnum; int vol_id; TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 struct ubi_ainf_peb* FUNC_4 (struct ubi_attach_info*,int,int) ;

__attribute__((used)) static int FUNC_5(struct ubi_attach_info *VAR_1, int VAR_2,
         struct ubi_vid_hdr *VAR_3, int VAR_4)
{
 struct ubi_ainf_peb *VAR_5;

 VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_4);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->vol_id = FUNC_0(VAR_3->vol_id);
 VAR_5->sqnum = FUNC_1(VAR_3->sqnum);
 FUNC_3(&VAR_5->u.list, &VAR_1->fastmap);

 FUNC_2("add to fastmap list: PEB %d, vol_id %d, sqnum: %llu", VAR_2,
  VAR_5->vol_id, VAR_5->sqnum);

 return 0;
}

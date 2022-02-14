
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_attach_info {int dummy; } ;
struct ubi_ainf_peb {int copy_flag; int scrub; int lnum; int sqnum; int vol_id; int ec; int pnum; } ;


 struct ubi_ainf_peb* FUNC_0 (struct ubi_attach_info*,int ,int ) ;

__attribute__((used)) static struct ubi_ainf_peb *FUNC_1(struct ubi_attach_info *VAR_0,
          struct ubi_ainf_peb *VAR_1)
{
 struct ubi_ainf_peb *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->pnum, VAR_1->ec);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->vol_id = VAR_1->vol_id;
 VAR_2->sqnum = VAR_1->sqnum;
 VAR_2->lnum = VAR_1->lnum;
 VAR_2->scrub = VAR_1->scrub;
 VAR_2->copy_flag = VAR_1->copy_flag;

 return VAR_2;
}

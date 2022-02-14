
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_attach_info {int aeb_slab_cache; } ;
struct ubi_ainf_peb {int pnum; int ec; void* lnum; void* vol_id; } ;


 int VAR_0 ;
 void* VAR_1 ;
 struct ubi_ainf_peb* FUNC_0 (int ,int ) ;

struct ubi_ainf_peb *FUNC_1(struct ubi_attach_info *VAR_2, int VAR_3,
       int VAR_4)
{
 struct ubi_ainf_peb *VAR_5;

 VAR_5 = FUNC_0(VAR_2->aeb_slab_cache, VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->pnum = VAR_3;
 VAR_5->ec = VAR_4;
 VAR_5->vol_id = VAR_1;
 VAR_5->lnum = VAR_1;

 return VAR_5;
}

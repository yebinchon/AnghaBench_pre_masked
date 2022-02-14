
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct dlm_rsb {size_t res_bucket; int res_ref; struct dlm_ls* res_ls; } ;
struct dlm_ls {TYPE_1__* ls_rsbtbl; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct dlm_rsb *VAR_1)
{
 struct dlm_ls *VAR_2 = VAR_1->res_ls;
 uint32_t VAR_3 = VAR_1->res_bucket;

 FUNC_1(&VAR_2->ls_rsbtbl[VAR_3].lock);
 FUNC_0(&VAR_1->res_ref, VAR_0);
 FUNC_2(&VAR_2->ls_rsbtbl[VAR_3].lock);
}

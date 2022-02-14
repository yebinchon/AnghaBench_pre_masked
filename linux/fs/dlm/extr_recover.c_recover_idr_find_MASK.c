
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct dlm_rsb {int dummy; } ;
struct dlm_ls {int ls_recover_idr_lock; int ls_recover_idr; } ;


 struct dlm_rsb* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct dlm_rsb *FUNC_3(struct dlm_ls *VAR_0, uint64_t VAR_1)
{
 struct dlm_rsb *VAR_2;

 FUNC_1(&VAR_0->ls_recover_idr_lock);
 VAR_2 = FUNC_0(&VAR_0->ls_recover_idr, (int)VAR_1);
 FUNC_2(&VAR_0->ls_recover_idr_lock);
 return VAR_2;
}

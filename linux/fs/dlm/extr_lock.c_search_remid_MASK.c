
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_rsb {int res_waitqueue; int res_convertqueue; int res_grantqueue; } ;
struct dlm_lkb {int dummy; } ;


 struct dlm_lkb* FUNC_0 (int *,int,int ) ;

__attribute__((used)) static struct dlm_lkb *FUNC_1(struct dlm_rsb *VAR_0, int VAR_1,
        uint32_t VAR_2)
{
 struct dlm_lkb *VAR_3;

 VAR_3 = FUNC_0(&VAR_0->res_grantqueue, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_0(&VAR_0->res_convertqueue, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_0(&VAR_0->res_waitqueue, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;
 return ((void*)0);
}

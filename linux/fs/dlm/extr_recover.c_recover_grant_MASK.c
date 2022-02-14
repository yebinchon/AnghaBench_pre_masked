
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_convertqueue; int res_waitqueue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dlm_rsb*,int ) ;

__attribute__((used)) static void FUNC_2(struct dlm_rsb *VAR_1)
{
 if (!FUNC_0(&VAR_1->res_waitqueue) || !FUNC_0(&VAR_1->res_convertqueue))
  FUNC_1(VAR_1, VAR_0);
}

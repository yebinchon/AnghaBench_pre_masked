
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int dummy; } ;
struct dlm_lkb {int lkb_wait_nodeid; } ;


 scalar_t__ FUNC_0 (struct dlm_ls*,int ) ;
 scalar_t__ FUNC_1 (struct dlm_ls*) ;

__attribute__((used)) static int FUNC_2(struct dlm_ls *VAR_0, struct dlm_lkb *VAR_1,
     int VAR_2)
{
 if (FUNC_1(VAR_0))
  return 1;

 if (FUNC_0(VAR_0, VAR_1->lkb_wait_nodeid))
  return 1;

 return 0;
}

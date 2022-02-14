
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_ls {int ls_ops_arg; TYPE_1__* ls_ops; } ;
struct TYPE_2__ {int (* recover_prep ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct dlm_ls *VAR_0)
{
 if (!VAR_0->ls_ops || !VAR_0->ls_ops->recover_prep)
  return;
 VAR_0->ls_ops->recover_prep(VAR_0->ls_ops_arg);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct venus_inst {struct venus_core* core; } ;
struct venus_core {TYPE_2__* ops; TYPE_1__* res; } ;
struct TYPE_4__ {int (* session_continue ) (struct venus_inst*) ;} ;
struct TYPE_3__ {scalar_t__ hfi_version; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct venus_inst*) ;

int FUNC_1(struct venus_inst *VAR_1)
{
 struct venus_core *VAR_2 = VAR_1->core;

 if (VAR_2->res->hfi_version == VAR_0)
  return 0;

 return VAR_2->ops->session_continue(VAR_1);
}

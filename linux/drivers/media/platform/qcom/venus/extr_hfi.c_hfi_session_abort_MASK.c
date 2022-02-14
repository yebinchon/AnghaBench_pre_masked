
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_inst {int done; TYPE_1__* core; } ;
struct hfi_ops {int (* session_abort ) (struct venus_inst*) ;} ;
struct TYPE_2__ {struct hfi_ops* ops; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct venus_inst*) ;
 int FUNC_2 (struct venus_inst*) ;

int FUNC_3(struct venus_inst *VAR_0)
{
 const struct hfi_ops *VAR_1 = VAR_0->core->ops;
 int VAR_2;

 FUNC_0(&VAR_0->done);

 VAR_2 = VAR_1->session_abort(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  return VAR_2;

 return 0;
}

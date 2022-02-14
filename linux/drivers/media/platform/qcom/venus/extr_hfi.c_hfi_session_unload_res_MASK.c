
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_inst {scalar_t__ state; int done; TYPE_1__* core; } ;
struct hfi_ops {int (* session_release_res ) (struct venus_inst*) ;} ;
struct TYPE_2__ {struct hfi_ops* ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct venus_inst*) ;
 int FUNC_2 (struct venus_inst*) ;

int FUNC_3(struct venus_inst *VAR_3)
{
 const struct hfi_ops *VAR_4 = VAR_3->core->ops;
 int VAR_5;

 if (VAR_3->state != VAR_2)
  return -VAR_0;

 FUNC_0(&VAR_3->done);

 VAR_5 = VAR_4->session_release_res(VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_3->state = VAR_1;

 return 0;
}

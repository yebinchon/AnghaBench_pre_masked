
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_inst {int done; TYPE_1__* core; } ;
struct hfi_ops {int (* session_unset_buffers ) (struct venus_inst*,struct hfi_buffer_desc*) ;} ;
struct hfi_buffer_desc {int response_required; } ;
struct TYPE_2__ {struct hfi_ops* ops; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct venus_inst*,struct hfi_buffer_desc*) ;
 int FUNC_2 (struct venus_inst*) ;

int FUNC_3(struct venus_inst *VAR_0,
         struct hfi_buffer_desc *VAR_1)
{
 const struct hfi_ops *VAR_2 = VAR_0->core->ops;
 int VAR_3;

 FUNC_0(&VAR_0->done);

 VAR_3 = VAR_2->session_unset_buffers(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 if (!VAR_1->response_required)
  return 0;

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3)
  return VAR_3;

 return 0;
}

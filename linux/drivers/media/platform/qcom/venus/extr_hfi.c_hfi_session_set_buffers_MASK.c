
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_inst {TYPE_1__* core; } ;
struct hfi_ops {int (* session_set_buffers ) (struct venus_inst*,struct hfi_buffer_desc*) ;} ;
struct hfi_buffer_desc {int dummy; } ;
struct TYPE_2__ {struct hfi_ops* ops; } ;


 int FUNC_0 (struct venus_inst*,struct hfi_buffer_desc*) ;

int FUNC_1(struct venus_inst *VAR_0, struct hfi_buffer_desc *VAR_1)
{
 const struct hfi_ops *VAR_2 = VAR_0->core->ops;

 return VAR_2->session_set_buffers(VAR_0, VAR_1);
}

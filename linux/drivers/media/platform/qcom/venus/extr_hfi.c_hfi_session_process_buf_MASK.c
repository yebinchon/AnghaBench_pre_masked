
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_inst {TYPE_1__* core; } ;
struct hfi_ops {int (* session_etb ) (struct venus_inst*,struct hfi_frame_data*) ;int (* session_ftb ) (struct venus_inst*,struct hfi_frame_data*) ;} ;
struct hfi_frame_data {scalar_t__ buffer_type; } ;
struct TYPE_2__ {struct hfi_ops* ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct venus_inst*,struct hfi_frame_data*) ;
 int FUNC_1 (struct venus_inst*,struct hfi_frame_data*) ;

int FUNC_2(struct venus_inst *VAR_4, struct hfi_frame_data *VAR_5)
{
 const struct hfi_ops *VAR_6 = VAR_4->core->ops;

 if (VAR_5->buffer_type == VAR_1)
  return VAR_6->session_etb(VAR_4, VAR_5);
 else if (VAR_5->buffer_type == VAR_2 ||
   VAR_5->buffer_type == VAR_3)
  return VAR_6->session_ftb(VAR_4, VAR_5);

 return -VAR_0;
}

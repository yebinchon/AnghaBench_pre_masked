
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct venus_inst {scalar_t__ state; TYPE_1__* core; } ;
struct hfi_ops {int (* session_set_property ) (struct venus_inst*,int ,void*) ;} ;
struct TYPE_2__ {struct hfi_ops* ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct venus_inst*,int ,void*) ;

int FUNC_1(struct venus_inst *VAR_3, u32 VAR_4, void *VAR_5)
{
 const struct hfi_ops *VAR_6 = VAR_3->core->ops;

 if (VAR_3->state < VAR_1 || VAR_3->state >= VAR_2)
  return -VAR_0;

 return VAR_6->session_set_property(VAR_3, VAR_4, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union hfi_get_property {int dummy; } hfi_get_property ;
typedef int u32 ;
struct venus_inst {scalar_t__ state; union hfi_get_property hprop; int done; TYPE_1__* core; } ;
struct hfi_ops {int (* session_get_property ) (struct venus_inst*,int ) ;} ;
struct TYPE_2__ {struct hfi_ops* ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct venus_inst*,int ) ;
 int FUNC_2 (struct venus_inst*) ;

int FUNC_3(struct venus_inst *VAR_3, u32 VAR_4,
        union hfi_get_property *VAR_5)
{
 const struct hfi_ops *VAR_6 = VAR_3->core->ops;
 int VAR_7;

 if (VAR_3->state < VAR_1 || VAR_3->state >= VAR_2)
  return -VAR_0;

 FUNC_0(&VAR_3->done);

 VAR_7 = VAR_6->session_get_property(VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7)
  return VAR_7;

 *VAR_5 = VAR_3->hprop;

 return 0;
}

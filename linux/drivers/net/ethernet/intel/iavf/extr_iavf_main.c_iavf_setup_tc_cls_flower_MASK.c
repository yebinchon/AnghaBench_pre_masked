
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iavf_adapter {int dummy; } ;
struct TYPE_2__ {scalar_t__ chain_index; } ;
struct flow_cls_offload {int command; TYPE_1__ common; } ;


 int VAR_0 ;



 int FUNC_0 (struct iavf_adapter*,struct flow_cls_offload*) ;
 int FUNC_1 (struct iavf_adapter*,struct flow_cls_offload*) ;

__attribute__((used)) static int FUNC_2(struct iavf_adapter *VAR_1,
        struct flow_cls_offload *VAR_2)
{
 if (VAR_2->common.chain_index)
  return -VAR_0;

 switch (VAR_2->command) {
 case 129:
  return FUNC_0(VAR_1, VAR_2);
 case 130:
  return FUNC_1(VAR_1, VAR_2);
 case 128:
  return -VAR_0;
 default:
  return -VAR_0;
 }
}

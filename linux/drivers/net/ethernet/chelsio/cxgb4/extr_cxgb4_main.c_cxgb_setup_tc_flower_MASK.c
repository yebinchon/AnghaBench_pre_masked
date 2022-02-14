
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct flow_cls_offload {int command; } ;


 int VAR_0 ;



 int FUNC_0 (struct net_device*,struct flow_cls_offload*) ;
 int FUNC_1 (struct net_device*,struct flow_cls_offload*) ;
 int FUNC_2 (struct net_device*,struct flow_cls_offload*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
    struct flow_cls_offload *VAR_2)
{
 switch (VAR_2->command) {
 case 129:
  return FUNC_1(VAR_1, VAR_2);
 case 130:
  return FUNC_0(VAR_1, VAR_2);
 case 128:
  return FUNC_2(VAR_1, VAR_2);
 default:
  return -VAR_0;
 }
}

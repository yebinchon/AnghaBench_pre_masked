
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




__attribute__((used)) static int FUNC_0(struct net_device *VAR_3, enum can_state VAR_4)
{
 switch (VAR_4) {
 case 130:
  return VAR_0;
 case 128:
  return VAR_2;
 case 129:
  return VAR_1;
 default:
  return 0;
 }
}

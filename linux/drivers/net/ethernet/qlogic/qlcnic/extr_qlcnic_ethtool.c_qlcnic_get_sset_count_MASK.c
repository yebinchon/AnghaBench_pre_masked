
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, int VAR_3)
{

 struct qlcnic_adapter *VAR_4 = FUNC_0(VAR_2);
 switch (VAR_3) {
 case 128:
  return VAR_1;
 case 129:
  return FUNC_1(VAR_4);
 default:
  return -VAR_0;
 }
}

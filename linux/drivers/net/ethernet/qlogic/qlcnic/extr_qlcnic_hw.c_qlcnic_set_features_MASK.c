
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int dummy; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*,int) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;

int FUNC_4(struct net_device *VAR_3, netdev_features_t VAR_4)
{
 struct qlcnic_adapter *VAR_5 = FUNC_0(VAR_3);
 netdev_features_t VAR_6 = VAR_3->features ^ VAR_4;
 int VAR_7 = (VAR_4 & VAR_1) ? VAR_2 : 0;

 if (!(VAR_6 & VAR_1))
  return 0;

 VAR_3->features ^= VAR_1;

 if (FUNC_2(VAR_5, VAR_7))
  return -VAR_0;

 if (!VAR_7 && FUNC_1(VAR_5)) {
  if (FUNC_3(VAR_5))
   return -VAR_0;
 }

 return 0;
}

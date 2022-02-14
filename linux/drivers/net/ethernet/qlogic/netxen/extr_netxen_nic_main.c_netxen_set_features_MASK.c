
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_adapter {int dummy; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct netxen_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct netxen_adapter*,int) ;
 scalar_t__ FUNC_2 (struct netxen_adapter*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
 netdev_features_t VAR_5)
{
 struct netxen_adapter *VAR_6 = FUNC_0(VAR_4);
 int VAR_7;

 if (!((VAR_4->features ^ VAR_5) & VAR_1))
  return 0;

 VAR_7 = (VAR_5 & VAR_1) ? VAR_3
          : VAR_2;

 if (FUNC_1(VAR_6, VAR_7))
  return -VAR_0;

 if (!(VAR_5 & VAR_1) && FUNC_2(VAR_6))
  return -VAR_0;

 return 0;
}

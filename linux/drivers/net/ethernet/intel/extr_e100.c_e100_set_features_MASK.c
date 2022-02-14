
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nic {int dummy; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nic*,int *,int ) ;
 struct nic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
        netdev_features_t VAR_4)
{
 struct nic *VAR_5 = FUNC_1(VAR_3);
 netdev_features_t VAR_6 = VAR_4 ^ VAR_3->features;

 if (!(VAR_6 & (VAR_1 | VAR_0)))
  return 0;

 VAR_3->features = VAR_4;
 FUNC_0(VAR_5, ((void*)0), VAR_2);
 return 1;
}

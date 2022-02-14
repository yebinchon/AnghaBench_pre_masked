
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
typedef int netdev_features_t ;
typedef int (* mlxsw_sp_feature_handler ) (struct net_device*,int) ;


 int FUNC_0 (struct net_device*,char*,char*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
       netdev_features_t VAR_1,
       netdev_features_t VAR_2,
       mlxsw_sp_feature_handler VAR_3)
{
 netdev_features_t VAR_4 = VAR_1 ^ VAR_0->features;
 bool VAR_5 = !!(VAR_1 & VAR_2);
 int VAR_6;

 if (!(VAR_4 & VAR_2))
  return 0;

 VAR_6 = VAR_3(VAR_0, VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_0, "%s feature %pNF failed, err %d\n",
      VAR_5 ? "Enable" : "Disable", &VAR_2, VAR_6);
  return VAR_6;
 }

 if (VAR_5)
  VAR_0->features |= VAR_2;
 else
  VAR_0->features &= ~VAR_2;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
typedef int netdev_features_t ;
typedef int (* mlx5e_feature_handler ) (struct net_device*,int) ;


 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (struct net_device*,char*,char*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
    netdev_features_t *VAR_1,
    netdev_features_t VAR_2,
    netdev_features_t VAR_3,
    mlx5e_feature_handler VAR_4)
{
 netdev_features_t VAR_5 = VAR_2 ^ VAR_0->features;
 bool VAR_6 = !!(VAR_2 & VAR_3);
 int VAR_7;

 if (!(VAR_5 & VAR_3))
  return 0;

 VAR_7 = VAR_4(VAR_0, VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_0, "%s feature %pNF failed, err %d\n",
      VAR_6 ? "Enable" : "Disable", &VAR_3, VAR_7);
  return VAR_7;
 }

 FUNC_0(VAR_1, VAR_3, VAR_6);
 return 0;
}

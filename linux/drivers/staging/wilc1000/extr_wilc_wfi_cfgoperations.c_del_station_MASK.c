
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct sta_info {int sta_associated_bss; } ;
struct wilc_priv {struct sta_info assoc_stainfo; } ;
struct wilc_vif {scalar_t__ iftype; struct wilc_priv priv; } ;
struct station_del_parameters {int * mac; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct wilc_vif*,int ) ;
 int FUNC_3 (struct wilc_vif*,int const*) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_2, struct net_device *VAR_3,
         struct station_del_parameters *VAR_4)
{
 const u8 *VAR_5 = VAR_4->mac;
 int VAR_6 = 0;
 struct wilc_vif *VAR_7 = FUNC_1(VAR_3);
 struct wilc_priv *VAR_8 = &VAR_7->priv;
 struct sta_info *VAR_9;

 if (!(VAR_7->iftype == VAR_0 || VAR_7->iftype == VAR_1))
  return VAR_6;

 VAR_9 = &VAR_8->assoc_stainfo;

 if (!VAR_5)
  VAR_6 = FUNC_2(VAR_7, VAR_9->sta_associated_bss);

 VAR_6 = FUNC_3(VAR_7, VAR_5);
 if (VAR_6)
  FUNC_0(VAR_3, "Host delete station fail\n");
 return VAR_6;
}

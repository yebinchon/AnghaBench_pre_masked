
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct TYPE_2__ {int * sta_associated_bss; } ;
struct wilc_priv {TYPE_1__ assoc_stainfo; } ;
struct wilc_vif {scalar_t__ iftype; struct wilc_priv priv; } ;
struct station_parameters {size_t aid; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct wilc_vif*,int const*,struct station_parameters*) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_3, struct net_device *VAR_4,
         const u8 *VAR_5, struct station_parameters *VAR_6)
{
 int VAR_7 = 0;
 struct wilc_vif *VAR_8 = FUNC_2(VAR_4);
 struct wilc_priv *VAR_9 = &VAR_8->priv;

 if (VAR_8->iftype == VAR_1 || VAR_8->iftype == VAR_2) {
  FUNC_0(VAR_9->assoc_stainfo.sta_associated_bss[VAR_6->aid], VAR_5,
         VAR_0);

  VAR_7 = FUNC_3(VAR_8, VAR_5, VAR_6);
  if (VAR_7)
   FUNC_1(VAR_4, "Host add station fail\n");
 }

 return VAR_7;
}

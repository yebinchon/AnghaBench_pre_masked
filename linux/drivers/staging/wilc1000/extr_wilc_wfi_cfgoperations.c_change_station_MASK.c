
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct wilc_vif {scalar_t__ iftype; } ;
struct station_parameters {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct wilc_vif*,int const*,struct station_parameters*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_2, struct net_device *VAR_3,
     const u8 *VAR_4, struct station_parameters *VAR_5)
{
 int VAR_6 = 0;
 struct wilc_vif *VAR_7 = FUNC_1(VAR_3);

 if (VAR_7->iftype == VAR_0 || VAR_7->iftype == VAR_1) {
  VAR_6 = FUNC_2(VAR_7, VAR_4, VAR_5);
  if (VAR_6)
   FUNC_0(VAR_3, "Host edit station fail\n");
 }
 return VAR_6;
}

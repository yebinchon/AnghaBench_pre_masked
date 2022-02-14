
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct station_info {int generation; } ;
struct qtnf_vif {int generation; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct qtnf_vif*,int const*,struct station_info*) ;
 struct qtnf_vif* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct wiphy *VAR_0, struct net_device *VAR_1,
   const u8 *VAR_2, struct station_info *VAR_3)
{
 struct qtnf_vif *VAR_4 = FUNC_1(VAR_1);

 VAR_3->generation = VAR_4->generation;
 return FUNC_0(VAR_4, VAR_2, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ath6kl_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath6kl_vif*) ;
 struct ath6kl_vif* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_1,
          struct net_device *VAR_2, u64 VAR_3)
{
 struct ath6kl_vif *VAR_4 = FUNC_1(VAR_2);
 bool VAR_5;

 VAR_5 = FUNC_0(VAR_4);

 if (!VAR_5)
  return -VAR_0;

 return 0;
}

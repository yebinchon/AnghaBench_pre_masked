
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct TYPE_2__ {int pmkid_list; } ;
struct wilc_vif {TYPE_1__ priv; } ;
struct wilc_pmkid_attr {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *,int ,int) ;
 struct wilc_vif* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_0, struct net_device *VAR_1)
{
 struct wilc_vif *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->priv.pmkid_list, 0, sizeof(struct wilc_pmkid_attr));

 return 0;
}

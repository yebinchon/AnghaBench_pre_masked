
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct wilc_priv {int hif_drv; } ;
struct wilc_vif {struct wilc_priv priv; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct wilc_vif* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct wilc_vif*,int,int) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_1, struct net_device *VAR_2,
     bool VAR_3, int VAR_4)
{
 struct wilc_vif *VAR_5 = FUNC_0(VAR_2);
 struct wilc_priv *VAR_6 = &VAR_5->priv;

 if (!VAR_6->hif_drv)
  return -VAR_0;

 FUNC_1(VAR_5, VAR_3, VAR_4);

 return 0;
}

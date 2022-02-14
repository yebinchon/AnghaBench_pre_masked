
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bcm_enet_priv {int dummy; } ;


 int FUNC_0 (struct bcm_enet_priv*,int) ;
 int FUNC_1 (struct bcm_enet_priv*,int ,int,int,int) ;
 struct bcm_enet_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, int VAR_1,
          int VAR_2,
          int VAR_3)
{
 struct bcm_enet_priv *VAR_4;

 VAR_4 = FUNC_2(VAR_0);
 FUNC_1(VAR_4, FUNC_0(VAR_4, VAR_1),
         VAR_1, VAR_2, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bcm_enet_priv {int dummy; } ;


 int FUNC_0 (struct bcm_enet_priv*,int) ;
 int FUNC_1 (struct bcm_enet_priv*,int ,int,int) ;
 struct bcm_enet_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, int VAR_1,
        int VAR_2)
{
 struct bcm_enet_priv *VAR_3;

 VAR_3 = FUNC_2(VAR_0);
 return FUNC_1(VAR_3,
        FUNC_0(VAR_3, VAR_1),
        VAR_1, VAR_2);
}

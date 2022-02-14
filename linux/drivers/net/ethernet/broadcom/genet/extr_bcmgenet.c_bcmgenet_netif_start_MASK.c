
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct bcmgenet_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcmgenet_priv*) ;
 int FUNC_1 (struct bcmgenet_priv*) ;
 int FUNC_2 (struct bcmgenet_priv*) ;
 struct bcmgenet_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bcmgenet_priv*,int,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2)
{
 struct bcmgenet_priv *VAR_3 = FUNC_3(VAR_2);


 FUNC_0(VAR_3);

 FUNC_5(VAR_3, VAR_1 | VAR_0, 1);

 FUNC_1(VAR_3);


 FUNC_2(VAR_3);

 FUNC_4(VAR_2->phydev);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct bcmgenet_priv {int old_link; int old_speed; int old_duplex; int old_pause; int bcmgenet_irq_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcmgenet_priv*) ;
 int FUNC_1 (struct bcmgenet_priv*) ;
 int FUNC_2 (struct bcmgenet_priv*) ;
 int FUNC_3 (struct bcmgenet_priv*) ;
 int FUNC_4 (struct bcmgenet_priv*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 struct bcmgenet_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct bcmgenet_priv*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_2)
{
 struct bcmgenet_priv *VAR_3 = FUNC_7(VAR_2);

 FUNC_1(VAR_3);
 FUNC_8(VAR_2);


 FUNC_10(VAR_3, VAR_0, 0);

 FUNC_2(VAR_3);


 FUNC_10(VAR_3, VAR_1, 0);

 FUNC_9(VAR_2->phydev);
 FUNC_0(VAR_3);
 FUNC_4(VAR_3);




 FUNC_6(&VAR_3->bcmgenet_irq_work);

 VAR_3->old_link = -1;
 VAR_3->old_speed = -1;
 VAR_3->old_duplex = -1;
 VAR_3->old_pause = -1;


 FUNC_5(VAR_2);
 FUNC_3(VAR_3);
}

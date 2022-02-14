
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;
struct bcm_enet_priv {int rx_lock; struct net_device* net_dev; } ;


 int FUNC_0 (struct net_device*) ;
 struct bcm_enet_priv* FUNC_1 (int ,struct timer_list*,int ) ;
 struct bcm_enet_priv* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct bcm_enet_priv *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);
 struct net_device *VAR_4 = VAR_3->net_dev;

 FUNC_2(&VAR_3->rx_lock);
 FUNC_0(VAR_4);
 FUNC_3(&VAR_3->rx_lock);
}

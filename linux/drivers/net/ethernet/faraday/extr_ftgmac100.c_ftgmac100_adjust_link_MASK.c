
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int speed; int pause; scalar_t__ duplex; scalar_t__ asym_pause; int link; } ;
struct net_device {struct phy_device* phydev; } ;
struct ftgmac100 {int rx_pause; int tx_pause; int cur_speed; scalar_t__ cur_duplex; int reset_task; scalar_t__ base; scalar_t__ aneg_pause; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct ftgmac100* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct ftgmac100 *VAR_2 = FUNC_1(VAR_1);
 struct phy_device *VAR_3 = VAR_1->phydev;
 bool VAR_4, VAR_5;
 int VAR_6;


 if (!VAR_3->link)
  VAR_6 = 0;
 else
  VAR_6 = VAR_3->speed;


 if (VAR_2->aneg_pause) {
  VAR_5 = VAR_4 = VAR_3->pause;
  if (VAR_3->asym_pause)
   VAR_4 = !VAR_5;
 } else {
  VAR_5 = VAR_2->rx_pause;
  VAR_4 = VAR_2->tx_pause;
 }


 if (VAR_3->speed == VAR_2->cur_speed &&
     VAR_3->duplex == VAR_2->cur_duplex &&
     VAR_5 == VAR_2->rx_pause &&
     VAR_4 == VAR_2->tx_pause)
  return;




 if (VAR_6 || VAR_2->cur_speed)
  FUNC_2(VAR_3);

 VAR_2->cur_speed = VAR_6;
 VAR_2->cur_duplex = VAR_3->duplex;
 VAR_2->rx_pause = VAR_5;
 VAR_2->tx_pause = VAR_4;


 if (!VAR_6)
  return;


 FUNC_0(0, VAR_2->base + VAR_0);


 FUNC_3(&VAR_2->reset_task);
}

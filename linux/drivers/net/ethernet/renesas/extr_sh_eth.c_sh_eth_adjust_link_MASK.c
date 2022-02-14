
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_eth_private {int duplex; scalar_t__ speed; int lock; scalar_t__ no_ether_link; TYPE_1__* cd; scalar_t__ link; } ;
struct phy_device {int duplex; scalar_t__ speed; scalar_t__ link; } ;
struct net_device {struct phy_device* phydev; } ;
struct TYPE_2__ {scalar_t__ no_psr; int (* set_rate ) (struct net_device*) ;int (* set_duplex ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct sh_eth_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct sh_eth_private*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct net_device*,int ,int ,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_2)
{
 struct sh_eth_private *VAR_3 = FUNC_0(VAR_2);
 struct phy_device *VAR_4 = VAR_2->phydev;
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_6(&VAR_3->lock, VAR_5);


 if (VAR_3->cd->no_psr || VAR_3->no_ether_link)
  FUNC_4(VAR_2);

 if (VAR_4->link) {
  if (VAR_4->duplex != VAR_3->duplex) {
   VAR_6 = 1;
   VAR_3->duplex = VAR_4->duplex;
   if (VAR_3->cd->set_duplex)
    VAR_3->cd->set_duplex(VAR_2);
  }

  if (VAR_4->speed != VAR_3->speed) {
   VAR_6 = 1;
   VAR_3->speed = VAR_4->speed;
   if (VAR_3->cd->set_rate)
    VAR_3->cd->set_rate(VAR_2);
  }
  if (!VAR_3->link) {
   FUNC_3(VAR_2, VAR_0, VAR_1, 0);
   VAR_6 = 1;
   VAR_3->link = VAR_4->link;
  }
 } else if (VAR_3->link) {
  VAR_6 = 1;
  VAR_3->link = 0;
  VAR_3->speed = 0;
  VAR_3->duplex = -1;
 }


 if ((VAR_3->cd->no_psr || VAR_3->no_ether_link) && VAR_4->link)
  FUNC_5(VAR_2);

 FUNC_7(&VAR_3->lock, VAR_5);

 if (VAR_6 && FUNC_1(VAR_3))
  FUNC_2(VAR_4);
}

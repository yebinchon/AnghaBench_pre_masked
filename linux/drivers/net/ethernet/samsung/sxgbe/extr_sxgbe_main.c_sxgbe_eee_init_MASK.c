
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int expires; } ;
struct TYPE_8__ {scalar_t__ eee; } ;
struct sxgbe_priv_data {int eee_active; int tx_lpi_timer; int ioaddr; TYPE_2__* hw; TYPE_4__ eee_ctrl_timer; TYPE_3__ hw_cap; struct net_device* dev; } ;
struct net_device {int phydev; } ;
struct TYPE_7__ {TYPE_1__* mac; } ;
struct TYPE_6__ {int (* set_eee_timer ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_4__*,int ,int ) ;

bool FUNC_6(struct sxgbe_priv_data * const VAR_3)
{
 struct net_device *VAR_4 = VAR_3->dev;
 bool VAR_5 = 0;


 if (VAR_3->hw_cap.eee) {

  if (FUNC_2(VAR_4->phydev, 1))
   return 0;

  VAR_3->eee_active = 1;
  FUNC_5(&VAR_3->eee_ctrl_timer, VAR_2, 0);
  VAR_3->eee_ctrl_timer.expires = FUNC_0(VAR_1);
  FUNC_1(&VAR_3->eee_ctrl_timer);

  VAR_3->hw->mac->set_eee_timer(VAR_3->ioaddr,
          VAR_0,
          VAR_3->tx_lpi_timer);

  FUNC_3("Energy-Efficient Ethernet initialized\n");

  VAR_5 = 1;
 }

 return VAR_5;
}

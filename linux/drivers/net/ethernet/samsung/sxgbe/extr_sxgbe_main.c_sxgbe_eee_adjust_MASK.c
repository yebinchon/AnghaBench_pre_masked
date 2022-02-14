
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sxgbe_priv_data {int ioaddr; TYPE_2__* hw; scalar_t__ eee_enabled; struct net_device* dev; } ;
struct net_device {TYPE_3__* phydev; } ;
struct TYPE_6__ {int link; } ;
struct TYPE_5__ {TYPE_1__* mac; } ;
struct TYPE_4__ {int (* set_eee_pls ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct sxgbe_priv_data *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->dev;





 if (VAR_0->eee_enabled)
  VAR_0->hw->mac->set_eee_pls(VAR_0->ioaddr, VAR_1->phydev->link);
}

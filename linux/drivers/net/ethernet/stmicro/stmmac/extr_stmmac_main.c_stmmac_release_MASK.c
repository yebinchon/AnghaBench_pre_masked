
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_priv {scalar_t__ wol_irq; scalar_t__ lpi_irq; int ioaddr; TYPE_2__* tx_queue; TYPE_1__* plat; int phylink; int eee_ctrl_timer; scalar_t__ eee_enabled; } ;
struct net_device {scalar_t__ irq; } ;
struct TYPE_4__ {int txtimer; } ;
struct TYPE_3__ {size_t tx_queues_to_use; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct stmmac_priv*) ;
 int FUNC_2 (scalar_t__,struct net_device*) ;
 struct stmmac_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct stmmac_priv*) ;
 int FUNC_8 (struct stmmac_priv*,int ,int) ;
 int FUNC_9 (struct stmmac_priv*) ;
 int FUNC_10 (struct stmmac_priv*) ;
 int FUNC_11 (struct stmmac_priv*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_0)
{
 struct stmmac_priv *VAR_1 = FUNC_3(VAR_0);
 u32 VAR_2;

 if (VAR_1->eee_enabled)
  FUNC_0(&VAR_1->eee_ctrl_timer);


 FUNC_6(VAR_1->phylink);
 FUNC_5(VAR_1->phylink);

 FUNC_11(VAR_1);

 FUNC_7(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->plat->tx_queues_to_use; VAR_2++)
  FUNC_0(&VAR_1->tx_queue[VAR_2].txtimer);


 FUNC_2(VAR_0->irq, VAR_0);
 if (VAR_1->wol_irq != VAR_0->irq)
  FUNC_2(VAR_1->wol_irq, VAR_0);
 if (VAR_1->lpi_irq > 0)
  FUNC_2(VAR_1->lpi_irq, VAR_0);


 FUNC_10(VAR_1);


 FUNC_1(VAR_1);


 FUNC_8(VAR_1, VAR_1->ioaddr, 0);

 FUNC_4(VAR_0);

 FUNC_9(VAR_1);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pxa168_eth_private {int tx_timeout_task; int smi_bus; scalar_t__ clk; int * htpr; int htpr_dma; TYPE_1__* dev; } ;
struct platform_device {int dummy; } ;
struct net_device {scalar_t__ phydev; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct pxa168_eth_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (scalar_t__) ;
 struct net_device* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_8(VAR_1);
 struct pxa168_eth_private *VAR_3 = FUNC_6(VAR_2);

 if (VAR_3->htpr) {
  FUNC_2(VAR_3->dev->dev.parent, VAR_0,
      VAR_3->htpr, VAR_3->htpr_dma);
  VAR_3->htpr = ((void*)0);
 }
 if (VAR_2->phydev)
  FUNC_7(VAR_2->phydev);
 if (VAR_3->clk) {
  FUNC_1(VAR_3->clk);
 }

 FUNC_5(VAR_3->smi_bus);
 FUNC_4(VAR_3->smi_bus);
 FUNC_9(VAR_2);
 FUNC_0(&VAR_3->tx_timeout_task);
 FUNC_3(VAR_2);
 return 0;
}

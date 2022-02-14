
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pmt_magic_frame; } ;
struct stmmac_priv {int wolopts; int lock; int wol_irq; int device; TYPE_1__ dma_cap; scalar_t__ hw_cap_support; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct stmmac_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3, struct ethtool_wolinfo *VAR_4)
{
 struct stmmac_priv *VAR_5 = FUNC_6(VAR_3);
 u32 VAR_6 = VAR_1 | VAR_2;




 if ((VAR_5->hw_cap_support) && (!VAR_5->dma_cap.pmt_magic_frame))
  VAR_4->wolopts &= ~VAR_1;

 if (!FUNC_0(VAR_5->device))
  return -VAR_0;

 if (VAR_4->wolopts & ~VAR_6)
  return -VAR_0;

 if (VAR_4->wolopts) {
  FUNC_7("stmmac: wakeup enable\n");
  FUNC_1(VAR_5->device, 1);
  FUNC_3(VAR_5->wol_irq);
 } else {
  FUNC_1(VAR_5->device, 0);
  FUNC_2(VAR_5->wol_irq);
 }

 FUNC_4(&VAR_5->lock);
 VAR_5->wolopts = VAR_4->wolopts;
 FUNC_5(&VAR_5->lock);

 return 0;
}

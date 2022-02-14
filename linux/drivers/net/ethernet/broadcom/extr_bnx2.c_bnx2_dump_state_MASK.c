
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct bnx2 {int flags; int pdev; scalar_t__ pm_cap; int intr_sem; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,char*,int ,...) ;
 int FUNC_3 (int ,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_4(struct bnx2 *VAR_9)
{
 struct net_device *VAR_10 = VAR_9->dev;
 u32 VAR_11, VAR_12;

 FUNC_3(VAR_9->pdev, VAR_7, &VAR_11);
 FUNC_2(VAR_10, "DEBUG: intr_sem[%x] PCI_CMD[%08x]\n",
     FUNC_1(&VAR_9->intr_sem), VAR_11);
 FUNC_3(VAR_9->pdev, VAR_9->pm_cap + VAR_8, &VAR_11);
 FUNC_3(VAR_9->pdev, VAR_4, &VAR_12);
 FUNC_2(VAR_10, "DEBUG: PCI_PM[%08x] PCI_MISC_CFG[%08x]\n", VAR_11, VAR_12);
 FUNC_2(VAR_10, "DEBUG: EMAC_TX_STATUS[%08x] EMAC_RX_STATUS[%08x]\n",
     FUNC_0(VAR_9, VAR_1),
     FUNC_0(VAR_9, VAR_0));
 FUNC_2(VAR_10, "DEBUG: RPM_MGMT_PKT_CTRL[%08x]\n",
     FUNC_0(VAR_9, VAR_6));
 FUNC_2(VAR_10, "DEBUG: HC_STATS_INTERRUPT_STATUS[%08x]\n",
     FUNC_0(VAR_9, VAR_3));
 if (VAR_9->flags & VAR_2)
  FUNC_2(VAR_10, "DEBUG: PBA[%08x]\n",
      FUNC_0(VAR_9, VAR_5));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int sopass; } ;
struct device {int dummy; } ;
struct bcm_sysport_priv {int wol_irq_disabled; int wolopts; int wol_irq; int sopass; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct bcm_sysport_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5,
          struct ethtool_wolinfo *VAR_6)
{
 struct bcm_sysport_priv *VAR_7 = FUNC_5(VAR_5);
 struct device *VAR_8 = &VAR_7->pdev->dev;
 u32 VAR_9 = VAR_3 | VAR_4 | VAR_2;

 if (!FUNC_0(VAR_8))
  return -VAR_1;

 if (VAR_6->wolopts & ~VAR_9)
  return -VAR_0;

 if (VAR_6->wolopts & VAR_4)
  FUNC_4(VAR_7->sopass, VAR_6->sopass, sizeof(VAR_7->sopass));


 if (VAR_6->wolopts) {
  FUNC_1(VAR_8, 1);
  if (VAR_7->wol_irq_disabled)
   FUNC_3(VAR_7->wol_irq);
  VAR_7->wol_irq_disabled = 0;
 } else {
  FUNC_1(VAR_8, 0);

  if (!VAR_7->wol_irq_disabled)
   FUNC_2(VAR_7->wol_irq);
  VAR_7->wol_irq_disabled = 1;
 }

 VAR_7->wolopts = VAR_6->wolopts;

 return 0;
}

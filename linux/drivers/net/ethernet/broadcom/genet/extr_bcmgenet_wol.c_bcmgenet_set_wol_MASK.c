
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int * sopass; } ;
struct device {int dummy; } ;
struct bcmgenet_priv {int wol_irq_disabled; int wolopts; int wol_irq; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bcmgenet_priv*,int ) ;
 int FUNC_1 (struct bcmgenet_priv*,int ,int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct bcmgenet_priv* FUNC_8 (struct net_device*) ;

int FUNC_9(struct net_device *VAR_8, struct ethtool_wolinfo *VAR_9)
{
 struct bcmgenet_priv *VAR_10 = FUNC_8(VAR_8);
 struct device *VAR_11 = &VAR_10->pdev->dev;
 u32 VAR_12;

 if (!FUNC_2(VAR_11))
  return -VAR_1;

 if (VAR_9->wolopts & ~(VAR_6 | VAR_7))
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_10, VAR_3);
 if (VAR_9->wolopts & VAR_7) {
  FUNC_1(VAR_10, FUNC_6(&VAR_9->sopass[0]),
         VAR_5);
  FUNC_1(VAR_10, FUNC_7(&VAR_9->sopass[2]),
         VAR_4);
  VAR_12 |= VAR_2;
 } else {
  VAR_12 &= ~VAR_2;
 }
 FUNC_1(VAR_10, VAR_12, VAR_3);


 if (VAR_9->wolopts) {
  FUNC_3(VAR_11, 1);

  if (VAR_10->wol_irq_disabled)
   FUNC_5(VAR_10->wol_irq);
  VAR_10->wol_irq_disabled = 0;
 } else {
  FUNC_3(VAR_11, 0);

  if (!VAR_10->wol_irq_disabled)
   FUNC_4(VAR_10->wol_irq);
  VAR_10->wol_irq_disabled = 1;
 }

 VAR_10->wolopts = VAR_9->wolopts;

 return 0;
}

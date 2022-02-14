
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgmac_priv {int wolopts; int device; } ;
struct net_device {int irq; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct xgmac_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4,
         struct ethtool_wolinfo *VAR_5)
{
 struct xgmac_priv *VAR_6 = FUNC_4(VAR_4);
 u32 VAR_7 = VAR_2 | VAR_3;

 if (!FUNC_0(VAR_6->device))
  return -VAR_1;

 if (VAR_5->wolopts & ~VAR_7)
  return -VAR_0;

 VAR_6->wolopts = VAR_5->wolopts;

 if (VAR_5->wolopts) {
  FUNC_1(VAR_6->device, 1);
  FUNC_3(VAR_4->irq);
 } else {
  FUNC_1(VAR_6->device, 0);
  FUNC_2(VAR_4->irq);
 }

 return 0;
}

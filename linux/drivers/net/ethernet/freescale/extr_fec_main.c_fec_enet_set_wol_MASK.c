
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct fec_enet_private {int wol_flag; scalar_t__* irq; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct fec_enet_private* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_4, struct ethtool_wolinfo *VAR_5)
{
 struct fec_enet_private *VAR_6 = FUNC_4(VAR_4);

 if (!(VAR_6->wol_flag & VAR_2))
  return -VAR_0;

 if (VAR_5->wolopts & ~VAR_3)
  return -VAR_0;

 FUNC_1(&VAR_4->dev, VAR_5->wolopts & VAR_3);
 if (FUNC_0(&VAR_4->dev)) {
  VAR_6->wol_flag |= VAR_1;
  if (VAR_6->irq[0] > 0)
   FUNC_3(VAR_6->irq[0]);
 } else {
  VAR_6->wol_flag &= (~VAR_1);
  if (VAR_6->irq[0] > 0)
   FUNC_2(VAR_6->irq[0]);
 }

 return 0;
}

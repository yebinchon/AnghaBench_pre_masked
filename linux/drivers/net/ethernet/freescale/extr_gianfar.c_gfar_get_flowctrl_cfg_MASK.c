
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct phy_device {int advertising; scalar_t__ asym_pause; scalar_t__ pause; int duplex; } ;
struct net_device {struct phy_device* phydev; } ;
struct gfar_private {scalar_t__ rx_pause_en; scalar_t__ tx_pause_en; int pause_aneg_en; struct net_device* ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u32 FUNC_2(struct gfar_private *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->ndev;
 struct phy_device *VAR_8 = VAR_7->phydev;
 u32 VAR_9 = 0;

 if (!VAR_8->duplex)
  return VAR_9;

 if (!VAR_6->pause_aneg_en) {
  if (VAR_6->tx_pause_en)
   VAR_9 |= VAR_5;
  if (VAR_6->rx_pause_en)
   VAR_9 |= VAR_4;
 } else {
  u16 VAR_10, VAR_11;
  u8 VAR_12;

  VAR_11 = 0;
  if (VAR_8->pause)
   VAR_11 = VAR_3;
  if (VAR_8->asym_pause)
   VAR_11 |= VAR_2;

  VAR_10 = FUNC_0(VAR_8->advertising);
  VAR_12 = FUNC_1(VAR_10, VAR_11);
  if (VAR_12 & VAR_1)
   VAR_9 |= VAR_5;
  if (VAR_12 & VAR_0)
   VAR_9 |= VAR_4;
 }

 return VAR_9;
}

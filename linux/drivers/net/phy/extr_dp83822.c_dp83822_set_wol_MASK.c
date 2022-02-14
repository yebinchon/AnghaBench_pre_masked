
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct phy_device {struct net_device* attached_dev; } ;
struct net_device {scalar_t__ dev_addr; } ;
struct ethtool_wolinfo {int wolopts; int* sopass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct phy_device*,int ,int ) ;
 int FUNC_2 (struct phy_device*,int ,int ,int const) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_16,
      struct ethtool_wolinfo *VAR_17)
{
 struct net_device *VAR_18 = VAR_16->attached_dev;
 u16 VAR_19;
 const u8 *VAR_20;

 if (VAR_17->wolopts & (VAR_14 | VAR_15)) {
  VAR_20 = (const u8 *)VAR_18->dev_addr;

  if (!FUNC_0(VAR_20))
   return -VAR_6;




  FUNC_2(VAR_16, VAR_0, VAR_11,
         (VAR_20[1] << 8) | VAR_20[0]);
  FUNC_2(VAR_16, VAR_0, VAR_12,
         (VAR_20[3] << 8) | VAR_20[2]);
  FUNC_2(VAR_16, VAR_0, VAR_13,
         (VAR_20[5] << 8) | VAR_20[4]);

  VAR_19 = FUNC_1(VAR_16, VAR_0,
         VAR_10);
  if (VAR_17->wolopts & VAR_14)
   VAR_19 |= VAR_4;
  else
   VAR_19 &= ~VAR_4;

  if (VAR_17->wolopts & VAR_15) {
   FUNC_2(VAR_16, VAR_0,
          VAR_7,
          (VAR_17->sopass[1] << 8) | VAR_17->sopass[0]);
   FUNC_2(VAR_16, VAR_0,
          VAR_8,
          (VAR_17->sopass[3] << 8) | VAR_17->sopass[2]);
   FUNC_2(VAR_16, VAR_0,
          VAR_9,
          (VAR_17->sopass[5] << 8) | VAR_17->sopass[4]);
   VAR_19 |= VAR_5;
  } else {
   VAR_19 &= ~VAR_5;
  }

  VAR_19 |= (VAR_2 | VAR_3 |
     VAR_1);
  FUNC_2(VAR_16, VAR_0, VAR_10,
         VAR_19);
 } else {
  VAR_19 = FUNC_1(VAR_16, VAR_0,
         VAR_10);
  VAR_19 &= ~VAR_2;
  FUNC_2(VAR_16, VAR_0, VAR_10,
         VAR_19);
 }

 return 0;
}

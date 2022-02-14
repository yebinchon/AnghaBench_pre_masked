
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct phy_device {struct net_device* attached_dev; } ;
struct net_device {scalar_t__ dev_addr; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct phy_device*,int ) ;
 int FUNC_2 (struct phy_device*,int ,int ) ;
 int FUNC_3 (struct phy_device*,int ,unsigned int,int const) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_10,
     struct ethtool_wolinfo *VAR_11)
{
 struct net_device *VAR_12 = VAR_10->attached_dev;
 const u8 *VAR_13;
 int VAR_14;
 u32 VAR_15;
 unsigned int VAR_16, VAR_17[] = {
  VAR_6,
  VAR_5,
  VAR_4,
 };

 if (!VAR_12)
  return -VAR_8;

 if (VAR_11->wolopts & VAR_9) {
  VAR_13 = (const u8 *) VAR_12->dev_addr;

  if (!FUNC_0(VAR_13))
   return -VAR_7;

  for (VAR_16 = 0; VAR_16 < 3; VAR_16++)
   FUNC_3(VAR_10, VAR_0, VAR_17[VAR_16],
          VAR_13[(VAR_16 * 2) + 1] | (VAR_13[(VAR_16 * 2)] << 8));

  VAR_15 = FUNC_1(VAR_10, VAR_1);
  VAR_15 |= VAR_2;
  VAR_14 = FUNC_2(VAR_10, VAR_1, VAR_15);
  if (VAR_14)
   return VAR_14;
  VAR_15 = FUNC_1(VAR_10, VAR_3);
 } else {
  VAR_15 = FUNC_1(VAR_10, VAR_1);
  VAR_15 &= (~VAR_2);
  VAR_14 = FUNC_2(VAR_10, VAR_1, VAR_15);
  if (VAR_14)
   return VAR_14;
  VAR_15 = FUNC_1(VAR_10, VAR_3);
 }

 return VAR_14;
}

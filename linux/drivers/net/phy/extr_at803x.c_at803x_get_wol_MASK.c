
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*,int ) ;

__attribute__((used)) static void FUNC_1(struct phy_device *VAR_3,
      struct ethtool_wolinfo *VAR_4)
{
 u32 VAR_5;

 VAR_4->supported = VAR_2;
 VAR_4->wolopts = 0;

 VAR_5 = FUNC_0(VAR_3, VAR_0);
 if (VAR_5 & VAR_1)
  VAR_4->wolopts |= VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int,int) ;
 int FUNC_2 (struct phy_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct phy_device *VAR_4,
        struct ethtool_wolinfo *VAR_5)
{
 int VAR_6, VAR_7 = 0;

 VAR_5->supported = VAR_3;
 VAR_5->wolopts = 0;

 VAR_6 = FUNC_2(VAR_4, VAR_2);
 if (VAR_6 < 0)
  goto error;

 VAR_7 = FUNC_0(VAR_4, VAR_0);
 if (VAR_7 & VAR_1)
  VAR_5->wolopts |= VAR_3;

error:
 FUNC_1(VAR_4, VAR_6, VAR_7);
}

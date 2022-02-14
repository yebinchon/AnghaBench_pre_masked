
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int dummy; } ;
struct ethtool_wolinfo {int supported; int wolopts; int* sopass; } ;


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
 int FUNC_0 (struct phy_device*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct phy_device *VAR_10,
       struct ethtool_wolinfo *VAR_11)
{
 u16 VAR_12;
 int VAR_13;

 VAR_11->supported = (VAR_8 | VAR_9);
 VAR_11->wolopts = 0;

 VAR_13 = FUNC_0(VAR_10, VAR_0, VAR_7);

 if (VAR_13 & VAR_2)
  VAR_11->wolopts |= VAR_8;

 if (VAR_13 & VAR_3) {
  VAR_12 = FUNC_0(VAR_10, VAR_0,
       VAR_4);
  VAR_11->sopass[0] = (VAR_12 & 0xff);
  VAR_11->sopass[1] = (VAR_12 >> 8);

  VAR_12 = FUNC_0(VAR_10, VAR_0,
       VAR_5);
  VAR_11->sopass[2] = (VAR_12 & 0xff);
  VAR_11->sopass[3] = (VAR_12 >> 8);

  VAR_12 = FUNC_0(VAR_10, VAR_0,
       VAR_6);
  VAR_11->sopass[4] = (VAR_12 & 0xff);
  VAR_11->sopass[5] = (VAR_12 >> 8);

  VAR_11->wolopts |= VAR_9;
 }


 if (!(VAR_13 & VAR_1))
  VAR_11->wolopts = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct usbnet* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct usbnet*,int ,int ,int ,int,int*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_5, struct ethtool_wolinfo *VAR_6)
{
 struct usbnet *VAR_7 = FUNC_0(VAR_5);
 u8 VAR_8;

 if (FUNC_1(VAR_7, VAR_0, 0, 0, 1, &VAR_8) < 0) {
  VAR_6->supported = 0;
  VAR_6->wolopts = 0;
  return;
 }
 VAR_6->supported = VAR_4 | VAR_3;
 VAR_6->wolopts = 0;
 if (VAR_8 & VAR_1)
  VAR_6->wolopts |= VAR_4;
 if (VAR_8 & VAR_2)
  VAR_6->wolopts |= VAR_3;
}

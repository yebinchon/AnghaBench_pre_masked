
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
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct usbnet*,int ,int ,int,int,int*) ;
 struct usbnet* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_6, struct ethtool_wolinfo *VAR_7)
{
 struct usbnet *VAR_8 = FUNC_1(VAR_6);
 u8 VAR_9;

 if (FUNC_0(VAR_8, VAR_0, VAR_1,
        1, 1, &VAR_9) < 0) {
  VAR_7->supported = 0;
  VAR_7->wolopts = 0;
  return;
 }

 VAR_7->supported = VAR_5 | VAR_4;
 VAR_7->wolopts = 0;
 if (VAR_9 & VAR_2)
  VAR_7->wolopts |= VAR_5;
 if (VAR_9 & VAR_3)
  VAR_7->wolopts |= VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct usbnet*,int ,int ,int,int,int *) ;
 struct usbnet* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_7, struct ethtool_wolinfo *VAR_8)
{
 struct usbnet *VAR_9 = FUNC_1(VAR_7);
 u8 VAR_10 = 0;

 if (VAR_8->wolopts & ~(VAR_6 | VAR_5))
  return -VAR_4;

 if (VAR_8->wolopts & VAR_6)
  VAR_10 |= VAR_2;
 if (VAR_8->wolopts & VAR_5)
  VAR_10 |= VAR_3;

 if (FUNC_0(VAR_9, VAR_0, VAR_1,
         1, 1, &VAR_10) < 0)
  return -VAR_4;

 return 0;
}

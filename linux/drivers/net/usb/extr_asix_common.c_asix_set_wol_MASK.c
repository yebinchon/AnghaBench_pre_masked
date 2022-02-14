
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
 scalar_t__ FUNC_0 (struct usbnet*,int ,int ,int ,int ,int *,int ) ;
 struct usbnet* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_6, struct ethtool_wolinfo *VAR_7)
{
 struct usbnet *VAR_8 = FUNC_1(VAR_6);
 u8 VAR_9 = 0;

 if (VAR_7->wolopts & ~(VAR_5 | VAR_4))
  return -VAR_3;

 if (VAR_7->wolopts & VAR_5)
  VAR_9 |= VAR_1;
 if (VAR_7->wolopts & VAR_4)
  VAR_9 |= VAR_2;

 if (FUNC_0(VAR_8, VAR_0,
         VAR_9, 0, 0, ((void*)0), 0) < 0)
  return -VAR_3;

 return 0;
}

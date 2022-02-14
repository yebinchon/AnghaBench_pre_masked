
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
 struct usbnet* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct usbnet*,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_6, struct ethtool_wolinfo *VAR_7)
{
 struct usbnet *VAR_8 = FUNC_0(VAR_6);
 u8 VAR_9 = 0;

 if (VAR_7->wolopts & ~(VAR_5 | VAR_4))
  return -VAR_0;

 if (VAR_7->wolopts & VAR_5)
  VAR_9 |= VAR_2;
 if (VAR_7->wolopts & VAR_4)
  VAR_9 |= VAR_3;

 if (FUNC_1(VAR_8, VAR_1,
    VAR_9, 0, 0, ((void*)0)) < 0)
  return -VAR_0;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int offset; int len; } ;
typedef int __le16 ;


 int VAR_0 ;
 struct usbnet* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct usbnet*,int,int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
        struct ethtool_eeprom *VAR_2, u8 *VAR_3)
{
 struct usbnet *VAR_4 = FUNC_0(VAR_1);
 __le16 *VAR_5 = (__le16 *)VAR_3;
 int VAR_6 = 0;
 int VAR_7;


 if ((VAR_2->offset & 0x01) || (VAR_2->len & 0x01))
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_2->len / 2; VAR_7++) {
  VAR_6 = FUNC_1(VAR_4, VAR_2->offset / 2 + VAR_7, VAR_5 + VAR_7);
  if (VAR_6 < 0)
   break;
 }

 return VAR_6;
}

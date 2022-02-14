
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int len; scalar_t__ offset; int magic; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usbnet* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct usbnet*,int ,scalar_t__,int ,int,int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
         struct ethtool_eeprom *VAR_4, u8 *VAR_5)
{
 struct usbnet *VAR_6 = FUNC_0(VAR_3);
 __le16 *VAR_7 = (__le16 *)VAR_5;
 int VAR_8;
 int VAR_9;




 if (VAR_4->len % 2)
  return -VAR_0;

 VAR_4->magic = VAR_2;


 for (VAR_9 = 0; VAR_9 < VAR_4->len / 2; VAR_9++) {
  VAR_8 = FUNC_1(VAR_6, VAR_1, VAR_4->offset + VAR_9,
      0, 2, &VAR_7[VAR_9]);
  if (VAR_8 < 0)
   return -VAR_0;
 }
 return 0;
}

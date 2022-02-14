
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int offset; int len; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usbnet*,int ,int,int,int,int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 struct usbnet* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_6, struct ethtool_eeprom *VAR_7,
     u8 *VAR_8)
{
 struct usbnet *VAR_9 = FUNC_4(VAR_6);
 u16 *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;

 if (VAR_7->len == 0)
  return -VAR_2;

 VAR_7->magic = VAR_0;

 VAR_11 = VAR_7->offset >> 1;
 VAR_12 = (VAR_7->offset + VAR_7->len - 1) >> 1;
 VAR_10 = FUNC_2(VAR_12 - VAR_11 + 1, sizeof(u16),
        VAR_5);
 if (!VAR_10)
  return -VAR_4;


 for (VAR_13 = VAR_11; VAR_13 <= VAR_12; VAR_13++) {
  VAR_14 = FUNC_0(VAR_9, VAR_1, VAR_13, 1, 2,
      &VAR_10[VAR_13 - VAR_11],
      0);
  if (VAR_14 < 0) {
   FUNC_1(VAR_10);
   return -VAR_3;
  }
 }

 FUNC_3(VAR_8, (u8 *)VAR_10 + (VAR_7->offset & 1), VAR_7->len);
 FUNC_1(VAR_10);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int magic; int offset; int len; } ;
struct bnxt {int dummy; } ;


 int FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int,int,int,int,int*,int ) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct bnxt* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2,
      struct ethtool_eeprom *VAR_3,
      u8 *VAR_4)
{
 struct bnxt *VAR_5 = FUNC_5(VAR_2);
 u8 VAR_6, VAR_7;
 u16 VAR_8, VAR_9, VAR_10, VAR_11;

 if (!FUNC_0(VAR_5)) {
  FUNC_4(VAR_2, "NVM write not supported from a virtual function\n");
  return -VAR_0;
 }

 VAR_8 = VAR_3->magic >> 16;

 if (VAR_8 == 0xffff) {
  VAR_6 = VAR_3->magic & 0xff;
  VAR_7 = VAR_3->magic >> 8;
  if (VAR_6 == 0)
   return -VAR_0;
  switch (VAR_7) {
  case 0x0e:
   if (VAR_3->offset != ~VAR_3->magic)
    return -VAR_0;
   return FUNC_2(VAR_2, VAR_6 - 1);
  default:
   return -VAR_0;
  }
 }


 if (FUNC_1(VAR_8) == 1)
  return -VAR_1;
 VAR_9 = VAR_3->magic & 0xffff;
 VAR_10 = VAR_3->offset >> 16;
 VAR_11 = VAR_3->offset & 0xffff;

 return FUNC_3(VAR_2, VAR_8, VAR_10, VAR_9, VAR_11, VAR_4,
    VAR_3->len);
}

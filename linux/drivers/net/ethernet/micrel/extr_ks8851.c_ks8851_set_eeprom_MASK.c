
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ks8851_net {int eeprom; } ;
struct ethtool_eeprom {int offset; int len; scalar_t__ magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int) ;
 scalar_t__ FUNC_3 (struct ks8851_net*) ;
 int FUNC_4 (struct ks8851_net*) ;
 struct ks8851_net* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3,
        struct ethtool_eeprom *VAR_4, u8 *VAR_5)
{
 struct ks8851_net *VAR_6 = FUNC_5(VAR_3);
 int VAR_7 = VAR_4->offset;
 int VAR_8 = VAR_4->len;
 u16 VAR_9;


 if (VAR_8 != 1)
  return -VAR_0;

 if (VAR_4->magic != VAR_2)
  return -VAR_0;

 if (FUNC_3(VAR_6))
  return -VAR_1;

 FUNC_1(&VAR_6->eeprom, 1);




 FUNC_0(&VAR_6->eeprom, VAR_7/2, &VAR_9);

 if (VAR_7 & 1) {
  VAR_9 &= 0xff;
  VAR_9 |= *VAR_5 << 8;
 } else {
  VAR_9 &= 0xff00;
  VAR_9 |= *VAR_5;
 }

 FUNC_2(&VAR_6->eeprom, VAR_7/2, VAR_9);
 FUNC_1(&VAR_6->eeprom, 0);

 FUNC_4(VAR_6);

 return 0;
}

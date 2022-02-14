
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ks8851_net {int eeprom; } ;
struct ethtool_eeprom {int offset; int len; int magic; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int *,int) ;
 scalar_t__ FUNC_1 (struct ks8851_net*) ;
 int FUNC_2 (struct ks8851_net*) ;
 struct ks8851_net* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
        struct ethtool_eeprom *VAR_4, u8 *VAR_5)
{
 struct ks8851_net *VAR_6 = FUNC_3(VAR_3);
 int VAR_7 = VAR_4->offset;
 int VAR_8 = VAR_4->len;


 if (VAR_8 & 1 || VAR_7 & 1)
  return -VAR_0;

 if (FUNC_1(VAR_6))
  return -VAR_1;

 VAR_4->magic = VAR_2;

 FUNC_0(&VAR_6->eeprom, VAR_7/2, (__le16 *)VAR_5, VAR_8/2);
 FUNC_2(VAR_6);

 return 0;
}

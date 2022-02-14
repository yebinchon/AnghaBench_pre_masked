
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct lan78xx_net {int intf; } ;
struct ethtool_eeprom {int len; int offset; int magic; } ;


 int VAR_0 ;
 int FUNC_0 (struct lan78xx_net*,int ,int ,int *) ;
 struct lan78xx_net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
          struct ethtool_eeprom *VAR_2, u8 *VAR_3)
{
 struct lan78xx_net *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4->intf);
 if (VAR_5)
  return VAR_5;

 VAR_2->magic = VAR_0;

 VAR_5 = FUNC_0(VAR_4, VAR_2->offset, VAR_2->len, VAR_3);

 FUNC_3(VAR_4->intf);

 return VAR_5;
}

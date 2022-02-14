
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
struct lan78xx_net {int intf; } ;
struct ethtool_eeprom {scalar_t__ magic; int len; int offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct lan78xx_net*,int ,int,scalar_t__*) ;
 int FUNC_1 (struct lan78xx_net*,int ,int,scalar_t__*) ;
 struct lan78xx_net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
          struct ethtool_eeprom *VAR_4, u8 *VAR_5)
{
 struct lan78xx_net *VAR_6 = FUNC_2(VAR_3);
 int VAR_7;

 VAR_7 = FUNC_3(VAR_6->intf);
 if (VAR_7)
  return VAR_7;




 if (VAR_4->magic == VAR_0)
  VAR_7 = FUNC_0(VAR_6, VAR_4->offset, VAR_4->len, VAR_5);
 else if ((VAR_4->magic == VAR_1) &&
   (VAR_4->offset == 0) &&
   (VAR_4->len == 512) &&
   (VAR_5[0] == VAR_2))
  VAR_7 = FUNC_1(VAR_6, VAR_4->offset, VAR_4->len, VAR_5);

 FUNC_4(VAR_6->intf);

 return VAR_7;
}

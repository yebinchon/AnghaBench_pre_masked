
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct jme_adapter {int dummy; } ;
struct ethtool_eeprom {int offset; int len; scalar_t__ magic; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct jme_adapter*,int,int ) ;
 struct jme_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_2,
  struct ethtool_eeprom *VAR_3, u8 *VAR_4)
{
 struct jme_adapter *VAR_5 = FUNC_1(VAR_2);
 int VAR_6, VAR_7 = VAR_3->offset, VAR_8 = VAR_3->len;

 if (VAR_3->magic != VAR_1)
  return -VAR_0;




 for (VAR_6 = 0 ; VAR_6 < VAR_8 ; ++VAR_6)
  FUNC_0(VAR_5, VAR_6 + VAR_7, VAR_4[VAR_6]);

 return 0;
}

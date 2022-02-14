
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ipw_priv {int mutex; int * eeprom; } ;
struct ethtool_eeprom {size_t offset; int len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ipw_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
      struct ethtool_eeprom *VAR_3, u8 * VAR_4)
{
 struct ipw_priv *VAR_5 = FUNC_0(VAR_2);

 if (VAR_3->offset + VAR_3->len > VAR_1)
  return -VAR_0;
 FUNC_2(&VAR_5->mutex);
 FUNC_1(VAR_4, &VAR_5->eeprom[VAR_3->offset], VAR_3->len);
 FUNC_3(&VAR_5->mutex);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {scalar_t__ magic; int offset; int len; } ;
struct dev_priv {struct dev_info* adapter; } ;
struct dev_info {int hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,scalar_t__) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 struct dev_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
 struct ethtool_eeprom *VAR_5, u8 *VAR_6)
{
 struct dev_priv *VAR_7 = FUNC_3(VAR_4);
 struct dev_info *VAR_8 = VAR_7->adapter;
 u16 VAR_9[VAR_1];
 u8 *VAR_10 = (u8 *) VAR_9;
 int VAR_11;
 int VAR_12;

 if (VAR_5->magic != VAR_0)
  return -VAR_2;

 VAR_12 = (VAR_5->offset + VAR_5->len + 1) / 2;
 for (VAR_11 = VAR_5->offset / 2; VAR_11 < VAR_12; VAR_11++)
  VAR_3[VAR_11] = FUNC_0(&VAR_8->hw, VAR_11);
 FUNC_2(VAR_9, VAR_3, VAR_1 * 2);
 FUNC_2(&VAR_10[VAR_5->offset], VAR_6, VAR_5->len);
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
  if (VAR_9[VAR_11] != VAR_3[VAR_11]) {
   VAR_3[VAR_11] = VAR_9[VAR_11];
   FUNC_1(&VAR_8->hw, VAR_11, VAR_3[VAR_11]);
 }

 return 0;
}

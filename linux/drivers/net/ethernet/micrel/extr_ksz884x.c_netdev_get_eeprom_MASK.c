
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int offset; int len; int magic; } ;
struct dev_priv {struct dev_info* adapter; } ;
struct dev_info {int hw; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 struct dev_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
 struct ethtool_eeprom *VAR_3, u8 *VAR_4)
{
 struct dev_priv *VAR_5 = FUNC_2(VAR_2);
 struct dev_info *VAR_6 = VAR_5->adapter;
 u8 *VAR_7 = (u8 *) VAR_1;
 int VAR_8;
 int VAR_9;

 VAR_9 = (VAR_3->offset + VAR_3->len + 1) / 2;
 for (VAR_8 = VAR_3->offset / 2; VAR_8 < VAR_9; VAR_8++)
  VAR_1[VAR_8] = FUNC_0(&VAR_6->hw, VAR_8);
 VAR_3->magic = VAR_0;
 FUNC_1(VAR_4, &VAR_7[VAR_3->offset], VAR_3->len);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_modinfo {int eeprom_len; int type; } ;
struct be_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct be_adapter*,int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct be_adapter*,int ) ;
 struct be_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_7,
         struct ethtool_modinfo *VAR_8)
{
 struct be_adapter *VAR_9 = FUNC_3(VAR_7);
 u8 VAR_10[VAR_4];
 int VAR_11;

 if (!FUNC_2(VAR_9, VAR_3))
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_9, VAR_6,
         VAR_10);
 if (!VAR_11) {
  if (!VAR_10[VAR_5]) {
   VAR_8->type = VAR_1;
   VAR_8->eeprom_len = VAR_4;
  } else {
   VAR_8->type = VAR_2;
   VAR_8->eeprom_len = 2 * VAR_4;
  }
 }
 return FUNC_1(VAR_11);
}

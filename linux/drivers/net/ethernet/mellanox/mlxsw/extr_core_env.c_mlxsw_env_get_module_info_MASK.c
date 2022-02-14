
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u16 ;
struct mlxsw_core {int dummy; } ;
struct ethtool_modinfo {int eeprom_len; void* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;




 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct mlxsw_core*,int,int ,int,int*,unsigned int*) ;

int FUNC_1(struct mlxsw_core *VAR_13, int VAR_14,
         struct ethtool_modinfo *VAR_15)
{
 u8 VAR_16[VAR_11];
 u16 VAR_17 = VAR_11;
 u8 VAR_18, VAR_19, VAR_20;
 unsigned int VAR_21;
 int VAR_22;

 VAR_22 = FUNC_0(VAR_13, VAR_14, 0, VAR_17,
         VAR_16, &VAR_21);
 if (VAR_22)
  return VAR_22;

 if (VAR_21 < VAR_17)
  return -VAR_1;

 VAR_18 = VAR_16[VAR_9];
 VAR_19 = VAR_16[VAR_8];

 switch (VAR_19) {
 case 131:
  VAR_15->type = VAR_2;
  VAR_15->eeprom_len = VAR_3;
  break;
 case 129:
 case 130:
  if (VAR_19 == 130 ||
      VAR_18 >=
      VAR_10) {
   VAR_15->type = VAR_6;
   VAR_15->eeprom_len = VAR_7;
  } else {
   VAR_15->type = VAR_2;
   VAR_15->eeprom_len = VAR_3;
  }
  break;
 case 128:

  VAR_22 = FUNC_0(VAR_13, VAR_14,
          VAR_12, 1, &VAR_20,
          &VAR_21);
  if (VAR_22)
   return VAR_22;

  if (VAR_21 < 1)
   return -VAR_1;

  VAR_15->type = VAR_4;
  if (VAR_20)
   VAR_15->eeprom_len = VAR_5;
  else
   VAR_15->eeprom_len = VAR_5 / 2;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}

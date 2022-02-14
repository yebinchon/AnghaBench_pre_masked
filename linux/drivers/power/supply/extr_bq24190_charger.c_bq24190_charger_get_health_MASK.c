
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u8 ;
struct bq24190_dev_info {int f_reg; int f_reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct bq24190_dev_info *VAR_13,
  union power_supply_propval *VAR_14)
{
 u8 VAR_15;
 int VAR_16;

 FUNC_0(&VAR_13->f_reg_lock);
 VAR_15 = VAR_13->f_reg;
 FUNC_1(&VAR_13->f_reg_lock);

 if (VAR_15 & VAR_4) {
  switch (VAR_15 >> VAR_5 & 0x7) {
  case 0x1:
  case 0x3:
  case 0x5:
   VAR_16 = VAR_6;
   break;
  case 0x2:
  case 0x4:
  case 0x6:
   VAR_16 = VAR_8;
   break;
  default:
   VAR_16 = VAR_11;
  }
 } else if (VAR_15 & VAR_0) {
  VAR_16 = VAR_9;
 } else if (VAR_15 & VAR_2) {
  switch (VAR_15 >> VAR_3 & 0x3) {
  case 0x1:







   VAR_16 = VAR_12;
   break;
  case 0x2:
   VAR_16 = VAR_8;
   break;
  case 0x3:
   VAR_16 = VAR_10;
   break;
  default:
   VAR_16 = -1;
  }
 } else if (VAR_15 & VAR_1) {






  VAR_16 = VAR_9;
 } else {
  VAR_16 = VAR_7;
 }

 VAR_14->intval = VAR_16;

 return 0;
}

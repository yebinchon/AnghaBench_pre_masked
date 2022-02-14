
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct bq24190_dev_info *VAR_8,
  union power_supply_propval *VAR_9)
{
 u8 VAR_10;
 int VAR_11;

 FUNC_0(&VAR_8->f_reg_lock);
 VAR_10 = VAR_8->f_reg;
 FUNC_1(&VAR_8->f_reg_lock);

 if (VAR_10 & VAR_0) {
  VAR_11 = VAR_6;
 } else {
  VAR_10 &= VAR_1;
  VAR_10 >>= VAR_2;

  switch (VAR_10) {
  case 0x0:
   VAR_11 = VAR_4;
   break;
  case 0x1:
  case 0x3:
  case 0x5:
   VAR_11 = VAR_3;
   break;
  case 0x2:
  case 0x4:
  case 0x6:
   VAR_11 = VAR_5;
   break;
  default:
   VAR_11 = VAR_7;
  }
 }

 VAR_9->intval = VAR_11;
 return 0;
}

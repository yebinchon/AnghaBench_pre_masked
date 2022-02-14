
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
 int FUNC_0 (struct bq24190_dev_info*,int ,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct bq24190_dev_info *VAR_11,
  union power_supply_propval *VAR_12)
{
 u8 VAR_13, VAR_14;
 int VAR_15, VAR_16;

 FUNC_1(&VAR_11->f_reg_lock);
 VAR_14 = VAR_11->f_reg;
 FUNC_2(&VAR_11->f_reg_lock);

 VAR_14 &= VAR_0;
 VAR_14 >>= VAR_1;

 VAR_16 = FUNC_0(VAR_11, VAR_2, &VAR_13);
 if (VAR_16 < 0)
  return VAR_16;
 if (!(VAR_13 & VAR_5) || VAR_14) {
  VAR_15 = VAR_8;
 } else {
  VAR_13 &= VAR_3;
  VAR_13 >>= VAR_4;

  switch (VAR_13) {
  case 0x0:
   VAR_15 = VAR_10;
   break;
  case 0x1:
  case 0x2:
   VAR_15 = VAR_7;
   break;
  case 0x3:
   VAR_15 = VAR_9;
   break;
  default:
   VAR_16 = -VAR_6;
  }
 }

 if (!VAR_16)
  VAR_12->intval = VAR_15;

 return VAR_16;
}

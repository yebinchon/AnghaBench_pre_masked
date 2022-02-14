
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtsx_dev {int check_card_cd; scalar_t__ trans_state; int reg_lock; scalar_t__ done; void* trans_result; struct rtsx_chip* chip; } ;
struct rtsx_chip {int int_reg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtsx_chip*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_12, void *VAR_13)
{
 struct rtsx_dev *VAR_14 = VAR_13;
 struct rtsx_chip *VAR_15;
 int VAR_16;
 u32 VAR_17;

 if (VAR_14)
  VAR_15 = VAR_14->chip;
 else
  return VAR_3;

 if (!VAR_15)
  return VAR_3;

 FUNC_3(&VAR_14->reg_lock);

 VAR_16 = FUNC_2(VAR_15);
 if (VAR_16 == VAR_6) {
  FUNC_4(&VAR_14->reg_lock);
  if (VAR_15->int_reg == 0xFFFFFFFF)
   return VAR_2;
  return VAR_3;
 }

 VAR_17 = VAR_15->int_reg;

 if (VAR_14->check_card_cd) {
  if (!(VAR_14->check_card_cd & VAR_17)) {

   VAR_14->trans_result = VAR_10;
   if (VAR_14->done)
    FUNC_1(VAR_14->done);
   goto exit;
  }
 }

 if (VAR_17 & (VAR_4 | VAR_1)) {
  if (VAR_17 & (VAR_7 | VAR_1)) {
   if (VAR_17 & VAR_1)
    FUNC_0(VAR_15);
   VAR_14->trans_result = VAR_10;
   if (VAR_14->done)
    FUNC_1(VAR_14->done);
  } else if (VAR_17 & VAR_9) {
   VAR_14->trans_result = VAR_11;
   if (VAR_14->done)
    FUNC_1(VAR_14->done);
  } else if (VAR_17 & VAR_0) {
   VAR_14->trans_result = VAR_8;
   if (VAR_14->done && (VAR_14->trans_state == VAR_5))
    FUNC_1(VAR_14->done);
  }
 }

exit:
 FUNC_4(&VAR_14->reg_lock);
 return VAR_2;
}

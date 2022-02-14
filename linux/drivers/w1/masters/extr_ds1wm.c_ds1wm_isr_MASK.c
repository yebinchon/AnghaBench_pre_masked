
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds1wm_data {int int_en_reg_none; int slave_present; scalar_t__ reset_complete; scalar_t__ read_complete; void* read_byte; scalar_t__ write_complete; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (struct ds1wm_data*,int ) ;
 int FUNC_2 (struct ds1wm_data*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_13, void *VAR_14)
{
 struct ds1wm_data *VAR_15 = VAR_14;
 u8 VAR_16;
 u8 VAR_17 = FUNC_1(VAR_15, VAR_6);


 if (!(VAR_17 & VAR_5))
  return VAR_12;

 FUNC_2(VAR_15,
  VAR_6, VAR_15->int_en_reg_none);


 VAR_16 = FUNC_1(VAR_15, VAR_1);

 VAR_15->slave_present = (VAR_16 & VAR_8) ? 0 : 1;

 if ((VAR_16 & VAR_10) && VAR_15->write_complete) {
  VAR_17 &= ~VAR_4;
  FUNC_0(VAR_15->write_complete);
 }
 if (VAR_16 & VAR_9) {

  VAR_15->read_byte = FUNC_1(VAR_15,
  VAR_0);
  VAR_17 &= ~VAR_3;
  if (VAR_15->read_complete)
   FUNC_0(VAR_15->read_complete);
 }
 if ((VAR_16 & VAR_7) && VAR_15->reset_complete) {
  VAR_17 &= ~VAR_2;
  FUNC_0(VAR_15->reset_complete);
 }

 FUNC_2(VAR_15, VAR_6, VAR_17);
 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef unsigned int u32 ;
typedef int u16 ;
struct sc_data {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 int FUNC_0 (struct device*,char*,unsigned int,unsigned int,...) ;
 unsigned int FUNC_1 (int,unsigned long) ;

void FUNC_2(struct sc_data *VAR_26, u32 *VAR_27, u32 *VAR_28,
  u32 *VAR_29, unsigned int VAR_30, unsigned int VAR_31,
  unsigned int VAR_32, unsigned int VAR_33)
{
 struct device *VAR_34 = &VAR_26->pdev->dev;
 u32 VAR_35;
 int VAR_36, VAR_37;
 bool VAR_38;
 unsigned long VAR_39;
 u32 VAR_40, VAR_41;
 u32 VAR_42;
 u16 VAR_43 = 0;
 int VAR_44 = 0, VAR_45 = 0;
 u32 VAR_46 = 0, VAR_47 = 0, VAR_48 = 0;




 u32 *VAR_49 = VAR_28 + 1;
 u32 *VAR_50 = VAR_28 + 4;
 u32 *VAR_51 = VAR_28 + 5;
 u32 *VAR_52 = VAR_29 + 7;

 VAR_35 = VAR_27[0];


 VAR_35 &= ~(VAR_18 | VAR_23 | VAR_5 |
  VAR_7 | VAR_3 | VAR_2 | VAR_0 |
  VAR_4 | VAR_24 | VAR_9 | VAR_17 |
  VAR_8 | VAR_25 | VAR_6 | VAR_10);

 if (VAR_30 == VAR_32 && VAR_31 == VAR_33) {
  VAR_35 |= VAR_17;
  VAR_27[0] = VAR_35;
  return;
 }


 VAR_35 |= VAR_10;




 VAR_36 = VAR_30 / VAR_32;
 if (VAR_36 > 4) {
  VAR_35 |= VAR_3;
  VAR_37 = 2;
 } else if (VAR_36 > 2) {
  VAR_35 |= VAR_2;
  VAR_37 = 1;
 } else {
  VAR_37 = 0;
 }

 VAR_39 = VAR_32 - 1;
 VAR_40 = FUNC_1(((u64)(VAR_30 >> VAR_37) - 1) << 24, VAR_39);
 VAR_41 = 0;
 VAR_42 = 0;

 FUNC_0(VAR_34, "hs config: src_w = %d, dst_w = %d, decimation = %s, lin_acc_inc = %08x\n",
  VAR_30, VAR_32, VAR_37 == 2 ? "4x" :
  (VAR_37 == 1 ? "2x" : "none"), VAR_40);




 if (VAR_33 < (VAR_31 >> 2)) {
  VAR_38 = 1;
  VAR_35 |= VAR_24;
 } else {
  VAR_38 = 0;
 }

 if (VAR_38) {

  VAR_43 = (u16) ((VAR_33 << 10) / VAR_31);

  VAR_44 = VAR_43 + ((1 + VAR_43) >> 1);
  if (VAR_44 >= 1024)
   VAR_44 -= 1024;

  VAR_45 = VAR_44 +
    (1 + (VAR_44 >> 1)) -
    (1024 >> 1);

  if (VAR_45 < 0) {
   VAR_45 += VAR_44;
   VAR_44 *= 2;
  }

  FUNC_0(VAR_34, "vs config(RAV): src_h = %d, dst_h = %d, factor = %d, acc_init = %08x, acc_init_b = %08x\n",
   VAR_31, VAR_33, VAR_43, VAR_44,
   VAR_45);
 } else {

  VAR_46 = ((VAR_31 - 1) << 16) / (VAR_33 - 1);
  VAR_47 = 0;
  VAR_48 = 0;

  FUNC_0(VAR_34, "vs config(POLY): src_h = %d, dst_h = %d,row_acc_inc = %08x\n",
   VAR_31, VAR_33, VAR_46);
 }


 VAR_27[0] = VAR_35;
 VAR_27[1] = VAR_46;
 VAR_27[2] = VAR_47;
 VAR_27[3] = VAR_48;

 VAR_27[4] = ((VAR_41 & VAR_11) <<
   VAR_12) | (VAR_32 << VAR_22) |
   (VAR_33 << VAR_21);

 VAR_27[5] = (VAR_30 << VAR_20) | (VAR_31 << VAR_19);

 VAR_27[6] = (VAR_45 << VAR_15) |
  (VAR_44 << VAR_16);

 *VAR_49 = VAR_40;

 *VAR_50 = VAR_42 << VAR_1;

 *VAR_51 = VAR_43;

 *VAR_52 = (VAR_30 << VAR_14) | (VAR_31 << VAR_13);
}

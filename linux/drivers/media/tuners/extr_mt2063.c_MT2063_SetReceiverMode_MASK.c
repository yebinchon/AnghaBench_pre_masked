
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mt2063_state {int* reg; int rcvr_mode; } ;
typedef enum mt2063_delivery_sys { ____Placeholder_mt2063_delivery_sys } mt2063_delivery_sys ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 scalar_t__* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int* VAR_21 ;
 int* VAR_22 ;
 scalar_t__* VAR_23 ;
 scalar_t__* VAR_24 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct mt2063_state*,int*) ;
 int * VAR_25 ;
 int FUNC_2 (struct mt2063_state*,int) ;
 int FUNC_3 (struct mt2063_state*,size_t,int) ;

__attribute__((used)) static u32 FUNC_4(struct mt2063_state *VAR_26,
      enum mt2063_delivery_sys VAR_27)
{
 int VAR_28 = 0;
 u8 VAR_29;
 u32 VAR_30;

 FUNC_0(2, "\n");

 if (VAR_27 >= VAR_10)
  VAR_28 = -VAR_3;


 if (VAR_28 >= 0) {
  VAR_29 =
      (VAR_26->
       reg[VAR_18] & ~0x40) | (VAR_23[VAR_27]
           ? 0x40 :
           0x00);
  if (VAR_26->reg[VAR_18] != VAR_29)
   VAR_28 |= FUNC_3(VAR_26, VAR_18, VAR_29);
 }


 if (VAR_28 >= 0) {
  u8 VAR_31 = (VAR_26->reg[VAR_11] & ~0x03) |
    (VAR_7[VAR_27] & 0x03);
  if (VAR_26->reg[VAR_11] != VAR_31)
   VAR_28 |= FUNC_3(VAR_26, VAR_11, VAR_31);
 }


 if (VAR_28 >= 0) {
  VAR_29 =
      (VAR_26->
       reg[VAR_13] & ~0xF0) |
      (VAR_5[VAR_27] << 7) | (VAR_4[VAR_27] << 4);
  if (VAR_26->reg[VAR_13] != VAR_29) {
   VAR_28 |=
       FUNC_3(VAR_26, VAR_13, VAR_29);

   VAR_29 =
       (VAR_26->reg[VAR_12] | 0x01);
   VAR_28 |=
       FUNC_3(VAR_26, VAR_12, VAR_29);
   VAR_29 =
       (VAR_26->
        reg[VAR_12] & ~0x01);
   VAR_28 |=
       FUNC_3(VAR_26, VAR_12, VAR_29);
  }
 }


 VAR_28 |= FUNC_1(VAR_26, &VAR_30);
 VAR_28 |= FUNC_2(VAR_26, VAR_30);


 if (VAR_28 >= 0) {
  u8 VAR_32 = (VAR_26->reg[VAR_15] & ~0x1F) |
    (VAR_1[VAR_27] & 0x1F);
  if (VAR_26->reg[VAR_15] != VAR_32)
   VAR_28 |= FUNC_3(VAR_26, VAR_15, VAR_32);
 }


 if (VAR_28 >= 0) {
  u8 VAR_33 = (VAR_26->reg[VAR_16] & ~0x3F) |
    (VAR_8[VAR_27] & 0x3F);
  if (VAR_26->reg[VAR_16] != VAR_33)
   VAR_28 |= FUNC_3(VAR_26, VAR_16, VAR_33);
 }


 if (VAR_28 >= 0) {
  u8 VAR_34 = (VAR_26->reg[VAR_20] & ~0x1F) |
    (VAR_2[VAR_27] & 0x1F);
  if (VAR_26->reg[VAR_20] != VAR_34)
   VAR_28 |= FUNC_3(VAR_26, VAR_20, VAR_34);
 }


 if (VAR_28 >= 0) {
  u8 VAR_35 = (VAR_26->reg[VAR_18] & ~0x3F) |
    (VAR_21[VAR_27] & 0x3F);
  if (VAR_26->reg[VAR_18] != VAR_35)
   VAR_28 |= FUNC_3(VAR_26, VAR_18, VAR_35);
 }


 if (VAR_28 >= 0) {
  u8 VAR_36 = VAR_0[VAR_27];
  if (VAR_26->reg[VAR_17] != VAR_9 && VAR_36 > 5)
   VAR_36 = 5;
  VAR_36 = (VAR_26->reg[VAR_14] & ~0x1F) |
        (VAR_36 & 0x1F);
  if (VAR_26->reg[VAR_14] != VAR_36)
   VAR_28 |= FUNC_3(VAR_26, VAR_14, VAR_36);
 }


 if (VAR_28 >= 0) {
  u8 VAR_37 = (VAR_26->reg[VAR_19] & ~0x3F) |
      (VAR_22[VAR_27] & 0x3F);
  if (VAR_26->reg[VAR_19] != VAR_37)
   VAR_28 |= FUNC_3(VAR_26, VAR_19, VAR_37);
 }


 if (VAR_28 >= 0) {
  VAR_29 = (VAR_26->reg[VAR_16] & ~0x80) |
        (VAR_24[VAR_27] ? 0x80 : 0x00);
  if (VAR_26->reg[VAR_16] != VAR_29)
   VAR_28 |= FUNC_3(VAR_26, VAR_16, VAR_29);
 }


 if (VAR_28 >= 0) {
  VAR_29 = (VAR_26->reg[VAR_18] & ~0x80) |
        (VAR_6[VAR_27] ? 0x80 : 0x00);
  if (VAR_26->reg[VAR_18] != VAR_29)
   VAR_28 |= FUNC_3(VAR_26, VAR_18, VAR_29);
 }

 if (VAR_28 >= 0) {
  VAR_26->rcvr_mode = VAR_27;
  FUNC_0(1, "mt2063 mode changed to %s\n",
   VAR_25[VAR_26->rcvr_mode]);
 }

 return VAR_28;
}

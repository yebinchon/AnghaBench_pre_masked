
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct xd_info {int block_shift; } ;
struct rtsx_chip {struct xd_info xd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct xd_info*) ;
 int VAR_12 ;
 int FUNC_1 (struct xd_info*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (struct xd_info*) ;
 int FUNC_3 (struct xd_info*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_4 (struct rtsx_chip*,int ) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_8 (struct rtsx_chip*) ;
 int FUNC_9 (struct rtsx_chip*) ;
 int FUNC_10 (struct rtsx_chip*) ;
 int FUNC_11 (struct rtsx_chip*,int ,scalar_t__*) ;
 int FUNC_12 (struct rtsx_chip*,int ,int) ;
 int FUNC_13 (struct rtsx_chip*,int ,int,int ) ;
 int FUNC_14 (struct rtsx_chip*,int,int ) ;
 int FUNC_15 (struct rtsx_chip*,int) ;
 int FUNC_16 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_17(struct rtsx_chip *VAR_31, u32 VAR_32, u32 VAR_33,
   u8 VAR_34, u8 VAR_35)
{
 struct xd_info *VAR_36 = &VAR_31->xd_card;
 u32 VAR_37, VAR_38;
 u8 VAR_39, VAR_40 = 0;
 int VAR_41;

 FUNC_5(FUNC_9(VAR_31), "Copy page from block 0x%x to block 0x%x\n",
  VAR_32, VAR_33);

 if (VAR_34 > VAR_35)
  return VAR_5;

 if ((VAR_32 == VAR_0) || (VAR_33 == VAR_0))
  return VAR_5;

 VAR_37 = (VAR_32 << VAR_36->block_shift) + VAR_34;
 VAR_38 = (VAR_33 << VAR_36->block_shift) + VAR_34;

 FUNC_1(VAR_36);

 VAR_41 = FUNC_13(VAR_31, VAR_1, 0x01,
         VAR_3);
 if (VAR_41)
  return VAR_41;

 for (VAR_39 = VAR_34; VAR_39 < VAR_35; VAR_39++) {
  if (FUNC_4(VAR_31, VAR_11) != VAR_6) {
   FUNC_8(VAR_31);
   FUNC_16(VAR_31, VAR_20);
   return VAR_5;
  }

  FUNC_10(VAR_31);

  FUNC_14(VAR_31, VAR_37, VAR_25);

  FUNC_7(VAR_31, VAR_7, VAR_21, 0xFF, 1);
  FUNC_7(VAR_31, VAR_7, VAR_12,
        VAR_8, 0);
  FUNC_7(VAR_31, VAR_7, VAR_27, 0xFF,
        VAR_29 | VAR_24);
  FUNC_7(VAR_31, VAR_2, VAR_27,
        VAR_28, VAR_28);

  VAR_41 = FUNC_12(VAR_31, VAR_11, 500);
  if (VAR_41 < 0) {
   FUNC_8(VAR_31);
   VAR_40 = 0;
   FUNC_11(VAR_31, VAR_13, &VAR_40);
   if (VAR_40 & (VAR_15 | VAR_17)) {
    FUNC_6(100);

    if (FUNC_4(VAR_31,
         VAR_11) != VAR_6) {
     FUNC_16(VAR_31, VAR_20);
     return VAR_5;
    }

    if (((VAR_40 & VAR_15) &&
         (VAR_40 & VAR_16)) ||
        ((VAR_40 & VAR_17) &&
         (VAR_40 & VAR_18))) {
     FUNC_13(VAR_31,
           VAR_22,
           0xFF,
           VAR_10);
     FUNC_13(VAR_31,
           VAR_9,
           0xFF,
           VAR_19);
     FUNC_3(VAR_36);
     FUNC_5(FUNC_9(VAR_31), "old block 0x%x ecc error\n",
      VAR_32);
    }
   } else {
    FUNC_16(VAR_31, VAR_26);
    return VAR_5;
   }
  }

  if (FUNC_0(VAR_36))
   FUNC_8(VAR_31);

  FUNC_10(VAR_31);

  FUNC_14(VAR_31, VAR_38, VAR_25);
  FUNC_7(VAR_31, VAR_7, VAR_21, 0xFF, 1);
  FUNC_7(VAR_31, VAR_7, VAR_27, 0xFF,
        VAR_29 | VAR_30);
  FUNC_7(VAR_31, VAR_2, VAR_27,
        VAR_28, VAR_28);

  VAR_41 = FUNC_12(VAR_31, VAR_11, 300);
  if (VAR_41 < 0) {
   FUNC_8(VAR_31);
   VAR_40 = 0;
   FUNC_11(VAR_31, VAR_14, &VAR_40);
   if (VAR_40 & VAR_4) {
    FUNC_15(VAR_31, VAR_33);
    FUNC_16(VAR_31, VAR_23);
    FUNC_2(VAR_36);
   } else {
    FUNC_16(VAR_31, VAR_26);
   }
   return VAR_5;
  }

  VAR_37++;
  VAR_38++;
 }

 return VAR_6;
}

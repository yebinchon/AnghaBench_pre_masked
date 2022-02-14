
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ms_info {int dummy; } ;
struct rtsx_chip {struct ms_info ms_card; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ms_info*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int ) ;
 int FUNC_4 (struct rtsx_chip*,int ,scalar_t__,int,int) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (struct rtsx_chip*) ;
 int FUNC_8 (struct rtsx_chip*,scalar_t__,int*) ;
 int FUNC_9 (struct rtsx_chip*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct rtsx_chip *VAR_22,
     u8 VAR_23, u8 VAR_24, u8 VAR_25, u8 *VAR_26, int VAR_27)
{
 struct ms_info *VAR_28 = &VAR_22->ms_card;
 int VAR_29, VAR_30;

 if (!VAR_26 || (VAR_27 < VAR_24))
  return VAR_19;

 FUNC_7(VAR_22);

 for (VAR_30 = 0; VAR_30 < VAR_24; VAR_30++) {
  FUNC_4(VAR_22, VAR_21,
        VAR_18 + VAR_30, 0xFF, VAR_26[VAR_30]);
 }
 if (VAR_24 % 2)
  FUNC_4(VAR_22, VAR_21, VAR_18 + VAR_30, 0xFF, 0xFF);

 FUNC_4(VAR_22, VAR_21, VAR_12, 0xFF, VAR_23);
 FUNC_4(VAR_22, VAR_21, VAR_2, 0xFF, VAR_24);
 FUNC_4(VAR_22, VAR_21, VAR_16, 0xFF, VAR_25);
 FUNC_4(VAR_22, VAR_21, VAR_0,
       0x01, VAR_17);

 FUNC_4(VAR_22, VAR_21,
       VAR_13, 0xFF, VAR_15 | VAR_10);
 FUNC_4(VAR_22, VAR_1,
       VAR_13, VAR_14, VAR_14);

 VAR_29 = FUNC_9(VAR_22, VAR_3, 5000);
 if (VAR_29 < 0) {
  u8 VAR_31 = 0;

  FUNC_8(VAR_22, VAR_16, &VAR_31);
  FUNC_1(FUNC_6(VAR_22), "MS_TRANS_CFG: 0x%02x\n", VAR_31);

  FUNC_5(VAR_22);

  if (!(VAR_23 & 0x08)) {
   if (VAR_31 & VAR_5) {
    FUNC_3(VAR_22, VAR_6);
    return FUNC_2(VAR_22);
   }
  } else {
   if (FUNC_0(VAR_28) && !(VAR_31 & 0x80)) {
    if (VAR_31 & (VAR_8 | VAR_7)) {
     FUNC_3(VAR_22, VAR_4);
     return FUNC_2(VAR_22);
    }
   }
  }

  if (VAR_31 & VAR_9) {
   FUNC_3(VAR_22, VAR_11);
   return FUNC_2(VAR_22);
  }

  FUNC_3(VAR_22, VAR_11);
  return FUNC_2(VAR_22);
 }

 return VAR_20;
}

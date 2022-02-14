
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct xd_info {int block_shift; scalar_t__ page_off; } ;
struct rtsx_chip {int xd_timeout; TYPE_1__* srb; struct xd_info xd_card; } ;
struct TYPE_2__ {int sc_data_direction; } ;


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
 int FUNC_0 (struct xd_info*) ;
 int VAR_13 ;
 int FUNC_1 (struct xd_info*) ;
 int FUNC_2 (struct xd_info*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_3 (struct rtsx_chip*,int ) ;
 int FUNC_4 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (struct rtsx_chip*,int ,int*) ;
 int FUNC_8 (struct rtsx_chip*) ;
 int FUNC_9 (struct rtsx_chip*,int ,int*,int,int ,unsigned int*,unsigned int*,int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ,struct rtsx_chip*,int,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct rtsx_chip*,int,int ) ;
 int FUNC_14 (struct rtsx_chip*,int,int,int ,scalar_t__) ;
 int FUNC_15 (struct rtsx_chip*,int) ;
 int FUNC_16 (struct rtsx_chip*,int) ;
 int FUNC_17 (struct rtsx_chip*,int) ;
 int FUNC_18 (struct rtsx_chip*,int,int *,int ) ;
 int FUNC_19 (struct rtsx_chip*,int ) ;
 int FUNC_20 (struct rtsx_chip*,int,scalar_t__,scalar_t__) ;
 int FUNC_21 (struct rtsx_chip*,int) ;

__attribute__((used)) static int FUNC_22(struct rtsx_chip *VAR_33, u32 VAR_34,
      u32 VAR_35, u8 VAR_36, u8 VAR_37,
      u8 *VAR_38, unsigned int *VAR_39,
      unsigned int *VAR_40)
{
 struct xd_info *VAR_41 = &VAR_33->xd_card;
 u32 VAR_42, VAR_43;
 u16 VAR_44;
 u8 VAR_45, VAR_46;
 int VAR_47, VAR_48, VAR_49;

 if (VAR_36 > VAR_37)
  goto status_fail;

 VAR_46 = VAR_37 - VAR_36;
 VAR_47 = (int)(VAR_35 / 1000);
 VAR_44 = (u16)(VAR_35 % 1000);

 if ((VAR_34 & 0x3FF) == 0x3FF) {
  for (VAR_49 = 0; VAR_49 < 256; VAR_49++) {
   VAR_42 = ((u32)VAR_49) << VAR_41->block_shift;

   VAR_48 = FUNC_18(VAR_33, VAR_42, ((void*)0), 0);
   if (VAR_48 == VAR_8)
    break;

   if (FUNC_3(VAR_33, VAR_11) != VAR_8) {
    FUNC_19(VAR_33, VAR_21);
    goto status_fail;
   }
  }
 }

 VAR_42 = (VAR_34 << VAR_41->block_shift) + VAR_36;

 FUNC_6(VAR_33);

 FUNC_13(VAR_33, VAR_42, VAR_28);
 FUNC_4(VAR_33, VAR_9, VAR_12, VAR_25, VAR_25);
 FUNC_4(VAR_33, VAR_9, VAR_0, 0x01, VAR_6);
 FUNC_4(VAR_33, VAR_9, VAR_22, 0xFF, VAR_46);
 FUNC_4(VAR_33, VAR_9, VAR_13,
       VAR_10, VAR_10);

 FUNC_11(VAR_33->srb->sc_data_direction, VAR_33,
    VAR_46 * 512, VAR_2);

 FUNC_4(VAR_33, VAR_9, VAR_30, 0xFF,
       VAR_32 | VAR_27);
 FUNC_4(VAR_33, VAR_1, VAR_30,
       VAR_31 | VAR_24,
       VAR_31 | VAR_24);

 FUNC_8(VAR_33);

 VAR_48 = FUNC_9(VAR_33, VAR_11, VAR_38, VAR_46 * 512,
         FUNC_10(VAR_33->srb),
         VAR_39, VAR_40, VAR_3,
         VAR_33->xd_timeout);
 if (VAR_48 < 0) {
  FUNC_5(VAR_33);

  if (VAR_48 == -VAR_4) {
   FUNC_19(VAR_33, VAR_29);
   goto status_fail;
  } else {
   goto fail;
  }
 }

 return VAR_8;

fail:
 VAR_48 = FUNC_7(VAR_33, VAR_23, &VAR_45);
 if (VAR_48)
  return VAR_48;

 if (VAR_45 != VAR_20)
  FUNC_19(VAR_33, VAR_26);

 VAR_48 = FUNC_7(VAR_33, VAR_14, &VAR_45);
 if (VAR_48)
  return VAR_48;

 if (((VAR_45 & (VAR_15 | VAR_16)) ==
    (VAR_15 | VAR_16)) ||
  ((VAR_45 & (VAR_17 | VAR_18)) ==
   (VAR_17 | VAR_18))) {
  FUNC_12(100);

  if (FUNC_3(VAR_33, VAR_11) != VAR_8) {
   FUNC_19(VAR_33, VAR_21);
   goto status_fail;
  }

  FUNC_19(VAR_33, VAR_19);

  VAR_43 = FUNC_16(VAR_33, VAR_47);
  if (VAR_43 == VAR_5) {
   FUNC_2(VAR_41);
   goto status_fail;
  }

  VAR_48 = FUNC_14(VAR_33, VAR_34, VAR_43, 0,
          VAR_41->page_off + 1);
  if (VAR_48 != VAR_8) {
   if (!FUNC_0(VAR_41)) {
    VAR_48 = FUNC_15(VAR_33, VAR_43);
    if (VAR_48 == VAR_8)
     FUNC_21(VAR_33, VAR_43);
   } else {
    FUNC_1(VAR_41);
   }
   FUNC_2(VAR_41);
   goto status_fail;
  }
  FUNC_20(VAR_33, VAR_47, VAR_44, (u16)(VAR_43 & 0x3FF));
  FUNC_15(VAR_33, VAR_34);
  FUNC_17(VAR_33, VAR_34);
  FUNC_2(VAR_41);
 }

status_fail:
 return VAR_7;
}

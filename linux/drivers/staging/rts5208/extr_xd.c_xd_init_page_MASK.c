
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct xd_info {int block_shift; } ;
struct rtsx_chip {struct xd_info xd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int ,scalar_t__*) ;
 int FUNC_6 (struct rtsx_chip*,int ,int) ;
 int FUNC_7 (struct rtsx_chip*,int,int ) ;
 int FUNC_8 (struct rtsx_chip*,int) ;
 int FUNC_9 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_10(struct rtsx_chip *VAR_22, u32 VAR_23,
   u16 VAR_24, u8 VAR_25, u8 VAR_26)
{
 struct xd_info *VAR_27 = &VAR_22->xd_card;
 int VAR_28;
 u32 VAR_29;
 u8 VAR_30 = 0;

 FUNC_0(FUNC_3(VAR_22), "Init block 0x%x\n", VAR_23);

 if (VAR_25 > VAR_26)
  return VAR_3;
 if (VAR_23 == VAR_0)
  return VAR_3;

 FUNC_4(VAR_22);

 FUNC_1(VAR_22, VAR_5, VAR_14, 0xFF, 0xFF);
 FUNC_1(VAR_22, VAR_5, VAR_9, 0xFF, 0xFF);
 FUNC_1(VAR_22, VAR_5, VAR_7,
       0xFF, (u8)(VAR_24 >> 8));
 FUNC_1(VAR_22, VAR_5, VAR_8, 0xFF, (u8)VAR_24);

 VAR_29 = (VAR_23 << VAR_27->block_shift) + VAR_25;

 FUNC_7(VAR_22, VAR_29, VAR_16);

 FUNC_1(VAR_22, VAR_5, VAR_11,
       VAR_6, VAR_6);

 FUNC_1(VAR_22, VAR_5, VAR_13,
       0xFF, (VAR_26 - VAR_25));

 FUNC_1(VAR_22, VAR_5, VAR_18,
       0xFF, VAR_20 | VAR_21);
 FUNC_1(VAR_22, VAR_1, VAR_18,
       VAR_19, VAR_19);

 VAR_28 = FUNC_6(VAR_22, VAR_10, 500);
 if (VAR_28 < 0) {
  FUNC_2(VAR_22);
  FUNC_5(VAR_22, VAR_12, &VAR_30);
  if (VAR_30 & VAR_2) {
   FUNC_8(VAR_22, VAR_23);
   FUNC_9(VAR_22, VAR_15);
  } else {
   FUNC_9(VAR_22, VAR_17);
  }
  return VAR_3;
 }

 return VAR_4;
}

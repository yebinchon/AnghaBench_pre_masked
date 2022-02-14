
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xd_info {int block_shift; int page_off; } ;
struct rtsx_chip {struct xd_info xd_card; } ;


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
 int VAR_13 ;
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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int ,int*) ;
 int FUNC_6 (struct rtsx_chip*,int ,int) ;
 int FUNC_7 (struct rtsx_chip*,int,int ) ;
 int FUNC_8 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_9(struct rtsx_chip *VAR_28, u32 VAR_29)
{
 struct xd_info *VAR_30 = &VAR_28->xd_card;
 int VAR_31;
 u32 VAR_32;
 u8 VAR_33 = 0;

 FUNC_0(FUNC_3(VAR_28), "mark block 0x%x as bad block\n", VAR_29);

 if (VAR_29 == VAR_0)
  return VAR_3;

 FUNC_4(VAR_28);

 FUNC_1(VAR_28, VAR_5, VAR_16, 0xFF, VAR_13);
 FUNC_1(VAR_28, VAR_5, VAR_10, 0xFF, VAR_14);
 FUNC_1(VAR_28, VAR_5, VAR_6, 0xFF, 0xFF);
 FUNC_1(VAR_28, VAR_5, VAR_7, 0xFF, 0xFF);
 FUNC_1(VAR_28, VAR_5, VAR_8, 0xFF, 0xFF);
 FUNC_1(VAR_28, VAR_5, VAR_9, 0xFF, 0xFF);
 FUNC_1(VAR_28, VAR_5, VAR_18, 0xFF, 0xFF);
 FUNC_1(VAR_28, VAR_5, VAR_19, 0xFF, 0xFF);
 FUNC_1(VAR_28, VAR_5, VAR_20, 0xFF, 0xFF);
 FUNC_1(VAR_28, VAR_5, VAR_21, 0xFF, 0xFF);

 VAR_32 = VAR_29 << VAR_30->block_shift;

 FUNC_7(VAR_28, VAR_32, VAR_22);

 FUNC_1(VAR_28, VAR_5, VAR_15, 0xFF,
       VAR_30->page_off + 1);

 FUNC_1(VAR_28, VAR_5, VAR_24, 0xFF,
       VAR_26 | VAR_27);
 FUNC_1(VAR_28, VAR_1, VAR_24,
       VAR_25, VAR_25);

 VAR_31 = FUNC_6(VAR_28, VAR_11, 500);
 if (VAR_31 < 0) {
  FUNC_2(VAR_28);
  FUNC_5(VAR_28, VAR_12, &VAR_33);
  if (VAR_33 & VAR_2)
   FUNC_8(VAR_28, VAR_17);
  else
   FUNC_8(VAR_28, VAR_23);
  return VAR_3;
 }

 return VAR_4;
}

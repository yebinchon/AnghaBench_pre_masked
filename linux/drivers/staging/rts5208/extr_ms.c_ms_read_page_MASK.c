
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ms_info {int dummy; } ;
struct rtsx_chip {struct ms_info ms_card; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ms_info*) ;
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
 scalar_t__ FUNC_1 (struct rtsx_chip*,int ) ;
 int FUNC_2 (struct rtsx_chip*,int ,int,int ,int*,int) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int ,int ) ;
 int FUNC_5 (struct rtsx_chip*,int ) ;
 int FUNC_6 (struct rtsx_chip*,int ,int ,int ,int) ;
 int FUNC_7 (struct rtsx_chip*,int ,int ,int ,int ) ;
 int FUNC_8 (struct rtsx_chip*,int ,int,int ,int*,int) ;

__attribute__((used)) static int FUNC_9(struct rtsx_chip *VAR_21, u16 VAR_22, u8 VAR_23)
{
 struct ms_info *VAR_24 = &VAR_21->ms_card;
 int VAR_25;
 u8 VAR_26, VAR_27[6];

 VAR_25 = FUNC_6(VAR_21, VAR_14, VAR_8,
        VAR_18, 6);
 if (VAR_25 != VAR_17)
  return VAR_16;

 if (FUNC_0(VAR_24))
  VAR_27[0] = 0x88;
 else
  VAR_27[0] = 0x80;

 VAR_27[1] = 0;
 VAR_27[2] = (u8)(VAR_22 >> 8);
 VAR_27[3] = (u8)VAR_22;
 VAR_27[4] = 0x20;
 VAR_27[5] = VAR_23;

 VAR_25 = FUNC_8(VAR_21, VAR_20, 6, VAR_13, VAR_27, 6);
 if (VAR_25 != VAR_17)
  return VAR_16;

 VAR_25 = FUNC_4(VAR_21, VAR_0, VAR_19);
 if (VAR_25 != VAR_17)
  return VAR_16;

 FUNC_5(VAR_21, VAR_11);
 VAR_25 = FUNC_2(VAR_21, VAR_1, 1, VAR_13, &VAR_26, 1);
 if (VAR_25 != VAR_17)
  return VAR_16;

 if (VAR_26 & VAR_4) {
  FUNC_5(VAR_21, VAR_7);
  return VAR_16;
 }

 if (VAR_26 & VAR_3) {
  if (VAR_26 & VAR_5) {
   if (!(VAR_26 & VAR_2)) {
    FUNC_5(VAR_21, VAR_9);
    return VAR_16;
   }
   VAR_25 = FUNC_3(VAR_21);
   if (VAR_25 != VAR_17)
    FUNC_5(VAR_21, VAR_10);

  } else {
   if (!(VAR_26 & VAR_2)) {
    FUNC_5(VAR_21, VAR_6);
    return VAR_16;
   }
  }
 }

 VAR_25 = FUNC_7(VAR_21, VAR_12, VAR_15,
     0, VAR_13);
 if (VAR_25 != VAR_17)
  return VAR_16;

 if (FUNC_1(VAR_21, VAR_10))
  return VAR_16;

 return VAR_17;
}


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
 int FUNC_1 (struct rtsx_chip*,int ,int,int ,int*,int) ;
 int FUNC_2 (struct rtsx_chip*,int ,int ) ;
 int FUNC_3 (struct rtsx_chip*,int) ;
 int FUNC_4 (struct rtsx_chip*,int ) ;
 int FUNC_5 (struct rtsx_chip*,int ,int ,int ,int) ;
 int FUNC_6 (struct rtsx_chip*,int ,int,int ,int*,int) ;

__attribute__((used)) static int FUNC_7(struct rtsx_chip *VAR_16, u16 VAR_17)
{
 struct ms_info *VAR_18 = &VAR_16->ms_card;
 int VAR_19, VAR_20 = 0;
 u8 VAR_21, VAR_22[6];

 VAR_19 = FUNC_5(VAR_16, VAR_10, VAR_6,
        VAR_13, 6);
 if (VAR_19 != VAR_12)
  return VAR_11;

 FUNC_4(VAR_16, VAR_8);

 if (FUNC_0(VAR_18))
  VAR_22[0] = 0x88;
 else
  VAR_22[0] = 0x80;

 VAR_22[1] = 0;
 VAR_22[2] = (u8)(VAR_17 >> 8);
 VAR_22[3] = (u8)VAR_17;
 VAR_22[4] = 0;
 VAR_22[5] = 0;

 VAR_19 = FUNC_6(VAR_16, VAR_15, 6, VAR_9, VAR_22, 6);
 if (VAR_19 != VAR_12)
  return VAR_11;

ERASE_RTY:
 VAR_19 = FUNC_2(VAR_16, VAR_0, VAR_14);
 if (VAR_19 != VAR_12)
  return VAR_11;

 FUNC_4(VAR_16, VAR_8);
 VAR_19 = FUNC_1(VAR_16, VAR_1, 1, VAR_9, &VAR_21, 1);
 if (VAR_19 != VAR_12)
  return VAR_11;

 if (VAR_21 & VAR_3) {
  if (VAR_20 < 3) {
   VAR_20++;
   goto ERASE_RTY;
  }

  FUNC_4(VAR_16, VAR_5);
  FUNC_3(VAR_16, VAR_17);
  return VAR_11;
 }

 if (VAR_21 & VAR_2) {
  if (VAR_21 & VAR_4) {
   FUNC_4(VAR_16, VAR_7);
   return VAR_11;
  }
 }

 return VAR_12;
}

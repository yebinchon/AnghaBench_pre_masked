
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
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (struct rtsx_chip*,int ,int,int ,int*,int) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int ,int ) ;
 int FUNC_5 (struct rtsx_chip*,int ) ;
 int FUNC_6 (struct rtsx_chip*,int ,int,int ,int) ;
 int FUNC_7 (struct rtsx_chip*,int ,int,int ,int*,int) ;

__attribute__((used)) static int FUNC_8(struct rtsx_chip *VAR_17,
         u16 VAR_18, u8 VAR_19, u8 *VAR_20, int VAR_21)
{
 struct ms_info *VAR_22 = &VAR_17->ms_card;
 int VAR_23, VAR_24;
 u8 VAR_25, VAR_26[10];

 VAR_23 = FUNC_6(VAR_17, VAR_10, VAR_6,
        VAR_14, 6);
 if (VAR_23 != VAR_13)
  return VAR_12;

 if (FUNC_0(VAR_22)) {

  VAR_26[0] = 0x88;
 } else {

  VAR_26[0] = 0x80;
 }
 VAR_26[1] = 0;
 VAR_26[2] = (u8)(VAR_18 >> 8);
 VAR_26[3] = (u8)VAR_18;
 VAR_26[4] = 0x40;
 VAR_26[5] = VAR_19;

 for (VAR_24 = 0; VAR_24 < VAR_7; VAR_24++) {
  VAR_23 = FUNC_7(VAR_17, VAR_16, 6, VAR_9,
     VAR_26, 6);
  if (VAR_23 == VAR_13)
   break;
 }
 if (VAR_24 == VAR_7)
  return VAR_12;

 FUNC_5(VAR_17, VAR_8);

 for (VAR_24 = 0; VAR_24 < VAR_7; VAR_24++) {
  VAR_23 = FUNC_4(VAR_17, VAR_0, VAR_15);
  if (VAR_23 == VAR_13)
   break;
 }
 if (VAR_24 == VAR_7)
  return VAR_12;

 FUNC_5(VAR_17, VAR_8);
 VAR_23 = FUNC_2(VAR_17, VAR_1, 1, VAR_9, &VAR_25, 1);
 if (VAR_23 != VAR_13)
  return VAR_12;

 if (VAR_25 & VAR_3) {
  FUNC_5(VAR_17, VAR_5);
  return VAR_12;
 }
 if (VAR_25 & VAR_2) {
  if (VAR_25 & VAR_4) {
   VAR_23 = FUNC_3(VAR_17);
   if (VAR_23 != VAR_13)
    return VAR_12;

   VAR_23 = FUNC_6(VAR_17, VAR_10,
          VAR_6, VAR_14,
          6);
   if (VAR_23 != VAR_13)
    return VAR_12;
  }
 }

 VAR_23 = FUNC_2(VAR_17, VAR_11, VAR_6, VAR_9,
          VAR_26, VAR_6);
 if (VAR_23 != VAR_13)
  return VAR_12;

 if (VAR_20 && VAR_21) {
  if (VAR_21 > VAR_6)
   VAR_21 = VAR_6;
  FUNC_1(VAR_20, VAR_26, VAR_21);
 }

 return VAR_13;
}

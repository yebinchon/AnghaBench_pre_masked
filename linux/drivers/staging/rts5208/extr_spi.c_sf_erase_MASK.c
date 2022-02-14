
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtsx_chip {int dummy; } ;


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
 int FUNC_0 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int ,int) ;
 int FUNC_4 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_5(struct rtsx_chip *VAR_17, u8 VAR_18, u8 VAR_19, u32 VAR_20)
{
 int VAR_21;

 FUNC_2(VAR_17);

 FUNC_0(VAR_17, VAR_16, VAR_7, 0xFF, VAR_18);
 FUNC_0(VAR_17, VAR_16, VAR_6, 0xFF,
       VAR_8 | VAR_4);
 if (VAR_19) {
  FUNC_0(VAR_17, VAR_16, VAR_1, 0xFF, (u8)VAR_20);
  FUNC_0(VAR_17, VAR_16, VAR_2, 0xFF,
        (u8)(VAR_20 >> 8));
  FUNC_0(VAR_17, VAR_16, VAR_3, 0xFF,
        (u8)(VAR_20 >> 16));
  FUNC_0(VAR_17, VAR_16, VAR_11, 0xFF,
        VAR_13 | VAR_5);
 } else {
  FUNC_0(VAR_17, VAR_16, VAR_11, 0xFF,
        VAR_13 | VAR_9);
 }
 FUNC_0(VAR_17, VAR_0, VAR_11, VAR_12,
       VAR_12);

 VAR_21 = FUNC_3(VAR_17, 0, 100);
 if (VAR_21 < 0) {
  FUNC_1(VAR_17);
  FUNC_4(VAR_17, VAR_10);
  return VAR_14;
 }

 return VAR_15;
}

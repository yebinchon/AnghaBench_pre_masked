
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
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
 int FUNC_0 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int ,int) ;
 int FUNC_3 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*) ;

int FUNC_6(struct rtsx_chip *VAR_15, u16 VAR_16)
{
 int VAR_17;

 VAR_17 = FUNC_5(VAR_15);
 if (VAR_17 != VAR_13)
  return VAR_12;

 VAR_17 = FUNC_4(VAR_15);
 if (VAR_17 != VAR_13)
  return VAR_12;

 FUNC_1(VAR_15);

 FUNC_0(VAR_15, VAR_14, VAR_1, 0x01, 0);
 FUNC_0(VAR_15, VAR_14, VAR_0, 0x01, VAR_3);
 FUNC_0(VAR_15, VAR_14, VAR_8, 0xFF, 0x07);
 FUNC_0(VAR_15, VAR_14, VAR_4, 0xFF, (u8)VAR_16);
 FUNC_0(VAR_15, VAR_14, VAR_5, 0xFF, (u8)(VAR_16 >> 8));
 FUNC_0(VAR_15, VAR_14, VAR_7, 0xFF, 0x46);
 FUNC_0(VAR_15, VAR_14, VAR_9, 0xFF,
       VAR_11 | VAR_6);
 FUNC_0(VAR_15, VAR_2, VAR_9, VAR_10,
       VAR_10);

 VAR_17 = FUNC_2(VAR_15, 0, 100);
 if (VAR_17 < 0)
  return VAR_12;

 VAR_17 = FUNC_3(VAR_15, VAR_1, 0x01, 0x01);
 if (VAR_17)
  return VAR_17;

 return VAR_13;
}

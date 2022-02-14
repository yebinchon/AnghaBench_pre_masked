
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
 int VAR_15 ;
 int FUNC_0 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int ,int) ;
 int FUNC_3 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*) ;

int FUNC_6(struct rtsx_chip *VAR_16, u16 VAR_17, u8 VAR_18)
{
 int VAR_19;

 VAR_19 = FUNC_5(VAR_16);
 if (VAR_19 != VAR_14)
  return VAR_13;

 VAR_19 = FUNC_4(VAR_16);
 if (VAR_19 != VAR_14)
  return VAR_13;

 FUNC_1(VAR_16);

 FUNC_0(VAR_16, VAR_15, VAR_1, 0x01, 0);
 FUNC_0(VAR_16, VAR_15, VAR_0, 0x01, VAR_3);
 FUNC_0(VAR_16, VAR_15, VAR_9, 0xFF, 0x05);
 FUNC_0(VAR_16, VAR_15, VAR_4, 0xFF, VAR_18);
 FUNC_0(VAR_16, VAR_15, VAR_5, 0xFF, (u8)VAR_17);
 FUNC_0(VAR_16, VAR_15, VAR_6, 0xFF, (u8)(VAR_17 >> 8));
 FUNC_0(VAR_16, VAR_15, VAR_8, 0xFF, 0x4E);
 FUNC_0(VAR_16, VAR_15, VAR_10, 0xFF,
       VAR_12 | VAR_7);
 FUNC_0(VAR_16, VAR_2, VAR_10, VAR_11,
       VAR_11);

 VAR_19 = FUNC_2(VAR_16, 0, 100);
 if (VAR_19 < 0)
  return VAR_13;

 VAR_19 = FUNC_3(VAR_16, VAR_1, 0x01, 0x01);
 if (VAR_19)
  return VAR_19;

 return VAR_14;
}

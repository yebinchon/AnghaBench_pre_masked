
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_0 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int ,int) ;
 int FUNC_3 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*) ;

int FUNC_6(struct rtsx_chip *VAR_13)
{
 int VAR_14;

 VAR_14 = FUNC_5(VAR_13);
 if (VAR_14 != VAR_11)
  return VAR_10;

 VAR_14 = FUNC_4(VAR_13);
 if (VAR_14 != VAR_11)
  return VAR_10;

 FUNC_1(VAR_13);

 FUNC_0(VAR_13, VAR_12, VAR_1, 0x01, 0);
 FUNC_0(VAR_13, VAR_12, VAR_0, 0x01, VAR_3);
 FUNC_0(VAR_13, VAR_12, VAR_6, 0xFF, 0x12);
 FUNC_0(VAR_13, VAR_12, VAR_5, 0xFF, 0x84);
 FUNC_0(VAR_13, VAR_12, VAR_7, 0xFF,
       VAR_9 | VAR_4);
 FUNC_0(VAR_13, VAR_2, VAR_7, VAR_8,
       VAR_8);

 VAR_14 = FUNC_2(VAR_13, 0, 100);
 if (VAR_14 < 0)
  return VAR_10;

 VAR_14 = FUNC_3(VAR_13, VAR_1, 0x01, 0x01);
 if (VAR_14)
  return VAR_14;

 return VAR_11;
}

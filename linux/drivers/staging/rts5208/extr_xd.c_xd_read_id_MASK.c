
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
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (struct rtsx_chip*,int ,int ,int,int) ;
 int* FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct rtsx_chip *VAR_12, u8 VAR_13, u8 *VAR_14, u8 VAR_15)
{
 int VAR_16, VAR_17;
 u8 *VAR_18;

 FUNC_3(VAR_12);

 FUNC_1(VAR_12, VAR_4, VAR_7, 0xFF, VAR_13);
 FUNC_1(VAR_12, VAR_4, VAR_9, 0xFF,
       VAR_11 | VAR_8);
 FUNC_1(VAR_12, VAR_0, VAR_9, VAR_10,
       VAR_10);

 for (VAR_17 = 0; VAR_17 < 4; VAR_17++)
  FUNC_1(VAR_12, VAR_1, (u16)(VAR_5 + VAR_17), 0, 0);

 VAR_16 = FUNC_4(VAR_12, VAR_6, 20);
 if (VAR_16 < 0)
  return VAR_2;

 VAR_18 = FUNC_2(VAR_12) + 1;
 if (VAR_14 && VAR_15) {
  if (VAR_15 > 4)
   VAR_15 = 4;
  FUNC_0(VAR_14, VAR_18, VAR_15);
 }

 return VAR_3;
}

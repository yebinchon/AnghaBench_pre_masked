
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int* FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct rtsx_chip *VAR_15)
{
 int VAR_16;
 u8 *VAR_17;

 FUNC_2(VAR_15);

 FUNC_0(VAR_15, VAR_6, VAR_12,
       0xFF, VAR_14 | VAR_11);
 FUNC_0(VAR_15, VAR_0, VAR_12,
       VAR_13, VAR_13);
 FUNC_0(VAR_15, VAR_3, VAR_9, 0, 0);
 FUNC_0(VAR_15, VAR_3, VAR_8, 0, 0);

 VAR_16 = FUNC_3(VAR_15, VAR_7, 100);
 if (VAR_16 < 0)
  return VAR_4;

 VAR_17 = FUNC_1(VAR_15) + 1;
 if (((VAR_17[0] & VAR_1) == VAR_2) && (VAR_17[1] & VAR_10))
  return VAR_5;

 return VAR_4;
}

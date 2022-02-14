
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
 scalar_t__ FUNC_0 (struct rtsx_chip*,int ) ;
 scalar_t__ FUNC_1 (struct rtsx_chip*,int) ;
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
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_2 (struct rtsx_chip*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct rtsx_chip *VAR_30)
{
 int VAR_31;

 if (FUNC_1(VAR_30, 0x5208)) {
  VAR_31 = FUNC_2(VAR_30, VAR_0, 0xFF,
          VAR_27 | VAR_20 | VAR_11 |
          VAR_18);
  if (VAR_31)
   return VAR_31;
  VAR_31 = FUNC_2(VAR_30, VAR_1, 0xFF,
          VAR_19 | VAR_13 | VAR_14 |
          VAR_28);
  if (VAR_31)
   return VAR_31;
  VAR_31 = FUNC_2(VAR_30, VAR_2, 0xFF,
          VAR_17 | VAR_25 | VAR_26 |
          VAR_24);
  if (VAR_31)
   return VAR_31;
  VAR_31 = FUNC_2(VAR_30, VAR_3, 0xFF,
          VAR_29 | VAR_16 | VAR_15 |
          VAR_23);
  if (VAR_31)
   return VAR_31;
  VAR_31 = FUNC_2(VAR_30, VAR_4, 0xFF,
          VAR_8 | VAR_21 | VAR_10 |
          VAR_12);
  if (VAR_31)
   return VAR_31;
  VAR_31 = FUNC_2(VAR_30, VAR_5, 0xFF,
          VAR_7 | VAR_6);
  if (VAR_31)
   return VAR_31;
 } else if (FUNC_1(VAR_30, 0x5288)) {
  if (FUNC_0(VAR_30, VAR_9)) {
   VAR_31 = FUNC_2(VAR_30, VAR_0,
           0xFF, 0x55);
   if (VAR_31)
    return VAR_31;
   VAR_31 = FUNC_2(VAR_30, VAR_1,
           0xFF, 0x55);
   if (VAR_31)
    return VAR_31;
   VAR_31 = FUNC_2(VAR_30, VAR_2,
           0xFF, 0x4B);
   if (VAR_31)
    return VAR_31;
   VAR_31 = FUNC_2(VAR_30, VAR_3,
           0xFF, 0x69);
   if (VAR_31)
    return VAR_31;
  }
 }

 return VAR_22;
}

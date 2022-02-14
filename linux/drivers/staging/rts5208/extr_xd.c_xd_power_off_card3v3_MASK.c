
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {scalar_t__ asic_code; int ft2_fast_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtsx_chip*,int ) ;
 int FUNC_1 (struct rtsx_chip*,int ) ;
 int FUNC_2 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rtsx_chip*) ;

int FUNC_5(struct rtsx_chip *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_4);
 if (VAR_7 != VAR_3)
  return VAR_2;

 VAR_7 = FUNC_2(VAR_6, VAR_0, VAR_5, 0);
 if (VAR_7)
  return VAR_7;

 if (!VAR_6->ft2_fast_mode) {
  VAR_7 = FUNC_0(VAR_6, VAR_4);
  if (VAR_7 != VAR_3)
   return VAR_2;

  FUNC_3(50);
 }

 if (VAR_6->asic_code) {
  VAR_7 = FUNC_4(VAR_6);
  if (VAR_7 != VAR_3)
   return VAR_2;
 } else {
  VAR_7 = FUNC_2(VAR_6, VAR_1, 0xFF, 0xDF);
  if (VAR_7)
   return VAR_7;
 }

 return VAR_3;
}

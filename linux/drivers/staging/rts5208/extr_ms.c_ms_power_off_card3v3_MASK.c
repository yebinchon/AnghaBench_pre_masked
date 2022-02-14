
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {int ft2_fast_mode; scalar_t__ asic_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtsx_chip*,int ) ;
 int FUNC_1 (struct rtsx_chip*,int ) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int ,int,int) ;

int FUNC_4(struct rtsx_chip *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_3);
 if (VAR_8 != VAR_6)
  return VAR_5;

 if (VAR_7->asic_code) {
  VAR_8 = FUNC_2(VAR_7);
  if (VAR_8 != VAR_6)
   return VAR_5;
 } else {
  VAR_8 = FUNC_3(VAR_7, VAR_2,
          VAR_1 | 0x20,
          VAR_1);
  if (VAR_8)
   return VAR_8;
 }
 VAR_8 = FUNC_3(VAR_7, VAR_0, VAR_4, 0);
 if (VAR_8)
  return VAR_8;

 if (!VAR_7->ft2_fast_mode) {
  VAR_8 = FUNC_0(VAR_7, VAR_3);
  if (VAR_8 != VAR_6)
   return VAR_5;
 }

 return VAR_6;
}

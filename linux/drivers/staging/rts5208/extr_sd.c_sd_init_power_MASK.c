
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {int ocp_stat; int ft2_fast_mode; scalar_t__ asic_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rtsx_chip*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct rtsx_chip*,int ) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct rtsx_chip *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10 != VAR_8)
  return VAR_7;

 if (!VAR_9->ft2_fast_mode)
  FUNC_7(250);

 VAR_10 = FUNC_2(VAR_9, VAR_3);
 if (VAR_10 != VAR_8)
  return VAR_7;

 if (VAR_9->asic_code) {
  VAR_10 = FUNC_6(VAR_9);
  if (VAR_10 != VAR_8)
   return VAR_7;
 } else {
  VAR_10 = FUNC_4(VAR_9, VAR_1,
          VAR_2 | 0x20, 0);
  if (VAR_10)
   return VAR_10;
 }

 if (!VAR_9->ft2_fast_mode) {
  VAR_10 = FUNC_0(VAR_9, VAR_3);
  if (VAR_10 != VAR_8)
   return VAR_7;

  FUNC_7(260);
 }

 VAR_10 = FUNC_4(VAR_9, VAR_0, VAR_6,
         VAR_6);
 if (VAR_10)
  return VAR_10;

 return VAR_8;
}

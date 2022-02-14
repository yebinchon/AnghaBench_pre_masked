
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_info {int sd_clock; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 scalar_t__ FUNC_0 (struct sd_info*) ;
 scalar_t__ FUNC_1 (struct sd_info*) ;
 scalar_t__ FUNC_2 (struct sd_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*,int ) ;
 int FUNC_7 (struct rtsx_chip*,int ) ;

int FUNC_8(struct rtsx_chip *VAR_3)
{
 struct sd_info *VAR_4 = &VAR_3->sd_card;
 int VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_6(VAR_3, VAR_0);
 if (VAR_5 != VAR_2)
  return VAR_1;

 VAR_5 = FUNC_7(VAR_3, VAR_4->sd_clock);
 if (VAR_5 != VAR_2)
  return VAR_1;

 if (VAR_6) {
  if (FUNC_1(VAR_4)) {
   if (FUNC_2(VAR_4))
    VAR_5 = FUNC_4(VAR_3);
   else
    VAR_5 = FUNC_5(VAR_3);
  } else {
   if (FUNC_0(VAR_4))
    VAR_5 = FUNC_3(VAR_3);
  }

  if (VAR_5 != VAR_2)
   return VAR_1;
 }

 return VAR_2;
}

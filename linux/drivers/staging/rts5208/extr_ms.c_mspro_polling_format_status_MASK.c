
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms_info {scalar_t__ format_status; scalar_t__ pro_under_formatting; } ;
struct rtsx_chip {struct ms_info ms_card; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtsx_chip*,int ) ;
 scalar_t__ FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int ) ;

void FUNC_3(struct rtsx_chip *VAR_4)
{
 struct ms_info *VAR_5 = &VAR_4->ms_card;
 int VAR_6;

 if (VAR_5->pro_under_formatting &&
     (FUNC_1(VAR_4) != VAR_3)) {
  FUNC_2(VAR_4, VAR_2);

  for (VAR_6 = 0; VAR_6 < 65535; VAR_6++) {
   FUNC_0(VAR_4, VAR_1);
   if (VAR_5->format_status != VAR_0)
    break;
  }
 }
}

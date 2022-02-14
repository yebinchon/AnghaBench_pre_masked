
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ delay_write_flag; } ;
struct ms_info {int raw_model_name; int raw_sys_info; scalar_t__ pro_under_formatting; TYPE_1__ delay_write; } ;
struct rtsx_chip {int card_wp; int card_fail; int card_ready; struct ms_info ms_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;

int FUNC_3(struct rtsx_chip *VAR_3)
{
 struct ms_info *VAR_4 = &VAR_3->ms_card;
 int VAR_5;




 VAR_4->pro_under_formatting = 0;

 VAR_3->card_ready &= ~VAR_0;
 VAR_3->card_fail &= ~VAR_0;
 VAR_3->card_wp &= ~VAR_0;

 FUNC_1(VAR_3);

 FUNC_0(VAR_4->raw_sys_info, 0, 96);




 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 != VAR_2)
  return VAR_1;

 return VAR_2;
}

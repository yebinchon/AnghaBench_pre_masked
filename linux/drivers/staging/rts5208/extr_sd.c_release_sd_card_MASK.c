
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_info {int raw_scr; int raw_csd; scalar_t__ sd_erase_status; scalar_t__ sd_lock_status; } ;
struct rtsx_chip {scalar_t__ sd_int; scalar_t__ sd_io; int card_wp; int card_fail; int card_ready; struct sd_info sd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct rtsx_chip*) ;

int FUNC_2(struct rtsx_chip *VAR_3)
{
 struct sd_info *VAR_4 = &VAR_3->sd_card;
 int VAR_5;

 VAR_3->card_ready &= ~VAR_0;
 VAR_3->card_fail &= ~VAR_0;
 VAR_3->card_wp &= ~VAR_0;

 VAR_3->sd_io = 0;
 VAR_3->sd_int = 0;






 FUNC_0(VAR_4->raw_csd, 0, 16);
 FUNC_0(VAR_4->raw_scr, 0, 8);

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 != VAR_2)
  return VAR_1;

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ delay_write_flag; } ;
struct xd_info {TYPE_1__ delay_write; } ;
struct rtsx_chip {int card_wp; int card_fail; int card_ready; struct xd_info xd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtsx_chip*) ;
 int FUNC_1 (struct rtsx_chip*) ;

int FUNC_2(struct rtsx_chip *VAR_3)
{
 struct xd_info *VAR_4 = &VAR_3->xd_card;
 int VAR_5;

 VAR_3->card_ready &= ~VAR_2;
 VAR_3->card_fail &= ~VAR_2;
 VAR_3->card_wp &= ~VAR_2;

 VAR_4->delay_write.delay_write_flag = 0;

 FUNC_0(VAR_3);

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 != VAR_1)
  return VAR_0;

 return VAR_1;
}

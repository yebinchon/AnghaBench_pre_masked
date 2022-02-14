
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms_delay_write_tag {int pageoff; int logblock; int new_phyblock; int old_phyblock; scalar_t__ delay_write_flag; } ;
struct ms_info {struct ms_delay_write_tag delay_write; } ;
struct rtsx_chip {struct ms_info ms_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtsx_chip*,int ,int ,int ,int ) ;
 int FUNC_1 (struct rtsx_chip*) ;

int FUNC_2(struct rtsx_chip *VAR_2)
{
 struct ms_info *VAR_3 = &VAR_2->ms_card;
 struct ms_delay_write_tag *VAR_4 = &VAR_3->delay_write;
 int VAR_5;

 if (VAR_4->delay_write_flag) {
  VAR_5 = FUNC_1(VAR_2);
  if (VAR_5 != VAR_1)
   return VAR_0;

  VAR_4->delay_write_flag = 0;
  VAR_5 = FUNC_0(VAR_2,
      VAR_4->old_phyblock,
     VAR_4->new_phyblock,
     VAR_4->logblock,
     VAR_4->pageoff);
  if (VAR_5 != VAR_1)
   return VAR_0;
 }

 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms_info {scalar_t__ total_sec_cnt; scalar_t__ seq_mode; } ;
struct rtsx_chip {struct ms_info ms_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtsx_chip*,int ,int ) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int ,int ,int ) ;

void FUNC_3(struct rtsx_chip *VAR_5)
{
 struct ms_info *VAR_6 = &VAR_5->ms_card;
 int VAR_7;

 if (VAR_6->seq_mode) {
  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7 != VAR_3)
   return;

  VAR_6->seq_mode = 0;
  VAR_6->total_sec_cnt = 0;
  FUNC_0(VAR_5, VAR_0, VAR_4);

  FUNC_2(VAR_5, VAR_1, VAR_2, VAR_2);
 }
}

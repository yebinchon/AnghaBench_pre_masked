
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ delay_write_flag; } ;
struct ms_info {scalar_t__ cleanup_counter; TYPE_1__ delay_write; scalar_t__ seq_mode; } ;
struct rtsx_chip {struct ms_info ms_card; } ;


 scalar_t__ FUNC_0 (struct ms_info*) ;
 scalar_t__ FUNC_1 (struct ms_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*,int ,int ,int) ;

void FUNC_7(struct rtsx_chip *VAR_2)
{
 struct ms_info *VAR_3 = &VAR_2->ms_card;

 if (FUNC_1(VAR_3)) {
  if (VAR_3->seq_mode) {
   FUNC_2(FUNC_5(VAR_2), "MS Pro: stop transmission\n");
   FUNC_4(VAR_2);
   VAR_3->cleanup_counter = 0;
  }
  if (FUNC_0(VAR_3)) {
   FUNC_6(VAR_2, VAR_1,
         VAR_0, 0x00);
  }
 }
}

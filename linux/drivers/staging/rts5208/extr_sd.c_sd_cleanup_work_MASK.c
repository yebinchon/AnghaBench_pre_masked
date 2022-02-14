
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_info {scalar_t__ cleanup_counter; scalar_t__ seq_mode; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;

void FUNC_3(struct rtsx_chip *VAR_0)
{
 struct sd_info *VAR_1 = &VAR_0->sd_card;

 if (VAR_1->seq_mode) {
  FUNC_0(FUNC_1(VAR_0), "SD: stop transmission\n");
  FUNC_2(VAR_0);
  VAR_1->cleanup_counter = 0;
 }
}

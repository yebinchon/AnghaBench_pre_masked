
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {scalar_t__ idle_counter; int sd_io; int card_ready; scalar_t__ auto_power_down; scalar_t__ led_toggle_counter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int) ;
 int FUNC_3 (struct rtsx_chip*,int) ;
 scalar_t__ FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,scalar_t__) ;
 int FUNC_6 (struct rtsx_chip*,int ) ;

__attribute__((used)) static void FUNC_7(struct rtsx_chip *VAR_5)
{
 if (VAR_5->idle_counter < VAR_0) {
  VAR_5->idle_counter++;
  return;
 }

 if (FUNC_4(VAR_5) == VAR_3)
  return;

 FUNC_0(FUNC_1(VAR_5), "Idle state!\n");
 FUNC_5(VAR_5, VAR_3);




 FUNC_3(VAR_5, VAR_4);

 FUNC_6(VAR_5, VAR_1);

 if (VAR_5->auto_power_down && !VAR_5->card_ready && !VAR_5->sd_io)
  FUNC_2(VAR_5, VAR_4 | VAR_2);
}

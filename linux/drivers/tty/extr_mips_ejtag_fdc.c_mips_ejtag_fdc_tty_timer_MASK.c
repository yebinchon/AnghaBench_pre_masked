
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct mips_ejtag_fdc_tty {int poll_timer; int removing; } ;


 scalar_t__ VAR_0 ;
 struct mips_ejtag_fdc_tty* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct mips_ejtag_fdc_tty*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_2 ;
 struct mips_ejtag_fdc_tty* VAR_3 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct mips_ejtag_fdc_tty *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_2);

 FUNC_1(VAR_5);
 if (!VAR_5->removing)
  FUNC_2(&VAR_5->poll_timer, VAR_1 + VAR_0);
}

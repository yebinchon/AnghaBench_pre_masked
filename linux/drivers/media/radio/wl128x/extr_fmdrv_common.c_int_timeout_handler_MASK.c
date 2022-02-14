
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct fm_irq {scalar_t__ retry; scalar_t__ stage; } ;
struct fmdev {struct fm_irq irq_info; } ;
struct TYPE_2__ {int timer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fmdev*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 struct fmdev* FUNC_3 (struct fmdev*,struct timer_list*,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct fmdev *VAR_4;
 struct fm_irq *VAR_5;

 FUNC_1("irq: timeout,trying to re-enable fm interrupts\n");
 VAR_4 = FUNC_3(VAR_4, VAR_3, VAR_2.timer);
 VAR_5 = &VAR_4->irq_info;
 VAR_5->retry++;

 if (VAR_5->retry > VAR_0) {


  VAR_5->stage = 0;
  VAR_5->retry = 0;
  FUNC_2("Recovery action failed duringirq processing, max retry reached\n");
  return;
 }
 FUNC_0(VAR_4, VAR_1);
}

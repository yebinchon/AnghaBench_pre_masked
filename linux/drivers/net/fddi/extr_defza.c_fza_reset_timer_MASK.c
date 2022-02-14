
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {void* expires; } ;
struct fza_private {int timer_state; TYPE_2__ reset_timer; TYPE_1__* regs; int int_mask; int name; } ;
struct TYPE_3__ {int int_mask; int reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 struct fza_private* VAR_3 ;
 struct fza_private* FUNC_1 (int ,struct timer_list*,int ) ;
 void* VAR_4 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_6)
{
 struct fza_private *VAR_7 = FUNC_1(VAR_7, VAR_6, VAR_5);

 if (!VAR_7->timer_state) {
  FUNC_2("%s: RESET timed out!\n", VAR_7->name);
  FUNC_3("%s: trying harder...\n", VAR_7->name);


  FUNC_5(VAR_1, &VAR_7->regs->reset);
  FUNC_4(&VAR_7->regs->reset);

  VAR_7->timer_state = 1;
  VAR_7->reset_timer.expires = VAR_4 + VAR_2;
 } else {

  FUNC_6(VAR_0, &VAR_7->regs->reset);


  FUNC_5(VAR_7->int_mask, &VAR_7->regs->int_mask);
  FUNC_4(&VAR_7->regs->int_mask);

  VAR_7->timer_state = 0;
  VAR_7->reset_timer.expires = VAR_4 + 45 * VAR_2;
 }
 FUNC_0(&VAR_7->reset_timer);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct bas_cardstate* bas; } ;
struct cardstate {TYPE_1__ hw; } ;
struct bas_cardstate {int int_in_wq; int waitqueue; int timer_int_in; int timer_cmd_in; int timer_atrdy; int timer_ctrl; struct cardstate* cs; int lock; int int_in_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bas_cardstate*) ;
 int FUNC_3 (int ,int ) ;
 struct bas_cardstate* FUNC_4 (int,int ) ;
 int FUNC_5 (char*) ;
 int VAR_7 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct cardstate *VAR_8)
{
 struct bas_cardstate *VAR_9;

 VAR_8->hw.bas = VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);
 if (!VAR_9) {
  FUNC_5("out of memory\n");
  return -VAR_0;
 }
 VAR_9->int_in_buf = FUNC_3(VAR_2, VAR_1);
 if (!VAR_9->int_in_buf) {
  FUNC_2(VAR_9);
  FUNC_5("out of memory\n");
  return -VAR_0;
 }

 FUNC_6(&VAR_9->lock);
 VAR_9->cs = VAR_8;
 FUNC_7(&VAR_9->timer_ctrl, VAR_7, 0);
 FUNC_7(&VAR_9->timer_atrdy, VAR_3, 0);
 FUNC_7(&VAR_9->timer_cmd_in, VAR_4, 0);
 FUNC_7(&VAR_9->timer_int_in, VAR_5, 0);
 FUNC_1(&VAR_9->waitqueue);
 FUNC_0(&VAR_9->int_in_wq, VAR_6);

 return 0;
}

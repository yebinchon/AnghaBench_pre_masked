
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bttv_buffer_set {TYPE_2__* bottom; TYPE_1__* top; } ;
struct bttv {int loop_irq; scalar_t__ new_input; int s_lock; struct bttv_buffer_set curr; int framedrop; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int bottom; } ;
struct TYPE_3__ {int top; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bttv*,struct bttv_buffer_set*) ;
 int FUNC_2 (struct bttv*,int ) ;
 int FUNC_3 (struct bttv*,struct bttv_buffer_set*) ;
 int FUNC_4 (struct bttv*,struct bttv_buffer_set*,struct bttv_buffer_set*,int ) ;
 int FUNC_5 (struct bttv*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct bttv*,scalar_t__) ;

__attribute__((used)) static void
FUNC_10(struct bttv *VAR_4)
{
 struct bttv_buffer_set VAR_5;
 struct bttv_buffer_set VAR_6;
 dma_addr_t VAR_7;

 FUNC_7(&VAR_4->s_lock);


 FUNC_3(VAR_4, &VAR_5);
 VAR_7 = FUNC_0(VAR_0);
 if ((VAR_4->curr.top && FUNC_6(&VAR_4->curr.top->top, VAR_7)) ||
     (VAR_4->curr.bottom && FUNC_6(&VAR_4->curr.bottom->bottom, VAR_7))) {
  VAR_4->framedrop++;
  if (VAR_3)
   FUNC_2(VAR_4, VAR_7);
  FUNC_8(&VAR_4->s_lock);
  return;
 }


 VAR_6 = VAR_4->curr;
 VAR_4->curr = VAR_5;
 VAR_4->loop_irq &= ~1;
 FUNC_1(VAR_4, &VAR_5);
 FUNC_5(VAR_4, 0);


 if (VAR_1 != VAR_4->new_input) {
  FUNC_9(VAR_4,VAR_4->new_input);
  VAR_4->new_input = VAR_1;
 }


 FUNC_4(VAR_4, &VAR_6, &VAR_5, VAR_2);
 FUNC_8(&VAR_4->s_lock);
}

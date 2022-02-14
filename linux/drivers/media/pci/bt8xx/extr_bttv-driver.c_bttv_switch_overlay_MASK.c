
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bttv_fh {int cap; } ;
struct TYPE_2__ {int state; } ;
struct bttv_buffer {TYPE_1__ vb; } ;
struct bttv {int loop_irq; int s_lock; struct bttv_buffer* screen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct bttv*,struct bttv_buffer*) ;
 int FUNC_1 (struct bttv*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct bttv*,struct bttv_fh*,int ) ;
 int FUNC_4 (struct bttv_buffer*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_7(struct bttv *VAR_2, struct bttv_fh *VAR_3,
      struct bttv_buffer *VAR_4)
{
 struct bttv_buffer *VAR_5;
 unsigned long VAR_6;

 FUNC_2("switch_overlay: enter [new=%p]\n", VAR_4);
 if (VAR_4)
  VAR_4->vb.state = VAR_1;
 FUNC_5(&VAR_2->s_lock,VAR_6);
 VAR_5 = VAR_2->screen;
 VAR_2->screen = VAR_4;
 VAR_2->loop_irq |= 1;
 FUNC_1(VAR_2, 0x03);
 FUNC_6(&VAR_2->s_lock,VAR_6);
 if (((void*)0) != VAR_5) {
  FUNC_2("switch_overlay: old=%p state is %d\n",
   VAR_5, VAR_5->vb.state);
  FUNC_0(&VAR_3->cap,VAR_2, VAR_5);
  FUNC_4(VAR_5);
 }
 if (((void*)0) == VAR_4)
  FUNC_3(VAR_2,VAR_3,VAR_0);
 FUNC_2("switch_overlay: done\n");
 return 0;
}

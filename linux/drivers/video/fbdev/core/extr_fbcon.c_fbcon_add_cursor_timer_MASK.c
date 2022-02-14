
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fbcon_ops {int flags; scalar_t__ cur_blink_jiffies; int cursor_timer; } ;
struct TYPE_2__ {scalar_t__ func; } ;
struct fb_info {TYPE_1__ queue; struct fbcon_ops* fbcon_par; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_5)
{
 struct fbcon_ops *VAR_6 = VAR_5->fbcon_par;

 if ((!VAR_5->queue.func || VAR_5->queue.func == VAR_2) &&
     !(VAR_6->flags & VAR_0) &&
     !VAR_3) {
  if (!VAR_5->queue.func)
   FUNC_0(&VAR_5->queue, VAR_2);

  FUNC_2(&VAR_6->cursor_timer, VAR_1, 0);
  FUNC_1(&VAR_6->cursor_timer, VAR_4 + VAR_6->cur_blink_jiffies);
  VAR_6->flags |= VAR_0;
 }
}

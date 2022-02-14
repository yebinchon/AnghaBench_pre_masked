
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fbcon_ops {int flags; int cursor_timer; } ;
struct TYPE_2__ {scalar_t__ func; } ;
struct fb_info {TYPE_1__ queue; struct fbcon_ops* fbcon_par; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_2)
{
 struct fbcon_ops *VAR_3 = VAR_2->fbcon_par;

 if (VAR_2->queue.func == VAR_1 &&
     VAR_3->flags & VAR_0) {
  FUNC_0(&VAR_3->cursor_timer);
  VAR_3->flags &= ~VAR_0;
 }
}

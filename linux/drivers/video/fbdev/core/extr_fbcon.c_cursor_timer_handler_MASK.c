
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct fbcon_ops {scalar_t__ cur_blink_jiffies; int cursor_timer; struct fb_info* info; } ;
struct fb_info {int queue; } ;


 int VAR_0 ;
 struct fbcon_ops* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 struct fbcon_ops* VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct fbcon_ops *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_0);
 struct fb_info *VAR_6 = VAR_5->info;

 FUNC_2(VAR_3, &VAR_6->queue);
 FUNC_1(&VAR_5->cursor_timer, VAR_1 + VAR_5->cur_blink_jiffies);
}

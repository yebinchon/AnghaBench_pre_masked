
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct tty3270* driver_data; } ;
struct TYPE_2__ {int rows; int lock; } ;
struct tty3270 {int nr_lines; TYPE_1__ view; int update_flags; int saved_f_color; int f_color; int saved_highlight; int highlight; scalar_t__ saved_cy; scalar_t__ cy; scalar_t__ saved_cx; scalar_t__ cx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty3270*) ;
 int FUNC_3 (struct tty3270*) ;
 int FUNC_4 (struct tty3270*,int) ;

__attribute__((used)) static void
FUNC_5(struct tty_struct *VAR_3)
{
 struct tty3270 *VAR_4;

 VAR_4 = VAR_3->driver_data;
 if (!VAR_4)
  return;
 FUNC_0(&VAR_4->view.lock);
 VAR_4->cx = VAR_4->saved_cx = 0;
 VAR_4->cy = VAR_4->saved_cy = 0;
 VAR_4->highlight = VAR_4->saved_highlight = VAR_1;
 VAR_4->f_color = VAR_4->saved_f_color = VAR_0;
 FUNC_3(VAR_4);
 while (VAR_4->nr_lines < VAR_4->view.rows - 2)
  FUNC_2(VAR_4);
 VAR_4->update_flags = VAR_2;
 FUNC_1(&VAR_4->view.lock);
 FUNC_4(VAR_4, 1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty3270_line {scalar_t__ len; } ;
struct TYPE_2__ {int rows; } ;
struct tty3270 {int cy; TYPE_1__ view; struct tty3270_line* screen; } ;


 int FUNC_0 (struct tty3270*) ;
 int FUNC_1 (struct tty3270*,int) ;
 int FUNC_2 (struct tty3270*) ;

__attribute__((used)) static void
FUNC_3(struct tty3270 *VAR_0)
{
 struct tty3270_line VAR_1;
 int VAR_2;

 FUNC_1(VAR_0, VAR_0->cy);
 if (VAR_0->cy < VAR_0->view.rows - 3) {
  VAR_0->cy++;
  return;
 }

 FUNC_0(VAR_0);
 VAR_1 = VAR_0->screen[0];
 VAR_1.len = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0->view.rows - 3; VAR_2++)
  VAR_0->screen[VAR_2] = VAR_0->screen[VAR_2+1];
 VAR_0->screen[VAR_0->view.rows - 3] = VAR_1;
 FUNC_2(VAR_0);
}

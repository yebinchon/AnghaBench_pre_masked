
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty3270_line {scalar_t__ len; struct tty3270_cell* cells; } ;
struct tty3270_cell {int f_color; int highlight; int character; } ;
struct TYPE_2__ {int * ascebc; } ;
struct tty3270 {int cy; scalar_t__ cx; int f_color; int highlight; TYPE_1__ view; struct tty3270_line* screen; } ;



__attribute__((used)) static void FUNC_0(struct tty3270 *VAR_0, char VAR_1)
{
 struct tty3270_line *VAR_2;
 struct tty3270_cell *VAR_3;

 VAR_2 = VAR_0->screen + VAR_0->cy;
 if (VAR_2->len <= VAR_0->cx) {
  while (VAR_2->len < VAR_0->cx) {
   VAR_3 = VAR_2->cells + VAR_2->len;
   VAR_3->character = VAR_0->view.ascebc[' '];
   VAR_3->highlight = VAR_0->highlight;
   VAR_3->f_color = VAR_0->f_color;
   VAR_2->len++;
  }
  VAR_2->len++;
 }
 VAR_3 = VAR_2->cells + VAR_0->cx;
 VAR_3->character = VAR_0->view.ascebc[(unsigned int) VAR_1];
 VAR_3->highlight = VAR_0->highlight;
 VAR_3->f_color = VAR_0->f_color;
}

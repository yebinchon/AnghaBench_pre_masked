
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct console {int dummy; } ;
struct TYPE_4__ {scalar_t__ cols; int lock; scalar_t__ dev; } ;
struct con3270 {TYPE_2__ view; int timer; scalar_t__ nr_up; TYPE_1__* cline; } ;
struct TYPE_3__ {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (struct con3270*) ;
 int FUNC_1 (struct con3270*) ;
 int FUNC_2 (struct con3270*,unsigned char) ;
 int FUNC_3 (struct con3270*,int) ;
 struct con3270* VAR_1 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct console *VAR_2, const char *VAR_3, unsigned int VAR_4)
{
 struct con3270 *VAR_5;
 unsigned long VAR_6;
 unsigned char VAR_7;

 VAR_5 = VAR_1;
 FUNC_4(&VAR_5->view.lock, VAR_6);
 while (VAR_4-- > 0) {
  VAR_7 = *VAR_3++;
  if (VAR_5->cline->len == 0)
   FUNC_0(VAR_5);
  if (VAR_7 != '\n')
   FUNC_2(VAR_5, VAR_7);
  if (VAR_7 == '\n' || VAR_5->cline->len >= VAR_5->view.cols)
   FUNC_1(VAR_5);
 }

 VAR_5->nr_up = 0;
 if (VAR_5->view.dev && !FUNC_6(&VAR_5->timer))
  FUNC_3(VAR_5, VAR_0/10);
 FUNC_5(&VAR_5->view.lock,VAR_6);
}

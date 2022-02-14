
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int dev; } ;
struct con3270 {scalar_t__ update_flags; TYPE_1__ view; int timer; scalar_t__ nr_up; } ;


 int FUNC_0 (struct con3270*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct con3270*) ;
 int FUNC_3 (struct con3270*) ;
 struct con3270* VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct con3270 *VAR_1;
 unsigned long VAR_2;

 VAR_1 = VAR_0;
 if (!VAR_1->view.dev)
  return;
 FUNC_5(&VAR_1->view);
 FUNC_4(&VAR_1->view);
 FUNC_6(&VAR_1->view.lock, VAR_2);
 FUNC_3(VAR_1);
 VAR_1->nr_up = 0;
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 while (VAR_1->update_flags != 0) {
  FUNC_7(&VAR_1->view.lock, VAR_2);
  FUNC_1(&VAR_1->timer);
  FUNC_6(&VAR_1->view.lock, VAR_2);
  FUNC_3(VAR_1);
 }
 FUNC_7(&VAR_1->view.lock, VAR_2);
}

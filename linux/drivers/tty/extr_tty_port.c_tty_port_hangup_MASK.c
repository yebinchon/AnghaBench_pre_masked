
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flags; } ;
struct tty_port {int delta_msr_wait; int open_wait; int lock; struct tty_struct* tty; scalar_t__ count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_port*,int ) ;
 int FUNC_5 (struct tty_port*,struct tty_struct*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct tty_port *VAR_1)
{
 struct tty_struct *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_1->lock, VAR_3);
 VAR_1->count = 0;
 VAR_2 = VAR_1->tty;
 if (VAR_2)
  FUNC_0(VAR_0, &VAR_2->flags);
 VAR_1->tty = ((void*)0);
 FUNC_2(&VAR_1->lock, VAR_3);
 FUNC_4(VAR_1, 0);
 FUNC_5(VAR_1, VAR_2);
 FUNC_3(VAR_2);
 FUNC_6(&VAR_1->open_wait);
 FUNC_6(&VAR_1->delta_msr_wait);
}

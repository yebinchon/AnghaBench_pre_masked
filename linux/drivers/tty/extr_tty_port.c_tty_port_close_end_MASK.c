
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ closing; } ;
struct tty_port {int lock; int open_wait; scalar_t__ close_delay; scalar_t__ blocked_open; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_port*,int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct tty_port *VAR_0, struct tty_struct *VAR_1)
{
 unsigned long VAR_2;

 FUNC_4(VAR_1);
 VAR_1->closing = 0;

 FUNC_2(&VAR_0->lock, VAR_2);

 if (VAR_0->blocked_open) {
  FUNC_3(&VAR_0->lock, VAR_2);
  if (VAR_0->close_delay)
   FUNC_1(FUNC_0(VAR_0->close_delay));
  FUNC_2(&VAR_0->lock, VAR_2);
  FUNC_6(&VAR_0->open_wait);
 }
 FUNC_3(&VAR_0->lock, VAR_2);
 FUNC_5(VAR_0, 0);
}

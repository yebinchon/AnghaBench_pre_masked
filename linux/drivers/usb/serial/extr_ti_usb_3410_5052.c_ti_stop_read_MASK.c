
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct ti_port {scalar_t__ tp_read_urb_state; int tp_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct ti_port *VAR_2, struct tty_struct *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_2->tp_lock, VAR_4);

 if (VAR_2->tp_read_urb_state == VAR_0)
  VAR_2->tp_read_urb_state = VAR_1;

 FUNC_1(&VAR_2->tp_lock, VAR_4);
}

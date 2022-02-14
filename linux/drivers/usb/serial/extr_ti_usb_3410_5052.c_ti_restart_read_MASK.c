
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {struct ti_port* context; } ;
struct tty_struct {int dummy; } ;
struct ti_port {scalar_t__ tp_read_urb_state; int tp_lock; TYPE_1__* tp_port; } ;
struct TYPE_2__ {struct urb* read_urb; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_3(struct ti_port *VAR_3, struct tty_struct *VAR_4)
{
 struct urb *VAR_5;
 int VAR_6 = 0;
 unsigned long VAR_7;

 FUNC_0(&VAR_3->tp_lock, VAR_7);

 if (VAR_3->tp_read_urb_state == VAR_2) {
  VAR_3->tp_read_urb_state = VAR_1;
  VAR_5 = VAR_3->tp_port->read_urb;
  FUNC_1(&VAR_3->tp_lock, VAR_7);
  VAR_5->context = VAR_3;
  VAR_6 = FUNC_2(VAR_5, VAR_0);
 } else {
  VAR_3->tp_read_urb_state = VAR_1;
  FUNC_1(&VAR_3->tp_lock, VAR_7);
 }

 return VAR_6;
}

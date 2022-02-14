
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {struct hvc_struct* driver_data; } ;
struct TYPE_4__ {scalar_t__ count; int lock; } ;
struct hvc_struct {int data; TYPE_1__* ops; scalar_t__ n_outbuf; TYPE_2__ port; int tty_resize; } ;
struct TYPE_3__ {int (* notifier_hangup ) (struct hvc_struct*,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct hvc_struct*,int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0)
{
 struct hvc_struct *VAR_1 = VAR_0->driver_data;
 unsigned long VAR_2;

 if (!VAR_1)
  return;


 FUNC_0(&VAR_1->tty_resize);

 FUNC_1(&VAR_1->port.lock, VAR_2);






 if (VAR_1->port.count <= 0) {
  FUNC_2(&VAR_1->port.lock, VAR_2);
  return;
 }

 VAR_1->port.count = 0;
 FUNC_2(&VAR_1->port.lock, VAR_2);
 FUNC_4(&VAR_1->port, ((void*)0));

 VAR_1->n_outbuf = 0;

 if (VAR_1->ops->notifier_hangup)
  VAR_1->ops->notifier_hangup(VAR_1, VAR_1->data);
}

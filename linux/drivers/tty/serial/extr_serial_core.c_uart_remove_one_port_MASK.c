
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {int mutex; int tty; } ;
struct uart_state {int * uart_port; int refcount; int remove_wait; struct tty_port port; } ;
struct uart_port {scalar_t__ type; int name; int tty_groups; TYPE_1__* ops; int cons; int line; int flags; int dev; } ;
struct uart_driver {int tty_driver; struct uart_state* state; } ;
struct tty_struct {int dummy; } ;
struct TYPE_2__ {int (* release_port ) (struct uart_port*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,struct uart_port*,struct uart_port*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int FUNC_9 (struct uart_port*) ;
 int FUNC_10 (struct tty_struct*) ;
 struct tty_struct* FUNC_11 (struct tty_port*) ;
 int FUNC_12 (struct tty_port*,int ,int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct uart_port*) ;
 struct uart_port* FUNC_15 (struct uart_state*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int) ;

int FUNC_18(struct uart_driver *VAR_4, struct uart_port *VAR_5)
{
 struct uart_state *VAR_6 = VAR_4->state + VAR_5->line;
 struct tty_port *VAR_7 = &VAR_6->port;
 struct uart_port *VAR_8;
 struct tty_struct *VAR_9;
 int VAR_10 = 0;

 FUNC_0(FUNC_5());

 FUNC_7(&VAR_3);





 FUNC_7(&VAR_7->mutex);
 VAR_8 = FUNC_15(VAR_6);
 if (VAR_8 != VAR_5)
  FUNC_4(VAR_5->dev, "Removing wrong port: %p != %p\n",
     VAR_8, VAR_5);

 if (!VAR_8) {
  FUNC_8(&VAR_7->mutex);
  VAR_10 = -VAR_0;
  goto out;
 }
 VAR_5->flags |= VAR_2;
 FUNC_8(&VAR_7->mutex);




 FUNC_12(VAR_7, VAR_4->tty_driver, VAR_5->line);

 VAR_9 = FUNC_11(VAR_7);
 if (VAR_9) {
  FUNC_13(VAR_7->tty);
  FUNC_10(VAR_9);
 }




 if (FUNC_14(VAR_5))
  FUNC_16(VAR_5->cons);




 if (VAR_5->type != VAR_1 && VAR_5->ops->release_port)
  VAR_5->ops->release_port(VAR_5);
 FUNC_6(VAR_5->tty_groups);
 FUNC_6(VAR_5->name);




 VAR_5->type = VAR_1;

 FUNC_7(&VAR_7->mutex);
 FUNC_1(FUNC_2(&VAR_6->refcount) < 0);
 FUNC_17(VAR_6->remove_wait, !FUNC_3(&VAR_6->refcount));
 VAR_6->uart_port = ((void*)0);
 FUNC_8(&VAR_7->mutex);
out:
 FUNC_8(&VAR_3);

 return VAR_10;
}

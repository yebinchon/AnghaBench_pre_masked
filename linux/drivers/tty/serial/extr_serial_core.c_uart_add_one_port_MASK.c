
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_port {int mutex; scalar_t__ console; } ;
struct uart_state {int pm_state; struct uart_port* uart_port; int remove_wait; int refcount; struct tty_port port; } ;
struct uart_port {int flags; scalar_t__ line; TYPE_3__* dev; int ** tty_groups; int * attr_group; TYPE_1__* cons; int lock; int name; scalar_t__ minor; struct uart_state* state; } ;
struct uart_driver {TYPE_2__* tty_driver; int dev_name; TYPE_1__* cons; struct uart_state* state; scalar_t__ nr; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int of_node; } ;
struct TYPE_6__ {scalar_t__ name_base; scalar_t__ minor_start; } ;
struct TYPE_5__ {int flags; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_3__*,char*,scalar_t__) ;
 int FUNC_4 (struct device*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int ,scalar_t__) ;
 int ** FUNC_8 (int,int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (int *) ;
 int VAR_8 ;
 struct device* FUNC_14 (struct tty_port*,TYPE_2__*,scalar_t__,TYPE_3__*,struct tty_port*,int **) ;
 int FUNC_15 (struct uart_driver*,struct uart_state*,struct uart_port*) ;
 scalar_t__ FUNC_16 (struct uart_port*) ;

int FUNC_17(struct uart_driver *VAR_9, struct uart_port *VAR_10)
{
 struct uart_state *VAR_11;
 struct tty_port *VAR_12;
 int VAR_13 = 0;
 struct device *VAR_14;
 int VAR_15;

 FUNC_0(FUNC_5());

 if (VAR_10->line >= VAR_9->nr)
  return -VAR_1;

 VAR_11 = VAR_9->state + VAR_10->line;
 VAR_12 = &VAR_11->port;

 FUNC_10(&VAR_7);
 FUNC_10(&VAR_12->mutex);
 if (VAR_11->uart_port) {
  VAR_13 = -VAR_1;
  goto out;
 }


 FUNC_2(&VAR_11->refcount, 1);
 FUNC_6(&VAR_11->remove_wait);
 VAR_11->uart_port = VAR_10;
 VAR_10->state = VAR_11;

 VAR_11->pm_state = VAR_4;
 VAR_10->cons = VAR_9->cons;
 VAR_10->minor = VAR_9->tty_driver->minor_start + VAR_10->line;
 VAR_10->name = FUNC_7(VAR_3, "%s%d", VAR_9->dev_name,
    VAR_9->tty_driver->name_base + VAR_10->line);
 if (!VAR_10->name) {
  VAR_13 = -VAR_2;
  goto out;
 }





 if (!(FUNC_16(VAR_10) && (VAR_10->cons->flags & VAR_0))) {
  FUNC_13(&VAR_10->lock);
  FUNC_9(&VAR_10->lock, &VAR_6);
 }
 if (VAR_10->cons && VAR_10->dev)
  FUNC_12(VAR_10->dev->of_node, VAR_10->cons->name, VAR_10->line);

 FUNC_15(VAR_9, VAR_11, VAR_10);

 VAR_12->console = FUNC_16(VAR_10);

 VAR_15 = 2;
 if (VAR_10->attr_group)
  VAR_15++;

 VAR_10->tty_groups = FUNC_8(VAR_15, sizeof(*VAR_10->tty_groups),
        VAR_3);
 if (!VAR_10->tty_groups) {
  VAR_13 = -VAR_2;
  goto out;
 }
 VAR_10->tty_groups[0] = &VAR_8;
 if (VAR_10->attr_group)
  VAR_10->tty_groups[1] = VAR_10->attr_group;





 VAR_14 = FUNC_14(VAR_12, VAR_9->tty_driver,
   VAR_10->line, VAR_10->dev, VAR_12, VAR_10->tty_groups);
 if (!FUNC_1(VAR_14)) {
  FUNC_4(VAR_14, 1);
 } else {
  FUNC_3(VAR_10->dev, "Cannot register tty device on line %d\n",
         VAR_10->line);
 }




 VAR_10->flags &= ~VAR_5;

 out:
 FUNC_11(&VAR_12->mutex);
 FUNC_11(&VAR_7);

 return VAR_13;
}

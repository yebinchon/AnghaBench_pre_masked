
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {int mutex; } ;
struct uart_state {struct tty_port port; } ;
struct uart_port {scalar_t__ type; int flags; TYPE_1__* ops; } ;
struct tty_struct {int dummy; } ;
struct TYPE_2__ {int (* config_port ) (struct uart_port*,int) ;int (* release_port ) (struct uart_port*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*,int) ;
 int FUNC_5 (struct tty_port*,int) ;
 int FUNC_6 (struct tty_port*) ;
 struct uart_port* FUNC_7 (struct uart_state*) ;
 int FUNC_8 (struct tty_struct*,struct uart_state*) ;
 int FUNC_9 (struct tty_struct*,struct uart_state*,int) ;

__attribute__((used)) static int FUNC_10(struct tty_struct *VAR_9,struct uart_state *VAR_10)
{
 struct tty_port *VAR_11 = &VAR_10->port;
 struct uart_port *VAR_12;
 int VAR_13, VAR_14;

 if (!FUNC_0(VAR_0))
  return -VAR_3;






 if (FUNC_1(&VAR_11->mutex))
  return -VAR_4;

 VAR_12 = FUNC_7(VAR_10);
 if (!VAR_12) {
  VAR_14 = -VAR_2;
  goto out;
 }

 VAR_14 = -VAR_1;
 if (FUNC_6(VAR_11) == 1) {
  FUNC_8(VAR_9, VAR_10);





  if (VAR_12->type != VAR_5 && VAR_12->ops->release_port)
   VAR_12->ops->release_port(VAR_12);

  VAR_13 = VAR_7;
  if (VAR_12->flags & VAR_8)
   VAR_13 |= VAR_6;





  VAR_12->ops->config_port(VAR_12, VAR_13);

  VAR_14 = FUNC_9(VAR_9, VAR_10, 1);
  if (VAR_14 == 0)
   FUNC_5(VAR_11, 1);
  if (VAR_14 > 0)
   VAR_14 = 0;
 }
out:
 FUNC_2(&VAR_11->mutex);
 return VAR_14;
}

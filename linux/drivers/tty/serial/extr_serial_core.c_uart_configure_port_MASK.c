
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_state {int dummy; } ;
struct uart_port {int flags; scalar_t__ type; int mctrl; TYPE_2__* cons; int lock; TYPE_1__* ops; int membase; int mapbase; int iobase; } ;
struct uart_driver {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int (* set_mctrl ) (struct uart_port*,int) ;int (* config_port ) (struct uart_port*,unsigned int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct uart_port*,unsigned int) ;
 int FUNC_4 (struct uart_port*,int) ;
 int FUNC_5 (struct uart_state*,int ) ;
 int FUNC_6 (struct uart_port*) ;
 int FUNC_7 (struct uart_driver*,struct uart_port*) ;

__attribute__((used)) static void
FUNC_8(struct uart_driver *VAR_10, struct uart_state *VAR_11,
      struct uart_port *VAR_12)
{
 unsigned int VAR_13;




 if (!VAR_12->iobase && !VAR_12->mapbase && !VAR_12->membase)
  return;





 VAR_13 = 0;
 if (VAR_12->flags & VAR_7)
  VAR_13 |= VAR_3;
 if (VAR_12->flags & VAR_8) {
  if (!(VAR_12->flags & VAR_9)) {
   VAR_12->type = VAR_1;
   VAR_13 |= VAR_4;
  }
  VAR_12->ops->config_port(VAR_12, VAR_13);
 }

 if (VAR_12->type != VAR_1) {
  unsigned long VAR_14;

  FUNC_7(VAR_10, VAR_12);


  FUNC_5(VAR_11, VAR_6);






  FUNC_1(&VAR_12->lock, VAR_14);
  VAR_12->ops->set_mctrl(VAR_12, VAR_12->mctrl & VAR_2);
  FUNC_2(&VAR_12->lock, VAR_14);






  if (VAR_12->cons && !(VAR_12->cons->flags & VAR_0))
   FUNC_0(VAR_12->cons);





  if (!FUNC_6(VAR_12))
   FUNC_5(VAR_11, VAR_5);
 }
}

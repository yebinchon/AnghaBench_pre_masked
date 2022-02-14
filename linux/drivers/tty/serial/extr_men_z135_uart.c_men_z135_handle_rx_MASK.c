
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int rx; } ;
struct uart_port {TYPE_3__ icount; scalar_t__ membase; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct men_z135_port {TYPE_2__* mdev; int rxbuf; struct uart_port port; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct tty_port port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct men_z135_port*) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (struct tty_port*,int) ;
 int FUNC_6 (struct tty_port*) ;
 int FUNC_7 (struct tty_port*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct men_z135_port *VAR_3)
{
 struct uart_port *VAR_4 = &VAR_3->port;
 struct tty_port *VAR_5 = &VAR_4->state->port;
 int VAR_6;
 u16 VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_3);

 if (VAR_7 == 0)
  return;




 if (VAR_7 > VAR_0)
  VAR_7 = VAR_0;

 VAR_8 = FUNC_5(VAR_5, VAR_7);
 if (VAR_8 != VAR_7)
  FUNC_0(&VAR_3->mdev->dev,
   "Not enough room in flip buffer, truncating to %d\n",
   VAR_8);

 if (VAR_8 == 0)
  return;

 FUNC_4(VAR_3->rxbuf, VAR_4->membase + VAR_2, VAR_8);

 FUNC_3();
 FUNC_2(VAR_8, VAR_4->membase + VAR_1);

 VAR_6 = FUNC_7(VAR_5, VAR_3->rxbuf, VAR_8);
 if (VAR_6 != VAR_8)
  FUNC_0(&VAR_3->mdev->dev,
   "Only copied %d instead of %d bytes\n",
   VAR_6, VAR_8);

 VAR_4->icount.rx += VAR_6;

 FUNC_6(VAR_5);

}

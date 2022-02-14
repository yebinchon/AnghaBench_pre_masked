
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int overrun; int parity; int frame; } ;
struct uart_port {TYPE_2__ icount; TYPE_1__* state; } ;
struct tty_struct {int dummy; } ;
struct eg20t_port {TYPE_3__* pdev; struct uart_port port; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct tty_struct*) ;
 struct tty_struct* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct eg20t_port *VAR_4, unsigned int VAR_5)
{
 struct uart_port *VAR_6 = &VAR_4->port;
 struct tty_struct *VAR_7 = FUNC_2(&VAR_6->state->port);
 char *VAR_8[5] = {};
 int VAR_9 = 0;

 if (VAR_5 & VAR_0)
  VAR_8[VAR_9++] = "Error data in FIFO\n";

 if (VAR_5 & VAR_1) {
  VAR_6->icount.frame++;
  VAR_8[VAR_9++] = "  Framing Error\n";
 }

 if (VAR_5 & VAR_3) {
  VAR_6->icount.parity++;
  VAR_8[VAR_9++] = "  Parity Error\n";
 }

 if (VAR_5 & VAR_2) {
  VAR_6->icount.overrun++;
  VAR_8[VAR_9++] = "  Overrun Error\n";
 }

 if (VAR_7 == ((void*)0)) {
  for (VAR_9 = 0; VAR_8[VAR_9] != ((void*)0); VAR_9++)
   FUNC_0(&VAR_4->pdev->dev, VAR_8[VAR_9]);
 } else {
  FUNC_1(VAR_7);
 }
}

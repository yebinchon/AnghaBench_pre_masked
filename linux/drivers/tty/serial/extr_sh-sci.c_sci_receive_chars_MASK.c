
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rx; int parity; int frame; } ;
struct uart_port {scalar_t__ type; TYPE_2__ icount; int dev; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct TYPE_3__ {struct tty_port port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (struct uart_port*) ;
 unsigned short FUNC_1 (struct uart_port*) ;
 unsigned short FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct uart_port*,int ) ;
 int FUNC_6 (struct uart_port*) ;
 void* FUNC_7 (struct uart_port*,int ) ;
 int FUNC_8 (struct tty_port*,int ) ;
 int FUNC_9 (struct tty_port*) ;
 int FUNC_10 (struct tty_port*,char,unsigned char) ;
 scalar_t__ FUNC_11 (struct uart_port*,char) ;

__attribute__((used)) static void FUNC_12(struct uart_port *VAR_6)
{
 struct tty_port *VAR_7 = &VAR_6->state->port;
 int VAR_8, VAR_9, VAR_10 = 0;
 unsigned short VAR_11;
 unsigned char VAR_12;

 VAR_11 = FUNC_7(VAR_6, VAR_2);
 if (!(VAR_11 & FUNC_2(VAR_6)))
  return;

 while (1) {

  VAR_9 = FUNC_8(VAR_7, FUNC_6(VAR_6));


  if (VAR_9 == 0)
   break;

  if (VAR_6->type == VAR_0) {
   char VAR_13 = FUNC_7(VAR_6, VAR_1);
   if (FUNC_11(VAR_6, VAR_13))
    VAR_9 = 0;
   else
    FUNC_10(VAR_7, VAR_13, VAR_4);
  } else {
   for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
    char VAR_14 = FUNC_7(VAR_6, VAR_1);

    VAR_11 = FUNC_7(VAR_6, VAR_2);
    if (FUNC_11(VAR_6, VAR_14)) {
     VAR_9--; VAR_8--;
     continue;
    }


    if (VAR_11 & FUNC_0(VAR_6)) {
     VAR_12 = VAR_3;
     VAR_6->icount.frame++;
     FUNC_4(VAR_6->dev, "frame error\n");
    } else if (VAR_11 & FUNC_1(VAR_6)) {
     VAR_12 = VAR_5;
     VAR_6->icount.parity++;
     FUNC_4(VAR_6->dev, "parity error\n");
    } else
     VAR_12 = VAR_4;

    FUNC_10(VAR_7, VAR_14, VAR_12);
   }
  }

  FUNC_7(VAR_6, VAR_2);
  FUNC_5(VAR_6, FUNC_3(VAR_6));

  VAR_10 += VAR_9;
  VAR_6->icount.rx += VAR_9;
 }

 if (VAR_10) {

  FUNC_9(VAR_7);
 } else {

  FUNC_7(VAR_6, VAR_1);
  FUNC_7(VAR_6, VAR_2);
  FUNC_5(VAR_6, FUNC_3(VAR_6));
 }
}

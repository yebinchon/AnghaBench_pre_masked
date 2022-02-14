
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned char* buf; } ;
struct uart_state {TYPE_4__ xmit; } ;
struct uart_port {scalar_t__ type; TYPE_3__* cons; TYPE_1__* ops; } ;
struct TYPE_6__ {scalar_t__ c_cflag; } ;
struct tty_struct {TYPE_2__ termios; } ;
struct TYPE_7__ {scalar_t__ cflag; } ;
struct TYPE_5__ {int (* startup ) (struct uart_port*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_state*,int ) ;
 int FUNC_6 (struct tty_struct*,struct uart_state*,int *) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (struct uart_port*) ;
 struct uart_port* FUNC_9 (struct uart_state*) ;
 int FUNC_10 (struct uart_port*,int) ;
 int FUNC_11 (struct uart_state*,unsigned long) ;
 int FUNC_12 (struct uart_port*,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct tty_struct *VAR_5, struct uart_state *VAR_6,
  int VAR_7)
{
 struct uart_port *VAR_8 = FUNC_9(VAR_6);
 unsigned long VAR_9;
 unsigned long VAR_10 = 0;
 int VAR_11 = 0;

 if (VAR_8->type == VAR_3)
  return 1;




 FUNC_5(VAR_6, VAR_4);





 VAR_9 = FUNC_3(VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_11(VAR_6, VAR_10);
 if (!VAR_6->xmit.buf) {
  VAR_6->xmit.buf = (unsigned char *) VAR_9;
  FUNC_7(&VAR_6->xmit);
  FUNC_12(VAR_8, VAR_10);
 } else {
  FUNC_12(VAR_8, VAR_10);




  FUNC_2(VAR_9);
 }

 VAR_11 = VAR_8->ops->startup(VAR_8);
 if (VAR_11 == 0) {
  if (FUNC_8(VAR_8) && VAR_8->cons->cflag) {
   VAR_5->termios.c_cflag = VAR_8->cons->cflag;
   VAR_8->cons->cflag = 0;
  }



  FUNC_6(VAR_5, VAR_6, ((void*)0));





  if (VAR_7 && FUNC_0(VAR_5))
   FUNC_10(VAR_8, 1);
 }






 if (VAR_11 && FUNC_1(VAR_0))
  return 1;

 return VAR_11;
}

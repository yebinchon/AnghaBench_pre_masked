
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frame; int rx; } ;
struct uart_port {int lock; int membase; TYPE_1__ icount; TYPE_2__* state; } ;
struct tty_port {int dummy; } ;
struct TYPE_4__ {struct tty_port port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tty_port*) ;
 int FUNC_6 (struct tty_port*,unsigned int,unsigned int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_5)
{
 struct tty_port *VAR_6 = &VAR_5->state->port;
 unsigned int VAR_7, VAR_8;


 VAR_7 = FUNC_2(FUNC_0(VAR_5->membase));
 while (!(VAR_7 & VAR_2)) {
  VAR_8 = VAR_4;
  VAR_5->icount.rx++;

  if (VAR_7 & VAR_0) {

   FUNC_7(VAR_1,
          FUNC_1(VAR_5->membase));
   VAR_5->icount.frame++;
   VAR_8 = VAR_3;
   FUNC_6(VAR_6, 0, VAR_3);
  }

  FUNC_6(VAR_6, (VAR_7 & 0xFF), VAR_8);

  VAR_7 = FUNC_2(FUNC_0(VAR_5->membase));
 }

 FUNC_4(&VAR_5->lock);
 FUNC_5(VAR_6);
 FUNC_3(&VAR_5->lock);
}

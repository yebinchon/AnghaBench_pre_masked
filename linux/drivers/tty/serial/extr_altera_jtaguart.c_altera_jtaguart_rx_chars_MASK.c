
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rx; } ;
struct uart_port {int lock; TYPE_2__* state; TYPE_1__ icount; scalar_t__ membase; } ;
struct altera_jtaguart {struct uart_port port; } ;
struct TYPE_4__ {int port; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned char VAR_3 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct uart_port*,unsigned char) ;
 int FUNC_5 (struct uart_port*,int ,int ,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_6(struct altera_jtaguart *VAR_4)
{
 struct uart_port *VAR_5 = &VAR_4->port;
 unsigned char VAR_6, VAR_7;
 unsigned long VAR_8;

 while ((VAR_8 = FUNC_0(VAR_5->membase + VAR_1)) &
        VAR_2) {
  VAR_6 = VAR_8 & VAR_0;
  VAR_7 = VAR_3;
  VAR_5->icount.rx++;

  if (FUNC_4(VAR_5, VAR_6))
   continue;
  FUNC_5(VAR_5, 0, 0, VAR_6, VAR_7);
 }

 FUNC_2(&VAR_5->lock);
 FUNC_3(&VAR_5->state->port);
 FUNC_1(&VAR_5->lock);
}

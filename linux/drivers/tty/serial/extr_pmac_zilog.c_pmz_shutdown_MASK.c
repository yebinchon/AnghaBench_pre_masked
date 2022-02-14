
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int lock; } ;
struct TYPE_2__ {int irq; } ;
struct uart_pmac_port {int flags; TYPE_1__ port; int * curregs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_pmac_port*) ;
 int FUNC_1 (int ,struct uart_pmac_port*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct uart_pmac_port*,int ) ;
 int FUNC_4 (struct uart_pmac_port*) ;
 int FUNC_5 (struct uart_pmac_port*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct uart_pmac_port* FUNC_8 (struct uart_port*) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_6)
{
 struct uart_pmac_port *VAR_7 = FUNC_8(VAR_6);
 unsigned long VAR_8;

 FUNC_2("pmz: shutdown()\n");

 FUNC_6(&VAR_6->lock, VAR_8);


 FUNC_3(VAR_7, 0);

 if (!FUNC_0(VAR_7)) {

  VAR_7->curregs[VAR_1] &= ~VAR_3;
  VAR_7->curregs[VAR_2] &= ~VAR_5;


  VAR_7->curregs[VAR_2] &= ~VAR_4;
  FUNC_4(VAR_7);
 }

 FUNC_7(&VAR_6->lock, VAR_8);


 FUNC_1(VAR_7->port.irq, VAR_7);

 FUNC_6(&VAR_6->lock, VAR_8);

 VAR_7->flags &= ~VAR_0;

 if (!FUNC_0(VAR_7))
  FUNC_5(VAR_7, 0);

 FUNC_7(&VAR_6->lock, VAR_8);

 FUNC_2("pmz: shutdown() done.\n");
}

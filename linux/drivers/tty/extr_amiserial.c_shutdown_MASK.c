
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {int flags; } ;
struct TYPE_6__ {int delta_msr_wait; } ;
struct TYPE_5__ {int * buf; } ;
struct serial_state {int MCR; TYPE_2__ tport; scalar_t__ IER; TYPE_1__ xmit; int line; } ;
struct TYPE_7__ {int intena; int adkcon; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__ VAR_7 ;
 int FUNC_1 (int ,struct serial_state*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct tty_struct *VAR_8, struct serial_state *VAR_9)
{
 unsigned long VAR_10;
 struct serial_state *VAR_11;

 if (!FUNC_9(&VAR_9->tport))
  return;

 VAR_11 = VAR_9;





 FUNC_4(VAR_10);





 FUNC_11(&VAR_9->tport.delta_msr_wait);




 FUNC_1(VAR_3, VAR_9);

 if (VAR_9->xmit.buf) {
  FUNC_2((unsigned long) VAR_9->xmit.buf);
  VAR_9->xmit.buf = ((void*)0);
 }

 VAR_9->IER = 0;
 VAR_7.intena = VAR_1 | VAR_2;
 FUNC_5();


 VAR_7.adkcon = VAR_0;
 FUNC_5();

 if (FUNC_0(VAR_8))
  VAR_9->MCR &= ~(VAR_4|VAR_5);
 FUNC_7(VAR_9->MCR);

 FUNC_8(VAR_6, &VAR_8->flags);

 FUNC_10(&VAR_9->tport, 0);
 FUNC_3(VAR_10);
}

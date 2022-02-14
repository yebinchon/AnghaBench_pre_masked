
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dsr; int rng; } ;
struct TYPE_11__ {int lock; TYPE_4__* state; TYPE_2__ icount; } ;
struct icom_port {TYPE_5__ uart_port; TYPE_1__* dram; } ;
struct TYPE_9__ {int delta_msr_wait; } ;
struct TYPE_10__ {TYPE_3__ port; } ;
struct TYPE_7__ {int isr; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 unsigned char FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct icom_port*,char*,unsigned char) ;
 int FUNC_4 (TYPE_5__*,char) ;
 int FUNC_5 (TYPE_5__*,char) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct icom_port *VAR_4)
{
 static char VAR_5 = 0;
 char VAR_6;
 unsigned char VAR_7;

 FUNC_1(&VAR_4->uart_port.lock);


 VAR_7 = FUNC_0(&VAR_4->dram->isr);
 FUNC_3(VAR_4, "CHECK_MODEM", VAR_7);
 VAR_6 = VAR_7 ^ VAR_5;
 if (VAR_6) {
  if (VAR_6 & VAR_3)
   VAR_4->uart_port.icount.rng++;
  if (VAR_6 & VAR_2)
   VAR_4->uart_port.icount.dsr++;
  if (VAR_6 & VAR_1)
   FUNC_5(&VAR_4->uart_port,
            VAR_6 & VAR_1);
  if (VAR_6 & VAR_0)
   FUNC_4(&VAR_4->uart_port,
            VAR_6 & VAR_0);

  FUNC_6(&VAR_4->uart_port.state->
          port.delta_msr_wait);
  VAR_5 = VAR_7;
 }
 FUNC_2(&VAR_4->uart_port.lock);
}

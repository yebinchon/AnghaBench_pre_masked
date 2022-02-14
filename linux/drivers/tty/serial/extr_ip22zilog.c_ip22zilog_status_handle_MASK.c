
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct zilog_channel {int control; } ;
struct TYPE_7__ {int dsr; } ;
struct TYPE_10__ {TYPE_3__* state; TYPE_1__ icount; } ;
struct uart_ip22zilog_port {int* curregs; unsigned char prev_status; TYPE_4__ port; int tty_break; } ;
struct TYPE_8__ {int delta_msr_wait; } ;
struct TYPE_9__ {TYPE_2__ port; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct uart_ip22zilog_port*) ;
 int FUNC_2 (struct zilog_channel*) ;
 unsigned char FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,unsigned char) ;
 int FUNC_6 (TYPE_4__*,unsigned char) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct uart_ip22zilog_port *VAR_9,
       struct zilog_channel *VAR_10)
{
 unsigned char VAR_11;

 VAR_11 = FUNC_3(&VAR_10->control);
 FUNC_0();

 FUNC_8(VAR_5, &VAR_10->control);
 FUNC_0();
 FUNC_2(VAR_10);

 if (VAR_9->curregs[VAR_4] & VAR_0) {
  if ((VAR_11 & VAR_1) && !(VAR_9->prev_status & VAR_1)) {
   if (FUNC_4(&VAR_9->port))
    VAR_9->tty_break = VAR_7;
   else
    VAR_9->tty_break = VAR_6;
  }
 }

 if (FUNC_1(VAR_9)) {
  if (VAR_11 & VAR_8)
   VAR_9->port.icount.dsr++;





  if ((VAR_11 ^ VAR_9->prev_status) ^ VAR_3)
   FUNC_6(&VAR_9->port,
            (VAR_11 & VAR_3));
  if ((VAR_11 ^ VAR_9->prev_status) ^ VAR_2)
   FUNC_5(&VAR_9->port,
            (VAR_11 & VAR_2));

  FUNC_7(&VAR_9->port.state->port.delta_msr_wait);
 }

 VAR_9->prev_status = VAR_11;
}

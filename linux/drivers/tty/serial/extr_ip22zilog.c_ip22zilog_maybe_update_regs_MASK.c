
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zilog_channel {int dummy; } ;
struct uart_ip22zilog_port {int curregs; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_ip22zilog_port*) ;
 scalar_t__ FUNC_1 (struct uart_ip22zilog_port*) ;
 int FUNC_2 (struct zilog_channel*,int ) ;

__attribute__((used)) static void FUNC_3(struct uart_ip22zilog_port *VAR_1,
           struct zilog_channel *VAR_2)
{
 if (!FUNC_0(VAR_1)) {
  if (FUNC_1(VAR_1)) {
   VAR_1->flags |= VAR_0;
  } else {
   FUNC_2(VAR_2, VAR_1->curregs);
  }
 }
}

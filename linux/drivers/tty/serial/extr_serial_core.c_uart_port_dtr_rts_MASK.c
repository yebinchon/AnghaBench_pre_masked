
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct uart_port {TYPE_1__ rs485; scalar_t__ rs485_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct uart_port*,unsigned int) ;
 int FUNC_1 (struct uart_port*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_4->rs485_config &&
  (VAR_4->rs485.flags & VAR_0);
 int VAR_7 = !!(VAR_4->rs485.flags & VAR_1);

 if (VAR_5) {
  if (VAR_6 && !VAR_7) {
   FUNC_1(VAR_4, VAR_2);
   FUNC_0(VAR_4, VAR_3);
  } else {
   FUNC_1(VAR_4, VAR_2 | VAR_3);
  }
 } else {
  unsigned int VAR_8 = VAR_2;

  VAR_8 |= (!VAR_6 || !VAR_7) ? VAR_3 : 0;
  FUNC_0(VAR_4, VAR_8);
 }
}

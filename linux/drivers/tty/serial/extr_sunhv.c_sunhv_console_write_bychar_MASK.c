
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; scalar_t__ sysrq; } ;
struct console {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct uart_port*,char) ;
 struct uart_port* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct console *VAR_2, const char *VAR_3, unsigned VAR_4)
{
 struct uart_port *VAR_5 = VAR_1;
 unsigned long VAR_6;
 int VAR_7, VAR_8 = 1;

 if (VAR_5->sysrq || VAR_0)
  VAR_8 = FUNC_1(&VAR_5->lock, VAR_6);
 else
  FUNC_0(&VAR_5->lock, VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (*VAR_3 == '\n')
   FUNC_3(VAR_5, '\r');
  FUNC_3(VAR_5, *VAR_3++);
 }

 if (VAR_8)
  FUNC_2(&VAR_5->lock, VAR_6);
}

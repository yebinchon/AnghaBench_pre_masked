
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct asc_port {int rts; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (int ,unsigned int) ;
 struct asc_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_3, unsigned int VAR_4)
{
 struct asc_port *VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5->rts)
  return;


 if (FUNC_0(VAR_3, VAR_0) & VAR_1)
  return;

 FUNC_1(VAR_5->rts, VAR_4 & VAR_2);
}

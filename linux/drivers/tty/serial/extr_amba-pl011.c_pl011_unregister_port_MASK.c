
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_amba_port {int dummy; } ;


 int FUNC_0 (struct uart_amba_port**) ;
 struct uart_amba_port** VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct uart_amba_port*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct uart_amba_port *VAR_2)
{
 int VAR_3;
 bool VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_0[VAR_3] == VAR_2)
   VAR_0[VAR_3] = ((void*)0);
  else if (VAR_0[VAR_3])
   VAR_4 = 1;
 }
 FUNC_1(VAR_2);
 if (!VAR_4)
  FUNC_2(&VAR_1);
}

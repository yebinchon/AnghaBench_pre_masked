
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_amba_port {int port; } ;
struct amba_device {int dummy; } ;


 int FUNC_0 (struct uart_amba_port**) ;
 struct uart_amba_port* FUNC_1 (struct amba_device*) ;
 struct uart_amba_port** VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct amba_device *VAR_2)
{
 struct uart_amba_port *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;
 bool VAR_5 = 0;

 FUNC_2(&VAR_1, &VAR_3->port);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  if (VAR_0[VAR_4] == VAR_3)
   VAR_0[VAR_4] = ((void*)0);
  else if (VAR_0[VAR_4])
   VAR_5 = 1;

 if (!VAR_5)
  FUNC_3(&VAR_1);

 return 0;
}

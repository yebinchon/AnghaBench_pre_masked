
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct uart_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_3)
{
 struct uart_port *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; (VAR_5 < VAR_0); VAR_5++) {
  VAR_4 = &VAR_2[VAR_5].port;
  if (VAR_4)
   FUNC_0(&VAR_1, VAR_4);
 }

 return 0;
}

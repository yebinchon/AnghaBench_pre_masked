
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int membase; } ;
struct platform_device {int id; } ;
struct TYPE_2__ {struct uart_port port; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct uart_port *VAR_3;
 int VAR_4 = VAR_2->id;

 if (VAR_4 == -1)
  VAR_4 = 0;

 VAR_3 = &VAR_1[VAR_4].port;
 FUNC_1(&VAR_0, VAR_3);
 FUNC_0(VAR_3->membase);

 return 0;
}

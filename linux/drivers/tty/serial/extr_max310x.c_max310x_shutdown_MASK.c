
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dev; } ;
struct max310x_port {TYPE_1__* devtype; } ;
struct TYPE_2__ {int (* power ) (struct uart_port*,int ) ;} ;


 int VAR_0 ;
 struct max310x_port* FUNC_0 (int ) ;
 int FUNC_1 (struct uart_port*,int ,int ) ;
 int FUNC_2 (struct uart_port*,int ) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1)
{
 struct max310x_port *VAR_2 = FUNC_0(VAR_1->dev);


 FUNC_1(VAR_1, VAR_0, 0);

 VAR_2->devtype->power(VAR_1, 0);
}

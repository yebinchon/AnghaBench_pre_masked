
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct fintek_8250* private_data; int dev; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct fintek_8250 {int dummy; } ;
typedef int probe_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fintek_8250* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*) ;
 int FUNC_3 (struct fintek_8250*,struct fintek_8250*,int) ;
 scalar_t__ FUNC_4 (struct fintek_8250*,struct uart_8250_port*) ;

int FUNC_5(struct uart_8250_port *VAR_3)
{
 struct fintek_8250 *VAR_4;
 struct fintek_8250 VAR_5;

 if (FUNC_4(&VAR_5, VAR_3))
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_3->port.dev, sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return -VAR_1;

 FUNC_3(VAR_4, &VAR_5, sizeof(VAR_5));
 VAR_3->port.private_data = VAR_4;
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);

 return 0;
}

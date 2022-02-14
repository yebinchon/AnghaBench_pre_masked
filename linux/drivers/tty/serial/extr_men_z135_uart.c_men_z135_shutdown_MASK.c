
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {int dummy; } ;
struct TYPE_2__ {int irq; } ;
struct men_z135_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct men_z135_port*) ;
 int FUNC_1 (struct men_z135_port*,int ,int ) ;
 struct men_z135_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_2)
{
 struct men_z135_port *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4 = 0;

 VAR_4 |= VAR_0;

 FUNC_1(VAR_3, VAR_1, VAR_4);

 FUNC_0(VAR_3->port.irq, VAR_3);
}

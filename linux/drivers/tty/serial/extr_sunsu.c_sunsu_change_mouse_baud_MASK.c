
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uartclk; } ;
struct uart_sunsu_port {unsigned int cflag; TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int*) ;
 int FUNC_1 (TYPE_1__*,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct uart_sunsu_port *VAR_1)
{
 unsigned int VAR_2 = VAR_1->cflag;
 int VAR_3, VAR_4;

 VAR_1->cflag &= ~VAR_0;
 VAR_1->cflag |= FUNC_0(VAR_2, &VAR_4);

 VAR_3 = VAR_1->port.uartclk / (16 * VAR_4);

 FUNC_1(&VAR_1->port, VAR_1->cflag, 0, VAR_3);
}

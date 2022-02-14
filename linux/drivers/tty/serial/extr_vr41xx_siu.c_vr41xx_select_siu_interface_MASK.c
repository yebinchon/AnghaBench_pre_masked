
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_port {int lock; } ;
typedef scalar_t__ siu_interface_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct uart_port*,int ) ;
 struct uart_port* VAR_3 ;
 int FUNC_1 (struct uart_port*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(siu_interface_t VAR_4)
{
 struct uart_port *VAR_5;
 unsigned long VAR_6;
 uint8_t VAR_7;

 VAR_5 = &VAR_3[0];

 FUNC_2(&VAR_5->lock, VAR_6);

 VAR_7 = FUNC_0(VAR_5, VAR_1);
 if (VAR_4 == VAR_2)
  VAR_7 |= VAR_0;
 else
  VAR_7 &= ~VAR_0;
 FUNC_1(VAR_5, VAR_1, VAR_7);

 FUNC_3(&VAR_5->lock, VAR_6);
}

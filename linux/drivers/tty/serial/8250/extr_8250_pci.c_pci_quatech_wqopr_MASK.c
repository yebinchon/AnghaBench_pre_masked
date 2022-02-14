
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {unsigned long iobase; } ;
struct uart_8250_port {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_8250_port *VAR_2, u8 VAR_3)
{
 unsigned long VAR_4 = VAR_2->port.iobase;
 u8 VAR_5;

 VAR_5 = FUNC_0(VAR_4 + VAR_0);
 FUNC_1(0xBF, VAR_4 + VAR_0);
 FUNC_0(VAR_4 + VAR_1);
 FUNC_1(VAR_3, VAR_4 + VAR_1);
 FUNC_1(VAR_5, VAR_4 + VAR_0);
}

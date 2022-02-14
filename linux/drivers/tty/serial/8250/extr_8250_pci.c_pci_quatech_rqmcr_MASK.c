
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
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct uart_8250_port *VAR_3)
{
 unsigned long VAR_4 = VAR_3->port.iobase;
 u8 VAR_5, VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_4 + VAR_0);
 FUNC_1(0xBF, VAR_4 + VAR_0);
 VAR_6 = FUNC_0(VAR_4 + VAR_2);
 FUNC_1(VAR_6 | 0x10, VAR_4 + VAR_2);
 VAR_7 = FUNC_0(VAR_4 + VAR_1);
 FUNC_1(VAR_6, VAR_4 + VAR_2);
 FUNC_1(VAR_5, VAR_4 + VAR_0);

 return VAR_7;
}

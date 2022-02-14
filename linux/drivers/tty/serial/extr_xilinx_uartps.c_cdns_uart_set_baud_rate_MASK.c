
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ membase; int uartclk; struct cdns_uart* private_data; } ;
struct cdns_uart {unsigned int baud; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ,unsigned int,int *,int *,int*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_4,
  unsigned int VAR_5)
{
 unsigned int VAR_6;
 u32 VAR_7 = 0, VAR_8 = 0;
 u32 VAR_9;
 int VAR_10;
 struct cdns_uart *VAR_11 = VAR_4->private_data;

 VAR_6 = FUNC_0(VAR_4->uartclk, VAR_5, &VAR_8, &VAR_7,
   &VAR_10);


 VAR_9 = FUNC_1(VAR_4->membase + VAR_2);
 if (VAR_10)
  VAR_9 |= VAR_3;
 else
  VAR_9 &= ~VAR_3;
 FUNC_2(VAR_9, VAR_4->membase + VAR_2);
 FUNC_2(VAR_7, VAR_4->membase + VAR_1);
 FUNC_2(VAR_8, VAR_4->membase + VAR_0);
 VAR_11->baud = VAR_5;

 return VAR_6;
}

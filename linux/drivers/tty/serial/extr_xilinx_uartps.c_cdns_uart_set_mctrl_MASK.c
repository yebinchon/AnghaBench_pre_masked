
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ membase; struct cdns_uart* private_data; } ;
struct cdns_uart {scalar_t__ cts_override; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_11, unsigned int VAR_12)
{
 u32 VAR_13;
 u32 VAR_14;
 struct cdns_uart *VAR_15 = VAR_11->private_data;

 if (VAR_15->cts_override)
  return;

 VAR_13 = FUNC_0(VAR_11->membase + VAR_0);
 VAR_14 = FUNC_0(VAR_11->membase + VAR_4);

 VAR_13 &= ~(VAR_3 | VAR_1 |
   VAR_2);
 VAR_14 &= ~VAR_6;

 if (VAR_12 & VAR_10 || VAR_12 & VAR_8)
  VAR_13 |= VAR_2;
 if (VAR_12 & VAR_9)
  VAR_14 |= VAR_5;
 else
  VAR_14 |= VAR_7;

 FUNC_1(VAR_13, VAR_11->membase + VAR_0);
 FUNC_1(VAR_14, VAR_11->membase + VAR_4);
}

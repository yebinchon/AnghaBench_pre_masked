
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct uart_port {scalar_t__ membase; } ;
struct men_z135_port {struct uart_port port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u16 FUNC_1(struct men_z135_port *VAR_1)
{
 struct uart_port *VAR_2 = &VAR_1->port;
 u32 VAR_3;
 u16 VAR_4;
 u8 VAR_5;
 u8 VAR_6;

 VAR_3 = FUNC_0(VAR_2->membase + VAR_0);
 VAR_5 = VAR_3 >> 24;
 VAR_6 = (VAR_3 & 0xC0) >> 6;

 VAR_4 = VAR_5 | (VAR_6 << 8);

 return VAR_4;
}

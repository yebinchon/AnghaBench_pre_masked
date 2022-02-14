
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ membase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_5)
{
 unsigned int VAR_6 = VAR_4 | VAR_2;
 u32 VAR_7;

 if (FUNC_1(VAR_5)) {
  VAR_6 |= VAR_3;
 } else {
  VAR_7 = FUNC_0(VAR_5->membase + VAR_1);
  if (!(VAR_7 & VAR_0))
   VAR_6 |= VAR_3;
 }

 return VAR_6;
}

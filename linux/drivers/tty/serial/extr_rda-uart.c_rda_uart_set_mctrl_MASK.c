
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_7, unsigned int VAR_8)
{
 u32 VAR_9;

 if (VAR_8 & VAR_6) {
  VAR_9 = FUNC_0(VAR_7, VAR_1);
  FUNC_1(VAR_7, (VAR_9 | VAR_4), VAR_1);
 } else {

  VAR_9 = FUNC_0(VAR_7, VAR_0);
  FUNC_1(VAR_7, (VAR_9 | VAR_4), VAR_0);
 }

 VAR_9 = FUNC_0(VAR_7, VAR_2);

 if (VAR_8 & VAR_5)
  VAR_9 |= VAR_3;
 else
  VAR_9 &= ~VAR_3;

 FUNC_1(VAR_7, VAR_9, VAR_2);
}

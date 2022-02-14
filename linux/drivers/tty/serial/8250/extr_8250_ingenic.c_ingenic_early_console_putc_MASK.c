
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_3, int VAR_4)
{
 uint8_t VAR_5;

 do {
  VAR_5 = FUNC_0(VAR_3, VAR_0);
 } while ((VAR_5 & VAR_1) == 0);

 FUNC_1(VAR_3, VAR_2, VAR_4);
}

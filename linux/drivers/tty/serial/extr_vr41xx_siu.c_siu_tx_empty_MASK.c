
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_port*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_3)
{
 uint8_t VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4 & VAR_2)
  return VAR_0;

 return 0;
}

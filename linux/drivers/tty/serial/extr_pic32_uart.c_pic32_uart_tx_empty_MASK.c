
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dummy; } ;
struct pic32_sport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pic32_sport*,int ) ;
 struct pic32_sport* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_2)
{
 struct pic32_sport *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4 = FUNC_0(VAR_3, VAR_0);

 return (VAR_4 & VAR_1) ? 1 : 0;
}

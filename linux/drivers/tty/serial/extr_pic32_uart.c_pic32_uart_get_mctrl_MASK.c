
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct pic32_sport {int hw_flow_ctrl; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct pic32_sport*) ;
 struct pic32_sport* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_3)
{
 struct pic32_sport *VAR_4 = FUNC_1(VAR_3);
 unsigned int VAR_5 = 0;

 if (!VAR_4->hw_flow_ctrl)
  VAR_5 |= VAR_1;
 else if (FUNC_0(VAR_4))
  VAR_5 |= VAR_1;




 VAR_5 |= VAR_0;
 VAR_5 |= VAR_2;

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dev; } ;
struct clps711x_port {int syscon; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct clps711x_port* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_3)
{
 struct clps711x_port *VAR_4 = FUNC_0(VAR_3->dev);
 u32 VAR_5 = 0;

 FUNC_1(VAR_4->syscon, VAR_0, &VAR_5);

 return (VAR_5 & VAR_1) ? 0 : VAR_2;
}

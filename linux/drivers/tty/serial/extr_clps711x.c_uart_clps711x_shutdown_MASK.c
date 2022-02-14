
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct clps711x_port {int syscon; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clps711x_port* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2)
{
 struct clps711x_port *VAR_3 = FUNC_0(VAR_2->dev);


 FUNC_1(VAR_3->syscon, VAR_0, VAR_1, 0);
}

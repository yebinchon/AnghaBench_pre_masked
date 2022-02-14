
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct uart_port {int dev; } ;
struct sc16is7xx_port {int regmap; } ;


 int const VAR_0 ;
 struct sc16is7xx_port* FUNC_0 (int ) ;
 int FUNC_1 (int ,int const,int const) ;
 int FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct sc16is7xx_port *VAR_4 = FUNC_0(VAR_1->dev);
 const u8 VAR_5 = FUNC_2(VAR_1);

 FUNC_1(VAR_4->regmap, (VAR_2 << VAR_0) | VAR_5, VAR_3);
}

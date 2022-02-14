
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_port {int dev; } ;
struct sc16is7xx_port {int regmap; int buf; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 struct sc16is7xx_port* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int ,unsigned int) ;
 int FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2, unsigned int VAR_3)
{
 struct sc16is7xx_port *VAR_4 = FUNC_0(VAR_2->dev);
 const u8 VAR_5 = FUNC_3(VAR_2);
 u8 VAR_6 = (VAR_1 << VAR_0) | VAR_5;

 FUNC_1(VAR_4->regmap, 1);
 FUNC_2(VAR_4->regmap, VAR_6, VAR_4->buf, VAR_3);
 FUNC_1(VAR_4->regmap, 0);
}

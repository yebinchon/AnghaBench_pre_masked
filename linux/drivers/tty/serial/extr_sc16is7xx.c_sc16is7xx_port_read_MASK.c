
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int const u8 ;
struct uart_port {int dev; } ;
struct sc16is7xx_port {int regmap; } ;


 unsigned int const VAR_0 ;
 struct sc16is7xx_port* FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int const,unsigned int*) ;
 unsigned int FUNC_2 (struct uart_port*) ;

__attribute__((used)) static u8 FUNC_3(struct uart_port *VAR_1, u8 VAR_2)
{
 struct sc16is7xx_port *VAR_3 = FUNC_0(VAR_1->dev);
 unsigned int VAR_4 = 0;
 const u8 VAR_5 = FUNC_2(VAR_1);

 FUNC_1(VAR_3->regmap, (VAR_2 << VAR_0) | VAR_5, &VAR_4);

 return VAR_4;
}

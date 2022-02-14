
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct uart_port {scalar_t__ iobase; int dev; } ;
struct max310x_port {int regmap; } ;


 struct max310x_port* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct max310x_port *VAR_4 = FUNC_0(VAR_0->dev);

 FUNC_1(VAR_4->regmap, VAR_0->iobase + VAR_1, VAR_2, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct uart_port {unsigned int iobase; int dev; } ;
struct max310x_port {int regmap; } ;


 struct max310x_port* FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static u8 FUNC_2(struct uart_port *VAR_0, u8 VAR_1)
{
 struct max310x_port *VAR_2 = FUNC_0(VAR_0->dev);
 unsigned int VAR_3 = 0;

 FUNC_1(VAR_2->regmap, VAR_0->iobase + VAR_1, &VAR_3);

 return VAR_3;
}

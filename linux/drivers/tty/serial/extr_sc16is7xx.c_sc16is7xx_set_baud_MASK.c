
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct uart_port {unsigned long uartclk; int dev; } ;
struct sc16is7xx_port {int regmap; int efr_lock; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 struct sc16is7xx_port* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 unsigned long FUNC_5 (struct uart_port*,int ) ;
 int FUNC_6 (struct uart_port*,int ,unsigned long,unsigned long) ;
 int FUNC_7 (struct uart_port*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct uart_port *VAR_9, int VAR_10)
{
 struct sc16is7xx_port *VAR_11 = FUNC_1(VAR_9->dev);
 u8 VAR_12;
 u8 VAR_13 = 0;
 unsigned long VAR_14 = VAR_9->uartclk, VAR_15 = VAR_14 / 16 / VAR_10;

 if (VAR_15 > 0xffff) {
  VAR_13 = VAR_7;
  VAR_15 /= 4;
 }
 FUNC_2(&VAR_11->efr_lock);

 VAR_12 = FUNC_5(VAR_9, VAR_6);


 FUNC_7(VAR_9, VAR_6,
        VAR_5);


 FUNC_4(VAR_11->regmap, 1);
 FUNC_7(VAR_9, VAR_3,
        VAR_2);
 FUNC_4(VAR_11->regmap, 0);


 FUNC_7(VAR_9, VAR_6, VAR_12);

 FUNC_3(&VAR_11->efr_lock);

 FUNC_6(VAR_9, VAR_8,
         VAR_7,
         VAR_13);


 FUNC_7(VAR_9, VAR_6,
        VAR_4);


 FUNC_4(VAR_11->regmap, 1);
 FUNC_7(VAR_9, VAR_0, VAR_15 / 256);
 FUNC_7(VAR_9, VAR_1, VAR_15 % 256);
 FUNC_4(VAR_11->regmap, 0);


 FUNC_7(VAR_9, VAR_6, VAR_12);

 return FUNC_0(VAR_14 / 16, VAR_15);
}

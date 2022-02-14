
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct sc16is7xx_port {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 struct sc16is7xx_port* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct uart_port*,int ,int,int) ;
 int FUNC_5 (struct uart_port*,int ,unsigned int) ;
 int FUNC_6 (struct uart_port*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct uart_port *VAR_18)
{
 struct sc16is7xx_port *VAR_19 = FUNC_2(VAR_18->dev);
 unsigned int VAR_20;

 FUNC_6(VAR_18, 1);


 VAR_20 = VAR_7 | VAR_8;
 FUNC_5(VAR_18, VAR_6, VAR_20);
 FUNC_7(5);
 FUNC_5(VAR_18, VAR_6,
        VAR_5);


 FUNC_5(VAR_18, VAR_13,
        VAR_12);

 FUNC_3(VAR_19->regmap, 1);


 FUNC_5(VAR_18, VAR_4,
        VAR_3);


 FUNC_4(VAR_18, VAR_15,
         VAR_16,
         VAR_16);



 FUNC_5(VAR_18, VAR_17,
        FUNC_1(24) |
        FUNC_0(48));

 FUNC_3(VAR_19->regmap, 0);


 FUNC_5(VAR_18, VAR_13, VAR_14);


 FUNC_4(VAR_18, VAR_0,
         VAR_1 |
         VAR_2,
         0);


 VAR_20 = VAR_9 | VAR_11;
 FUNC_5(VAR_18, VAR_10, VAR_20);

 return 0;
}

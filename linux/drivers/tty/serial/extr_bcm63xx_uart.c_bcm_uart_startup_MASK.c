
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int fifosize; int dev; int irq; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 int VAR_14 ;
 unsigned int FUNC_3 (struct uart_port*,int ) ;
 int FUNC_4 (struct uart_port*,unsigned int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ,struct uart_port*) ;

__attribute__((used)) static int FUNC_7(struct uart_port *VAR_15)
{
 unsigned int VAR_16;
 int VAR_17;


 FUNC_0(VAR_15);
 FUNC_4(VAR_15, 0, VAR_7);
 FUNC_2(VAR_15);


 (void)FUNC_3(VAR_15, VAR_6);


 VAR_16 = FUNC_3(VAR_15, VAR_8);
 VAR_16 &= ~(VAR_9 | VAR_11);
 VAR_16 |= (VAR_15->fifosize / 2) << VAR_10;
 VAR_16 |= (VAR_15->fifosize / 2) << VAR_12;
 FUNC_4(VAR_15, VAR_16, VAR_8);


 VAR_16 = FUNC_3(VAR_15, VAR_0);
 VAR_16 &= ~VAR_1;
 VAR_16 |= 1 << VAR_2;
 FUNC_4(VAR_15, VAR_16, VAR_0);


 VAR_16 = VAR_5;
 VAR_16 |= VAR_4;
 VAR_16 |= VAR_3;
 FUNC_4(VAR_15, VAR_16, VAR_6);


 VAR_17 = FUNC_6(VAR_15->irq, VAR_14, 0,
     FUNC_5(VAR_15->dev), VAR_15);
 if (VAR_17)
  return VAR_17;
 FUNC_4(VAR_15, VAR_13, VAR_7);
 FUNC_1(VAR_15);
 return 0;
}

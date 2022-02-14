
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; int irq; int dev; int lock; struct cdns_uart* private_data; } ;
struct cdns_uart {int quirks; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int ,int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int ,struct uart_port*) ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct uart_port *VAR_22)
{
 struct cdns_uart *VAR_23 = VAR_22->private_data;
 bool VAR_24;
 int VAR_25;
 unsigned long VAR_26;
 unsigned int VAR_27 = 0;

 VAR_24 = VAR_23->quirks & VAR_15;

 FUNC_4(&VAR_22->lock, VAR_26);


 FUNC_6(VAR_5 | VAR_2,
   VAR_22->membase + VAR_0);




 FUNC_6(VAR_4 | VAR_1,
   VAR_22->membase + VAR_0);

 while (FUNC_2(VAR_22->membase + VAR_0) &
  (VAR_4 | VAR_1))
  FUNC_0();





 VAR_27 = FUNC_2(VAR_22->membase + VAR_0);
 VAR_27 &= ~VAR_2;
 VAR_27 |= VAR_3;
 FUNC_6(VAR_27, VAR_22->membase + VAR_0);




 FUNC_6(VAR_11 | VAR_13
  | VAR_12 | VAR_10,
  VAR_22->membase + VAR_9);





 FUNC_6(VAR_21, VAR_22->membase + VAR_17);





 FUNC_6(VAR_20, VAR_22->membase + VAR_16);


 FUNC_6(FUNC_2(VAR_22->membase + VAR_7),
   VAR_22->membase + VAR_7);

 FUNC_5(&VAR_22->lock, VAR_26);

 VAR_25 = FUNC_3(VAR_22->irq, VAR_19, 0, VAR_14, VAR_22);
 if (VAR_25) {
  FUNC_1(VAR_22->dev, "request_irq '%d' failed with %d\n",
   VAR_22->irq, VAR_25);
  return VAR_25;
 }


 if (VAR_24)
  FUNC_6(VAR_18 | VAR_8,
     VAR_22->membase + VAR_6);
 else
  FUNC_6(VAR_18, VAR_22->membase + VAR_6);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; int irqflags; scalar_t__ membase; } ;
struct mvebu_uart {int * irq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct uart_port*) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,struct uart_port*) ;
 int FUNC_6 (int ,int ,int ,int ,int ,struct uart_port*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_7 (scalar_t__) ;
 struct mvebu_uart* FUNC_8 (struct uart_port*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct uart_port *VAR_11)
{
 struct mvebu_uart *VAR_12 = FUNC_8(VAR_11);
 unsigned int VAR_13;
 int VAR_14;

 FUNC_10(VAR_2 | VAR_1,
        VAR_11->membase + FUNC_1(VAR_11));
 FUNC_9(1);


 VAR_14 = FUNC_7(VAR_11->membase + VAR_6);
 VAR_14 |= VAR_3;
 FUNC_10(VAR_14, VAR_11->membase + VAR_6);

 FUNC_10(VAR_0, VAR_11->membase + FUNC_1(VAR_11));

 VAR_13 = FUNC_7(VAR_11->membase + FUNC_2(VAR_11));
 VAR_13 |= FUNC_0(VAR_11);
 FUNC_10(VAR_13, VAR_11->membase + FUNC_2(VAR_11));

 if (!VAR_12->irq[VAR_7]) {

  VAR_14 = FUNC_6(VAR_11->dev, VAR_12->irq[VAR_4],
           VAR_8, VAR_11->irqflags,
           FUNC_4(VAR_11->dev), VAR_11);
  if (VAR_14) {
   FUNC_3(VAR_11->dev, "unable to request IRQ %d\n",
    VAR_12->irq[VAR_4]);
   return VAR_14;
  }
 } else {

  VAR_14 = FUNC_6(VAR_11->dev, VAR_12->irq[VAR_5],
           VAR_9, VAR_11->irqflags,
           FUNC_4(VAR_11->dev), VAR_11);
  if (VAR_14) {
   FUNC_3(VAR_11->dev, "unable to request IRQ %d\n",
    VAR_12->irq[VAR_5]);
   return VAR_14;
  }

  VAR_14 = FUNC_6(VAR_11->dev, VAR_12->irq[VAR_7],
           VAR_10, VAR_11->irqflags,
           FUNC_4(VAR_11->dev),
           VAR_11);
  if (VAR_14) {
   FUNC_3(VAR_11->dev, "unable to request IRQ %d\n",
    VAR_12->irq[VAR_7]);
   FUNC_5(VAR_11->dev, VAR_12->irq[VAR_5],
          VAR_11);
   return VAR_14;
  }
 }

 return 0;
}

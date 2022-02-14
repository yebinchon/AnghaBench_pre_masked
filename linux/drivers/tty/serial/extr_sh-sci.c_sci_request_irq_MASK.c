
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; int dev; int irqflags; } ;
struct sci_port {int* irqs; int * irqstr; struct uart_port port; } ;
struct sci_irq_desc {int desc; int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sci_port*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,struct sci_port*) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ,int ,int ,struct sci_port*) ;
 struct sci_irq_desc* VAR_4 ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct sci_port *VAR_5)
{
 struct uart_port *VAR_6 = &VAR_5->port;
 int VAR_7, VAR_8, VAR_9, VAR_10 = 0;

 for (VAR_7 = VAR_8 = 0; VAR_7 < VAR_3; VAR_7++, VAR_8++) {
  const struct sci_irq_desc *VAR_11;
  int VAR_12;


  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   if (VAR_5->irqs[VAR_9] == VAR_5->irqs[VAR_7])
    VAR_9 = VAR_7 + 1;
  if (VAR_9 > VAR_7)
   continue;

  if (FUNC_0(VAR_5)) {
   VAR_7 = VAR_2;
   VAR_12 = VAR_6->irq;
  } else {
   VAR_12 = VAR_5->irqs[VAR_7];





   if (FUNC_7(VAR_12 < 0))
    continue;
  }

  VAR_11 = VAR_4 + VAR_7;
  VAR_5->irqstr[VAR_8] = FUNC_4(VAR_1, "%s:%s",
         FUNC_2(VAR_6->dev), VAR_11->desc);
  if (!VAR_5->irqstr[VAR_8]) {
   VAR_10 = -VAR_0;
   goto out_nomem;
  }

  VAR_10 = FUNC_6(VAR_12, VAR_11->handler, VAR_6->irqflags,
      VAR_5->irqstr[VAR_8], VAR_5);
  if (FUNC_7(VAR_10)) {
   FUNC_1(VAR_6->dev, "Can't allocate %s IRQ\n", VAR_11->desc);
   goto out_noirq;
  }
 }

 return 0;

out_noirq:
 while (--VAR_7 >= 0)
  FUNC_3(VAR_5->irqs[VAR_7], VAR_5);

out_nomem:
 while (--VAR_8 >= 0)
  FUNC_5(VAR_5->irqstr[VAR_8]);

 return VAR_10;
}

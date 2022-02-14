
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; } ;
struct pcmcia_device {scalar_t__ _irq; int priv; int irq; struct resource** resource; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (struct pcmcia_device*) ;
 int FUNC_4 (struct pcmcia_device*,struct resource*) ;

void FUNC_5(struct pcmcia_device *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_3->dev, "disabling device\n");

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct resource *VAR_5 = VAR_3->resource[VAR_0 + VAR_4];
  if (VAR_5->flags & VAR_2)
   FUNC_4(VAR_3, VAR_5);
 }

 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
 if (VAR_3->_irq) {
  FUNC_1(VAR_3->irq, VAR_3->priv);
  VAR_3->_irq = 0;
 }
}

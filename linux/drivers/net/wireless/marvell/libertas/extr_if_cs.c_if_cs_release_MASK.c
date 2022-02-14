
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int irq; struct if_cs_card* priv; } ;
struct if_cs_card {scalar_t__ iobase; } ;


 int FUNC_0 (int ,struct if_cs_card*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
 struct if_cs_card *VAR_1 = VAR_0->priv;

 FUNC_0(VAR_0->irq, VAR_1);
 FUNC_2(VAR_0);
 if (VAR_1->iobase)
  FUNC_1(VAR_1->iobase);
}

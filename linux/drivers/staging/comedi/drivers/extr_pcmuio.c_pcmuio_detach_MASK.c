
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmuio_private {scalar_t__ irq2; } ;
struct comedi_device {scalar_t__ irq; struct pcmuio_private* private; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_0)
{
 struct pcmuio_private *VAR_1 = VAR_0->private;

 if (VAR_1) {
  FUNC_2(VAR_0);


  if (VAR_1->irq2 && VAR_1->irq2 != VAR_0->irq)
   FUNC_1(VAR_1->irq2, VAR_0);
 }
 FUNC_0(VAR_0);
}

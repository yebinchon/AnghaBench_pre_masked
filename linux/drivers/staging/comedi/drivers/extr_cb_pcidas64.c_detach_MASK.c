
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {scalar_t__ main_iobase; scalar_t__ plx9080_iobase; } ;
struct comedi_device {scalar_t__ mmio; scalar_t__ irq; struct pcidas64_private* private; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (scalar_t__,struct comedi_device*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_0)
{
 struct pcidas64_private *VAR_1 = VAR_0->private;

 if (VAR_0->irq)
  FUNC_3(VAR_0->irq, VAR_0);
 if (VAR_1) {
  if (VAR_1->plx9080_iobase) {
   FUNC_2(VAR_0);
   FUNC_4(VAR_1->plx9080_iobase);
  }
  if (VAR_1->main_iobase)
   FUNC_4(VAR_1->main_iobase);
  if (VAR_0->mmio)
   FUNC_4(VAR_0->mmio);
 }
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
}

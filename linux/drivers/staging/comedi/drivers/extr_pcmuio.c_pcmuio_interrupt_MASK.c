
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmuio_private {int irq2; } ;
struct comedi_device {int irq; struct pcmuio_private* private; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct comedi_device *VAR_4 = VAR_3;
 struct pcmuio_private *VAR_5 = VAR_4->private;
 int VAR_6 = 0;

 if (VAR_2 == VAR_4->irq)
  VAR_6 += FUNC_0(VAR_4, 0);
 if (VAR_2 == VAR_5->irq2)
  VAR_6 += FUNC_0(VAR_4, 1);

 return VAR_6 ? VAR_0 : VAR_1;
}

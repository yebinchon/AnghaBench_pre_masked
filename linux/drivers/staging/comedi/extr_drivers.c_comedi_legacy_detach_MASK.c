
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iolen; scalar_t__ iobase; scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__,struct comedi_device*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

void FUNC_2(struct comedi_device *VAR_0)
{
 if (VAR_0->irq) {
  FUNC_0(VAR_0->irq, VAR_0);
  VAR_0->irq = 0;
 }
 if (VAR_0->iobase && VAR_0->iolen) {
  FUNC_1(VAR_0->iobase, VAR_0->iolen);
  VAR_0->iobase = 0;
  VAR_0->iolen = 0;
 }
}

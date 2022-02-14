
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpdi_private {scalar_t__ plx9080_mmio; } ;
struct comedi_device {scalar_t__ mmio; scalar_t__ irq; struct hpdi_private* private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_1)
{
 struct hpdi_private *VAR_2 = VAR_1->private;

 if (VAR_1->irq)
  FUNC_1(VAR_1->irq, VAR_1);
 if (VAR_2) {
  if (VAR_2->plx9080_mmio) {
   FUNC_4(0, VAR_2->plx9080_mmio + VAR_0);
   FUNC_3(VAR_2->plx9080_mmio);
  }
  if (VAR_1->mmio)
   FUNC_3(VAR_1->mmio);
 }
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
}

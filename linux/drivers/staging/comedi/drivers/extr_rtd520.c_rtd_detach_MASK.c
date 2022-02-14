
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtd_private {scalar_t__ lcfg; scalar_t__ las1; } ;
struct comedi_device {scalar_t__ mmio; scalar_t__ irq; struct rtd_private* private; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct comedi_device*) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_0)
{
 struct rtd_private *VAR_1 = VAR_0->private;

 if (VAR_1) {

  if (VAR_0->mmio && VAR_1->lcfg)
   FUNC_3(VAR_0);
  if (VAR_0->irq)
   FUNC_1(VAR_0->irq, VAR_0);
  if (VAR_0->mmio)
   FUNC_2(VAR_0->mmio);
  if (VAR_1->las1)
   FUNC_2(VAR_1->las1);
  if (VAR_1->lcfg)
   FUNC_2(VAR_1->lcfg);
 }
 FUNC_0(VAR_0);
}

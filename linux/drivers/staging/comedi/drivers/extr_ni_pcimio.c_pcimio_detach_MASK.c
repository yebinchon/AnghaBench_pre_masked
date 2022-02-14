
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int mite; int * gpct_mite_ring; int cdo_mite_ring; int ao_mite_ring; int ai_mite_ring; } ;
struct comedi_device {scalar_t__ mmio; scalar_t__ irq; struct ni_private* private; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_0)
{
 struct ni_private *VAR_1 = VAR_0->private;

 FUNC_3(VAR_0);
 if (VAR_0->irq)
  FUNC_1(VAR_0->irq, VAR_0);
 if (VAR_1) {
  FUNC_5(VAR_1->ai_mite_ring);
  FUNC_5(VAR_1->ao_mite_ring);
  FUNC_5(VAR_1->cdo_mite_ring);
  FUNC_5(VAR_1->gpct_mite_ring[0]);
  FUNC_5(VAR_1->gpct_mite_ring[1]);
  FUNC_4(VAR_1->mite);
 }
 if (VAR_0->mmio)
  FUNC_2(VAR_0->mmio);
 FUNC_0(VAR_0);
}

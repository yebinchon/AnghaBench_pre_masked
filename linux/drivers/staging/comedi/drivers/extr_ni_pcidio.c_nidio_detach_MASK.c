
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nidio96_private {int mite; int * di_mite_ring; } ;
struct comedi_device {scalar_t__ mmio; scalar_t__ irq; struct nidio96_private* private; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_0)
{
 struct nidio96_private *VAR_1 = VAR_0->private;

 if (VAR_0->irq)
  FUNC_1(VAR_0->irq, VAR_0);
 if (VAR_1) {
  if (VAR_1->di_mite_ring) {
   FUNC_4(VAR_1->di_mite_ring);
   VAR_1->di_mite_ring = ((void*)0);
  }
  FUNC_3(VAR_1->mite);
 }
 if (VAR_0->mmio)
  FUNC_2(VAR_0->mmio);
 FUNC_0(VAR_0);
}

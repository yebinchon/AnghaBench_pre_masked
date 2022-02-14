
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_660x_private {int mite; int counter_dev; } ;
struct comedi_device {scalar_t__ mmio; scalar_t__ irq; struct ni_660x_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*,int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_1)
{
 struct ni_660x_private *VAR_2 = VAR_1->private;

 if (VAR_1->irq) {
  FUNC_5(VAR_1, 0, 0, VAR_0);
  FUNC_1(VAR_1->irq, VAR_1);
 }
 if (VAR_2) {
  FUNC_6(VAR_2->counter_dev);
  FUNC_4(VAR_1);
  FUNC_3(VAR_2->mite);
 }
 if (VAR_1->mmio)
  FUNC_2(VAR_1->mmio);
 FUNC_0(VAR_1);
}

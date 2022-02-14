
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct me4000_private {scalar_t__ plx_regbase; } ;
struct comedi_device {struct me4000_private* private; scalar_t__ irq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1)
{
 if (VAR_1->irq) {
  struct me4000_private *VAR_2 = VAR_1->private;


  FUNC_1(0, VAR_2->plx_regbase + VAR_0);
 }
 FUNC_0(VAR_1);
}

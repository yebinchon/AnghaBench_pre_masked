
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci9118_private {int int_ctrl; } ;
struct comedi_device {scalar_t__ iobase; struct pci9118_private* private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct comedi_device*,int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_2, bool VAR_3)
{
 struct pci9118_private *VAR_4 = VAR_2->private;

 if (VAR_3)
  VAR_4->int_ctrl |= VAR_0;
 else
  VAR_4->int_ctrl &= ~VAR_0;
 FUNC_0(VAR_4->int_ctrl, VAR_2->iobase + VAR_1);

 if (VAR_4->int_ctrl)
  FUNC_1(VAR_2, 1);
 else
  FUNC_1(VAR_2, 0);
}

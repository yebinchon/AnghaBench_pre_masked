
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci1710_private {int ctrl; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; int pacer; struct pci1710_private* private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4,
        struct comedi_subdevice *VAR_5)
{
 struct pci1710_private *VAR_6 = VAR_4->private;


 VAR_6->ctrl &= VAR_2;
 FUNC_2(VAR_6->ctrl, VAR_4->iobase + VAR_3);


 FUNC_0(VAR_4->pacer, 1, 2, 0);


 FUNC_1(0, VAR_4->iobase + VAR_0);
 FUNC_1(0, VAR_4->iobase + VAR_1);

 return 0;
}

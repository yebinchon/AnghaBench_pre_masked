
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci1710_private {int ctrl; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct pci1710_private* private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_5 ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,int ,unsigned int*) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,int *,int,int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_6,
    struct comedi_subdevice *VAR_7,
    struct comedi_insn *VAR_8,
    unsigned int *VAR_9)
{
 struct pci1710_private *VAR_10 = VAR_6->private;
 int VAR_11 = 0;
 int VAR_12;


 VAR_10->ctrl |= VAR_3;
 FUNC_2(VAR_10->ctrl, VAR_6->iobase + VAR_2);

 FUNC_1(0, VAR_6->iobase + VAR_0);
 FUNC_1(0, VAR_6->iobase + VAR_1);

 FUNC_4(VAR_6, VAR_7, &VAR_8->chanspec, 1, 1);

 for (VAR_12 = 0; VAR_12 < VAR_8->n; VAR_12++) {
  unsigned int VAR_13;


  FUNC_2(0, VAR_6->iobase + VAR_4);

  VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_5, 0);
  if (VAR_11)
   break;

  VAR_11 = FUNC_3(VAR_6, VAR_7, 0, &VAR_13);
  if (VAR_11)
   break;

  VAR_9[VAR_12] = VAR_13;
 }


 VAR_10->ctrl &= ~VAR_3;
 FUNC_2(VAR_10->ctrl, VAR_6->iobase + VAR_2);

 FUNC_1(0, VAR_6->iobase + VAR_0);
 FUNC_1(0, VAR_6->iobase + VAR_1);

 return VAR_11 ? VAR_11 : VAR_8->n;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct comedi_subdevice {int n_chan; int maxdata; int state; int insn_bits; int * range_table; int subdev_flags; int type; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*) ;
 struct pci_dev* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct pci_dev*,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_6,
         unsigned long VAR_7)
{
 struct pci_dev *VAR_8 = FUNC_2(VAR_6);
 struct comedi_subdevice *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_6->iobase = FUNC_4(VAR_8, 2);
 VAR_10 = FUNC_0(VAR_6, 1);
 if (VAR_10)
  return VAR_10;


 VAR_9 = &VAR_6->subdevices[0];
 VAR_9->type = VAR_0;
 VAR_9->subdev_flags = VAR_3;
 VAR_9->n_chan = 16;
 VAR_9->maxdata = 1;
 VAR_9->range_table = &VAR_5;
 VAR_9->insn_bits = VAR_4;


 VAR_9->state = FUNC_3(VAR_6->iobase + VAR_1) |
     (FUNC_3(VAR_6->iobase + VAR_2) << 8);

 return 0;
}

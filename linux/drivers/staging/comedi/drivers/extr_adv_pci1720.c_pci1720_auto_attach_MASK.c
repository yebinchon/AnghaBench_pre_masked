
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct comedi_subdevice {int n_chan; int maxdata; int insn_bits; int * range_table; int subdev_flags; int type; int insn_write; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*) ;
 struct pci_dev* FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (struct pci_dev*,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_9,
          unsigned long VAR_10)
{
 struct pci_dev *VAR_11 = FUNC_3(VAR_9);
 struct comedi_subdevice *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_9);
 if (VAR_13)
  return VAR_13;
 VAR_9->iobase = FUNC_5(VAR_11, 2);

 VAR_13 = FUNC_1(VAR_9, 2);
 if (VAR_13)
  return VAR_13;


 VAR_12 = &VAR_9->subdevices[0];
 VAR_12->type = VAR_0;
 VAR_12->subdev_flags = VAR_4;
 VAR_12->n_chan = 4;
 VAR_12->maxdata = 0x0fff;
 VAR_12->range_table = &VAR_6;
 VAR_12->insn_write = VAR_5;

 VAR_13 = FUNC_0(VAR_12);
 if (VAR_13)
  return VAR_13;


 VAR_12 = &VAR_9->subdevices[1];
 VAR_12->type = VAR_1;
 VAR_12->subdev_flags = VAR_3;
 VAR_12->n_chan = 4;
 VAR_12->maxdata = 1;
 VAR_12->range_table = &VAR_8;
 VAR_12->insn_bits = VAR_7;


 FUNC_4(0, VAR_9->iobase + VAR_2);

 return 0;
}

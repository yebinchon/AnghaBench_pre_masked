
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct comedi_subdevice {int n_chan; int maxdata; unsigned int state; int insn_bits; int * range_table; void* subdev_flags; int type; int insn_write; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*) ;
 struct pci_dev* FUNC_3 (struct comedi_device*) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (struct pci_dev*,int) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_13,
          unsigned long VAR_14)
{
 struct pci_dev *VAR_15 = FUNC_3(VAR_13);
 struct comedi_subdevice *VAR_16;
 unsigned int VAR_17;
 int VAR_18;

 VAR_18 = FUNC_2(VAR_13);
 if (VAR_18)
  return VAR_18;
 VAR_13->iobase = FUNC_5(VAR_15, 2);

 VAR_18 = FUNC_1(VAR_13, 3);
 if (VAR_18)
  return VAR_18;

 VAR_16 = &VAR_13->subdevices[0];

 VAR_16->type = VAR_0;
 VAR_16->subdev_flags = VAR_7;
 VAR_16->n_chan = 16;
 VAR_16->maxdata = 0xffff;
 VAR_16->range_table = &VAR_11;
 VAR_16->insn_write = VAR_8;

 VAR_18 = FUNC_0(VAR_16);
 if (VAR_18)
  return VAR_18;

 VAR_16 = &VAR_13->subdevices[1];

 VAR_16->type = VAR_1;
 VAR_16->subdev_flags = VAR_6;
 VAR_16->n_chan = 4;
 VAR_16->maxdata = 1;
 VAR_16->range_table = &VAR_12;
 VAR_16->insn_bits = VAR_9;

 VAR_16 = &VAR_13->subdevices[2];

 VAR_16->type = VAR_2;
 VAR_16->subdev_flags = VAR_7;
 VAR_16->n_chan = 4;
 VAR_16->maxdata = 1;
 VAR_16->range_table = &VAR_12;
 VAR_16->insn_bits = VAR_10;





 VAR_17 = FUNC_4(VAR_13->iobase + VAR_3);
 VAR_17 = (VAR_17 & VAR_4) >> VAR_5;
 VAR_16->state = VAR_17;

 return 0;
}

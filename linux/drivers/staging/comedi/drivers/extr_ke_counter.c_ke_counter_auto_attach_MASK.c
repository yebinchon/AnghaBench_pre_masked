
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct comedi_subdevice {int n_chan; int maxdata; int insn_bits; int * range_table; int subdev_flags; int type; int insn_config; int insn_write; int insn_read; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*) ;
 struct pci_dev* FUNC_2 (struct comedi_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int ) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_12,
      unsigned long VAR_13)
{
 struct pci_dev *VAR_14 = FUNC_2(VAR_12);
 struct comedi_subdevice *VAR_15;
 int VAR_16;

 VAR_16 = FUNC_1(VAR_12);
 if (VAR_16)
  return VAR_16;
 VAR_12->iobase = FUNC_5(VAR_14, 0);

 VAR_16 = FUNC_0(VAR_12, 2);
 if (VAR_16)
  return VAR_16;

 VAR_15 = &VAR_12->subdevices[0];
 VAR_15->type = VAR_0;
 VAR_15->subdev_flags = VAR_4;
 VAR_15->n_chan = 3;
 VAR_15->maxdata = 0x01ffffff;
 VAR_15->range_table = &VAR_11;
 VAR_15->insn_read = VAR_8;
 VAR_15->insn_write = VAR_9;
 VAR_15->insn_config = VAR_7;

 VAR_15 = &VAR_12->subdevices[1];
 VAR_15->type = VAR_1;
 VAR_15->subdev_flags = VAR_5;
 VAR_15->n_chan = 3;
 VAR_15->maxdata = 1;
 VAR_15->range_table = &VAR_10;
 VAR_15->insn_bits = VAR_6;

 FUNC_4(VAR_2, VAR_12->iobase + VAR_3);

 FUNC_3(VAR_12);

 return 0;
}

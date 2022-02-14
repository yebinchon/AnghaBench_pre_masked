
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct comedi_subdevice {int n_chan; int maxdata; int insn_bits; int * range_table; int subdev_flags; int type; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct comedi_subdevice*,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (struct comedi_device*) ;
 struct pci_dev* FUNC_4 (struct comedi_device*) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_8,
    unsigned long VAR_9)
{
 struct pci_dev *VAR_10 = FUNC_4(VAR_8);
 struct comedi_subdevice *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_8->iobase = FUNC_5(VAR_10, 1);

 VAR_12 = FUNC_2(VAR_8, 3);
 if (VAR_12)
  return VAR_12;


 VAR_11 = &VAR_8->subdevices[0];
 VAR_11->type = VAR_1;
 VAR_11->subdev_flags = VAR_3;
 VAR_11->n_chan = 8;
 VAR_11->maxdata = 1;
 VAR_11->range_table = &VAR_7;
 VAR_11->insn_bits = VAR_5;


 VAR_11 = &VAR_8->subdevices[1];
 VAR_11->type = VAR_2;
 VAR_11->subdev_flags = VAR_4;
 VAR_11->n_chan = 16;
 VAR_11->maxdata = 1;
 VAR_11->range_table = &VAR_7;
 VAR_11->insn_bits = VAR_6;


 VAR_11 = &VAR_8->subdevices[2];
 VAR_12 = FUNC_0(VAR_11, VAR_8->iobase + VAR_0);
 if (VAR_12)
  return VAR_12;

 FUNC_1(VAR_8);
 return 0;
}

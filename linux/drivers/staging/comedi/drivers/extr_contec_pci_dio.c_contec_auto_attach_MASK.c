
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct comedi_subdevice {int n_chan; int maxdata; int insn_bits; int * range_table; int subdev_flags; int type; } ;
struct comedi_device {struct comedi_subdevice* subdevices; int iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*) ;
 struct pci_dev* FUNC_2 (struct comedi_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_7,
         unsigned long VAR_8)
{
 struct pci_dev *VAR_9 = FUNC_2(VAR_7);
 struct comedi_subdevice *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_7);
 if (VAR_11)
  return VAR_11;
 VAR_7->iobase = FUNC_3(VAR_9, 0);

 VAR_11 = FUNC_0(VAR_7, 2);
 if (VAR_11)
  return VAR_11;

 VAR_10 = &VAR_7->subdevices[0];
 VAR_10->type = VAR_0;
 VAR_10->subdev_flags = VAR_2;
 VAR_10->n_chan = 16;
 VAR_10->maxdata = 1;
 VAR_10->range_table = &VAR_6;
 VAR_10->insn_bits = VAR_4;

 VAR_10 = &VAR_7->subdevices[1];
 VAR_10->type = VAR_1;
 VAR_10->subdev_flags = VAR_3;
 VAR_10->n_chan = 16;
 VAR_10->maxdata = 1;
 VAR_10->range_table = &VAR_6;
 VAR_10->insn_bits = VAR_5;

 return 0;
}

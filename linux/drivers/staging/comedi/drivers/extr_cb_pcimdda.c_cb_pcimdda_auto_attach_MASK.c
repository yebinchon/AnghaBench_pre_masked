
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int insn_read; int insn_write; int * range_table; int type; } ;
struct comedi_device {struct comedi_subdevice* subdevices; int iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*) ;
 struct pci_dev* FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int VAR_6 ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_7,
      unsigned long VAR_8)
{
 struct pci_dev *VAR_9 = FUNC_3(VAR_7);
 struct comedi_subdevice *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_7);
 if (VAR_11)
  return VAR_11;
 VAR_7->iobase = FUNC_4(VAR_9, 3);

 VAR_11 = FUNC_1(VAR_7, 2);
 if (VAR_11)
  return VAR_11;

 VAR_10 = &VAR_7->subdevices[0];

 VAR_10->type = VAR_0;
 VAR_10->subdev_flags = VAR_3 | VAR_2;
 VAR_10->n_chan = 6;
 VAR_10->maxdata = 0xffff;
 VAR_10->range_table = &VAR_6;
 VAR_10->insn_write = VAR_5;
 VAR_10->insn_read = VAR_4;

 VAR_11 = FUNC_0(VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_10 = &VAR_7->subdevices[1];

 return FUNC_5(VAR_7, VAR_10, ((void*)0), VAR_1);
}

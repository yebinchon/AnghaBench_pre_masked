
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct comedi_subdevice {int n_chan; int maxdata; int state; int type; int insn_config; int subdev_flags; int insn_bits; int * range_table; } ;
struct comedi_device {struct comedi_subdevice* subdevices; int iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*) ;
 struct pci_dev* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
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

 FUNC_4(VAR_12);

 VAR_16 = FUNC_0(VAR_12, 4);
 if (VAR_16)
  return VAR_16;


 VAR_15 = &VAR_12->subdevices[0];
 VAR_15->type = VAR_0;
 VAR_15->subdev_flags = VAR_6;
 VAR_15->n_chan = 8;
 VAR_15->maxdata = 1;
 VAR_15->range_table = &VAR_11;
 VAR_15->insn_bits = VAR_8;


 VAR_15 = &VAR_12->subdevices[1];
 VAR_15->type = VAR_1;
 VAR_15->subdev_flags = VAR_7;
 VAR_15->n_chan = 8;
 VAR_15->maxdata = 1;
 VAR_15->range_table = &VAR_11;
 VAR_15->insn_bits = VAR_9;


 VAR_16 = FUNC_3(VAR_12, VAR_4, 0);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_15->state = VAR_16;


 VAR_15 = &VAR_12->subdevices[2];
 VAR_15->type = VAR_2;
 VAR_15->subdev_flags = VAR_5;
 VAR_15->n_chan = 2;
 VAR_15->insn_config = VAR_10;


 VAR_15 = &VAR_12->subdevices[3];
 VAR_15->type = VAR_3;

 return 0;
}

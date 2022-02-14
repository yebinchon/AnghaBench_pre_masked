
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct comedi_subdevice {int maxdata; void* type; int insn_bits; int * range_table; scalar_t__ n_chan; int subdev_flags; } ;
struct comedi_device {struct comedi_subdevice* subdevices; void* iobase; int board_name; struct apci1516_boardinfo const* board_ptr; } ;
struct apci1516_private {void* wdog_iobase; } ;
struct apci1516_boardinfo {scalar_t__ has_wdog; scalar_t__ do_nchan; scalar_t__ di_nchan; int name; } ;


 unsigned long FUNC_0 (struct apci1516_boardinfo*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct comedi_subdevice*,void*) ;
 struct apci1516_boardinfo* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct comedi_device*) ;
 struct apci1516_private* FUNC_3 (struct comedi_device*,int) ;
 int FUNC_4 (struct comedi_device*,int) ;
 int FUNC_5 (struct comedi_device*) ;
 struct pci_dev* FUNC_6 (struct comedi_device*) ;
 void* FUNC_7 (struct pci_dev*,int) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_11,
    unsigned long VAR_12)
{
 struct pci_dev *VAR_13 = FUNC_6(VAR_11);
 const struct apci1516_boardinfo *VAR_14 = ((void*)0);
 struct apci1516_private *VAR_15;
 struct comedi_subdevice *VAR_16;
 int VAR_17;

 if (VAR_12 < FUNC_0(VAR_7))
  VAR_14 = &VAR_7[VAR_12];
 if (!VAR_14)
  return -VAR_3;
 VAR_11->board_ptr = VAR_14;
 VAR_11->board_name = VAR_14->name;

 VAR_15 = FUNC_3(VAR_11, sizeof(*VAR_15));
 if (!VAR_15)
  return -VAR_4;

 VAR_17 = FUNC_5(VAR_11);
 if (VAR_17)
  return VAR_17;

 VAR_11->iobase = FUNC_7(VAR_13, 1);
 VAR_15->wdog_iobase = FUNC_7(VAR_13, 2);

 VAR_17 = FUNC_4(VAR_11, 3);
 if (VAR_17)
  return VAR_17;


 VAR_16 = &VAR_11->subdevices[0];
 if (VAR_14->di_nchan) {
  VAR_16->type = VAR_0;
  VAR_16->subdev_flags = VAR_5;
  VAR_16->n_chan = VAR_14->di_nchan;
  VAR_16->maxdata = 1;
  VAR_16->range_table = &VAR_10;
  VAR_16->insn_bits = VAR_8;
 } else {
  VAR_16->type = VAR_2;
 }


 VAR_16 = &VAR_11->subdevices[1];
 if (VAR_14->do_nchan) {
  VAR_16->type = VAR_1;
  VAR_16->subdev_flags = VAR_6;
  VAR_16->n_chan = VAR_14->do_nchan;
  VAR_16->maxdata = 1;
  VAR_16->range_table = &VAR_10;
  VAR_16->insn_bits = VAR_9;
 } else {
  VAR_16->type = VAR_2;
 }


 VAR_16 = &VAR_11->subdevices[2];
 if (VAR_14->has_wdog) {
  VAR_17 = FUNC_1(VAR_16, VAR_15->wdog_iobase);
  if (VAR_17)
   return VAR_17;
 } else {
  VAR_16->type = VAR_2;
 }

 FUNC_2(VAR_11);
 return 0;
}

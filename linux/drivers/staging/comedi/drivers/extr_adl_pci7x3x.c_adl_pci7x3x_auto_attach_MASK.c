
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct comedi_subdevice {int n_chan; int maxdata; void* private; int * range_table; void* insn_bits; void* subdev_flags; void* type; } ;
struct comedi_device {struct comedi_subdevice* subdevices; int iobase; int board_name; struct adl_pci7x3x_boardinfo const* board_ptr; } ;
struct adl_pci7x3x_boardinfo {int di_nchan; int do_nchan; int nsubdevs; int name; } ;


 unsigned long FUNC_0 (struct adl_pci7x3x_boardinfo*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 struct adl_pci7x3x_boardinfo* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*) ;
 struct pci_dev* FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct pci_dev*,int) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_11,
       unsigned long VAR_12)
{
 struct pci_dev *VAR_13 = FUNC_3(VAR_11);
 const struct adl_pci7x3x_boardinfo *VAR_14 = ((void*)0);
 struct comedi_subdevice *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 if (VAR_12 < FUNC_0(VAR_7))
  VAR_14 = &VAR_7[VAR_12];
 if (!VAR_14)
  return -VAR_2;
 VAR_11->board_ptr = VAR_14;
 VAR_11->board_name = VAR_14->name;

 VAR_18 = FUNC_2(VAR_11);
 if (VAR_18)
  return VAR_18;
 VAR_11->iobase = FUNC_5(VAR_13, 2);

 VAR_18 = FUNC_1(VAR_11, VAR_14->nsubdevs);
 if (VAR_18)
  return VAR_18;

 VAR_16 = 0;

 if (VAR_14->di_nchan) {
  VAR_17 = FUNC_4(VAR_14->di_nchan, 32);

  VAR_15 = &VAR_11->subdevices[VAR_16];

  VAR_15->type = VAR_0;
  VAR_15->subdev_flags = VAR_5;
  VAR_15->n_chan = VAR_17;
  VAR_15->maxdata = 1;
  VAR_15->insn_bits = VAR_8;
  VAR_15->range_table = &VAR_10;

  VAR_15->private = (void *)VAR_4;

  VAR_16++;

  VAR_17 = VAR_14->di_nchan - VAR_17;
  if (VAR_17) {
   VAR_15 = &VAR_11->subdevices[VAR_16];

   VAR_15->type = VAR_0;
   VAR_15->subdev_flags = VAR_5;
   VAR_15->n_chan = VAR_17;
   VAR_15->maxdata = 1;
   VAR_15->insn_bits = VAR_8;
   VAR_15->range_table = &VAR_10;

   VAR_15->private = (void *)VAR_3;

   VAR_16++;
  }
 }

 if (VAR_14->do_nchan) {
  VAR_17 = FUNC_4(VAR_14->do_nchan, 32);

  VAR_15 = &VAR_11->subdevices[VAR_16];

  VAR_15->type = VAR_1;
  VAR_15->subdev_flags = VAR_6;
  VAR_15->n_chan = VAR_17;
  VAR_15->maxdata = 1;
  VAR_15->insn_bits = VAR_9;
  VAR_15->range_table = &VAR_10;

  VAR_15->private = (void *)VAR_4;

  VAR_16++;

  VAR_17 = VAR_14->do_nchan - VAR_17;
  if (VAR_17) {
   VAR_15 = &VAR_11->subdevices[VAR_16];

   VAR_15->type = VAR_1;
   VAR_15->subdev_flags = VAR_6;
   VAR_15->n_chan = VAR_17;
   VAR_15->maxdata = 1;
   VAR_15->insn_bits = VAR_9;
   VAR_15->range_table = &VAR_10;

   VAR_15->private = (void *)VAR_3;

   VAR_16++;
  }
 }

 return 0;
}

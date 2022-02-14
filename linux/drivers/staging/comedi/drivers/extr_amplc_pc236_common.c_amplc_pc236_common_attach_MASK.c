
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int len_chanlist; int cancel; int do_cmd; int do_cmdtest; int insn_bits; int * range_table; int type; } ;
struct comedi_device {unsigned long iobase; unsigned int irq; int board_name; struct comedi_subdevice* read_subdev; struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct comedi_device*,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (unsigned int,int ,unsigned long,int ,struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,int *,int) ;

int FUNC_4(struct comedi_device *VAR_10, unsigned long VAR_11,
         unsigned int VAR_12, unsigned long VAR_13)
{
 struct comedi_subdevice *VAR_14;
 int VAR_15;

 VAR_10->iobase = VAR_11;

 VAR_15 = FUNC_0(VAR_10, 2);
 if (VAR_15)
  return VAR_15;

 VAR_14 = &VAR_10->subdevices[0];

 VAR_15 = FUNC_3(VAR_10, VAR_14, ((void*)0), 0x00);
 if (VAR_15)
  return VAR_15;

 VAR_14 = &VAR_10->subdevices[1];
 VAR_10->read_subdev = VAR_14;
 VAR_14->type = VAR_1;
 FUNC_1(VAR_10, 0);
 if (VAR_12) {
  if (FUNC_2(VAR_12, VAR_4, VAR_13,
    VAR_10->board_name, VAR_10) >= 0) {
   VAR_10->irq = VAR_12;
   VAR_14->type = VAR_0;
   VAR_14->subdev_flags = VAR_3 | VAR_2;
   VAR_14->n_chan = 1;
   VAR_14->maxdata = 1;
   VAR_14->range_table = &VAR_9;
   VAR_14->insn_bits = VAR_8;
   VAR_14->len_chanlist = 1;
   VAR_14->do_cmdtest = VAR_7;
   VAR_14->do_cmd = VAR_6;
   VAR_14->cancel = VAR_5;
  }
 }

 return 0;
}

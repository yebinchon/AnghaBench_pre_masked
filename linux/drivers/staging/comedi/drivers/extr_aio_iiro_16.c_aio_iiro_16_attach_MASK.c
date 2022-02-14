
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int state; int len_chanlist; int cancel; int do_cmd; int do_cmdtest; int insn_bits; int * range_table; int type; } ;
struct comedi_device {int irq; struct comedi_subdevice* read_subdev; struct comedi_subdevice* subdevices; scalar_t__ iobase; int board_name; } ;
struct comedi_devconfig {int* options; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int,int) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_14 ;
 int FUNC_4 (int,int ,int ,int ,struct comedi_device*) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_15,
         struct comedi_devconfig *VAR_16)
{
 struct comedi_subdevice *VAR_17;
 int VAR_18;

 VAR_18 = FUNC_2(VAR_15, VAR_16->options[0], 0x8);
 if (VAR_18)
  return VAR_18;

 FUNC_0(VAR_15, 0);





 if ((1 << VAR_16->options[1]) & 0xdcfc) {
  VAR_18 = FUNC_4(VAR_16->options[1], VAR_8, 0,
      VAR_15->board_name, VAR_15);
  if (VAR_18 == 0)
   VAR_15->irq = VAR_16->options[1];
 }

 VAR_18 = FUNC_1(VAR_15, 2);
 if (VAR_18)
  return VAR_18;


 VAR_17 = &VAR_15->subdevices[0];
 VAR_17->type = VAR_3;
 VAR_17->subdev_flags = VAR_7;
 VAR_17->n_chan = 16;
 VAR_17->maxdata = 1;
 VAR_17->range_table = &VAR_14;
 VAR_17->insn_bits = VAR_13;


 VAR_17->state = FUNC_3(VAR_15->iobase + VAR_0) |
     (FUNC_3(VAR_15->iobase + VAR_1) << 8);


 VAR_17 = &VAR_15->subdevices[1];
 VAR_17->type = VAR_2;
 VAR_17->subdev_flags = VAR_6;
 VAR_17->n_chan = 16;
 VAR_17->maxdata = 1;
 VAR_17->range_table = &VAR_14;
 VAR_17->insn_bits = VAR_12;
 if (VAR_15->irq) {
  VAR_15->read_subdev = VAR_17;
  VAR_17->subdev_flags |= VAR_4 | VAR_5;
  VAR_17->len_chanlist = 1;
  VAR_17->do_cmdtest = VAR_11;
  VAR_17->do_cmd = VAR_10;
  VAR_17->cancel = VAR_9;
 }

 return 0;
}

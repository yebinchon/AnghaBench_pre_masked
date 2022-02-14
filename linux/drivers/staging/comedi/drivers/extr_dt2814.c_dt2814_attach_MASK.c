
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt2814_private {int dummy; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int len_chanlist; int do_cmdtest; int do_cmd; int * range_table; int insn_read; int type; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; scalar_t__ irq; struct comedi_subdevice* subdevices; int board_name; scalar_t__ iobase; int class_dev; } ;
struct comedi_devconfig {scalar_t__* options; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct dt2814_private* FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,scalar_t__,int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int VAR_13 ;
 int FUNC_6 (scalar_t__,int ,int ,int ,struct comedi_device*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_14, struct comedi_devconfig *VAR_15)
{
 struct dt2814_private *VAR_16;
 struct comedi_subdevice *VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_18 = FUNC_2(VAR_14, VAR_15->options[0], 0x2);
 if (VAR_18)
  return VAR_18;

 FUNC_5(0, VAR_14->iobase + VAR_1);
 FUNC_7(100, 200);
 if (FUNC_4(VAR_14->iobase + VAR_1) & VAR_3) {
  FUNC_3(VAR_14->class_dev, "reset error (fatal)\n");
  return -VAR_4;
 }
 VAR_19 = FUNC_4(VAR_14->iobase + VAR_2);
 VAR_19 = FUNC_4(VAR_14->iobase + VAR_2);

 if (VAR_15->options[1]) {
  VAR_18 = FUNC_6(VAR_15->options[1], VAR_12, 0,
      VAR_14->board_name, VAR_14);
  if (VAR_18 == 0)
   VAR_14->irq = VAR_15->options[1];
 }

 VAR_18 = FUNC_1(VAR_14, 1);
 if (VAR_18)
  return VAR_18;

 VAR_16 = FUNC_0(VAR_14, sizeof(*VAR_16));
 if (!VAR_16)
  return -VAR_5;

 VAR_17 = &VAR_14->subdevices[0];
 VAR_17->type = VAR_0;
 VAR_17->subdev_flags = VAR_8 | VAR_7;
 VAR_17->n_chan = 16;
 VAR_17->insn_read = VAR_11;
 VAR_17->maxdata = 0xfff;
 VAR_17->range_table = &VAR_13;
 if (VAR_14->irq) {
  VAR_14->read_subdev = VAR_17;
  VAR_17->subdev_flags |= VAR_6;
  VAR_17->len_chanlist = 1;
  VAR_17->do_cmd = VAR_9;
  VAR_17->do_cmdtest = VAR_10;
 }

 return 0;
}

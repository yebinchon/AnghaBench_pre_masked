
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int len_chanlist; int insn_write; int * range_table; int type; int cancel; int do_cmdtest; int do_cmd; int insn_read; } ;
struct comedi_device {struct comedi_subdevice* subdevices; struct comedi_subdevice* read_subdev; scalar_t__ irq; int board_name; int class_dev; } ;
struct comedi_devconfig {scalar_t__* options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,scalar_t__,int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (scalar_t__,int ,int ,int ,struct comedi_device*) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_17,
     struct comedi_devconfig *VAR_18)
{
 struct comedi_subdevice *VAR_19;
 int VAR_20;

 VAR_20 = FUNC_2(VAR_17, VAR_18->options[0], 0x10);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_4(VAR_17);
 if (VAR_20) {
  FUNC_3(VAR_17->class_dev, "board detection failed\n");
  return VAR_20;
 }

 if (VAR_18->options[1]) {
  VAR_20 = FUNC_5(VAR_18->options[1], VAR_16, 0,
      VAR_17->board_name, VAR_17);
  if (VAR_20 == 0)
   VAR_17->irq = VAR_18->options[1];
 }

 VAR_20 = FUNC_1(VAR_17, 3);
 if (VAR_20)
  return VAR_20;


 VAR_19 = &VAR_17->subdevices[0];
 VAR_19->type = VAR_0;
 VAR_19->subdev_flags = VAR_6 | VAR_5 | VAR_4;
 VAR_19->n_chan = 32;
 VAR_19->maxdata = 0xffff;
 VAR_19->range_table = &VAR_13;
 VAR_19->insn_read = VAR_12;
 if (VAR_17->irq) {
  VAR_17->read_subdev = VAR_19;
  VAR_19->subdev_flags |= VAR_3;
  VAR_19->len_chanlist = VAR_19->n_chan;
  VAR_19->do_cmd = VAR_10;
  VAR_19->do_cmdtest = VAR_11;
  VAR_19->cancel = VAR_9;
 }


 VAR_19 = &VAR_17->subdevices[1];
 VAR_19->type = VAR_1;
 VAR_19->subdev_flags = VAR_7;
 VAR_19->n_chan = 4;
 VAR_19->maxdata = 0x0fff;
 VAR_19->range_table = &VAR_15;
 VAR_19->insn_write = VAR_14;

 VAR_20 = FUNC_0(VAR_19);
 if (VAR_20)
  return VAR_20;


 VAR_19 = &VAR_17->subdevices[2];
 return FUNC_6(VAR_17, VAR_19, VAR_8, VAR_2);
}

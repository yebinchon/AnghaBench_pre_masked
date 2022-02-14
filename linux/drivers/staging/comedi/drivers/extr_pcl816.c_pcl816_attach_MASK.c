
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl816_private {int dummy; } ;
struct pcl816_board {int ai_maxdata; int ai_chanlist; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int insn_bits; int * range_table; int type; int cancel; int poll; int do_cmd; int do_cmdtest; int len_chanlist; int insn_read; } ;
struct comedi_device {struct comedi_subdevice* subdevices; struct comedi_subdevice* read_subdev; scalar_t__ irq; int pacer; scalar_t__ iobase; struct pcl816_board* board_ptr; } ;
struct comedi_devconfig {int * options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 struct pcl816_private* FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (struct comedi_device*,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (struct comedi_device*,struct comedi_devconfig*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (struct comedi_device*) ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_21, struct comedi_devconfig *VAR_22)
{
 const struct pcl816_board *VAR_23 = VAR_21->board_ptr;
 struct pcl816_private *VAR_24;
 struct comedi_subdevice *VAR_25;
 int VAR_26;

 VAR_24 = FUNC_1(VAR_21, sizeof(*VAR_24));
 if (!VAR_24)
  return -VAR_4;

 VAR_26 = FUNC_3(VAR_21, VAR_22->options[0], 0x10);
 if (VAR_26)
  return VAR_26;


 FUNC_4(VAR_21, VAR_22);

 VAR_21->pacer = FUNC_0(VAR_21->iobase + VAR_7,
          VAR_6, VAR_5, 0);
 if (!VAR_21->pacer)
  return -VAR_4;

 VAR_26 = FUNC_2(VAR_21, 4);
 if (VAR_26)
  return VAR_26;

 VAR_25 = &VAR_21->subdevices[0];
 VAR_25->type = VAR_0;
 VAR_25->subdev_flags = VAR_8 | VAR_9;
 VAR_25->n_chan = 16;
 VAR_25->maxdata = VAR_23->ai_maxdata;
 VAR_25->range_table = &VAR_20;
 VAR_25->insn_read = VAR_15;
 if (VAR_21->irq) {
  VAR_21->read_subdev = VAR_25;
  VAR_25->subdev_flags |= VAR_8;
  VAR_25->len_chanlist = VAR_23->ai_chanlist;
  VAR_25->do_cmdtest = VAR_14;
  VAR_25->do_cmd = VAR_13;
  VAR_25->poll = VAR_16;
  VAR_25->cancel = VAR_12;
 }


 VAR_25 = &VAR_21->subdevices[1];
 VAR_25->type = VAR_3;


 VAR_25 = &VAR_21->subdevices[2];
 VAR_25->type = VAR_1;
 VAR_25->subdev_flags = VAR_10;
 VAR_25->n_chan = 16;
 VAR_25->maxdata = 1;
 VAR_25->range_table = &VAR_19;
 VAR_25->insn_bits = VAR_17;


 VAR_25 = &VAR_21->subdevices[3];
 VAR_25->type = VAR_2;
 VAR_25->subdev_flags = VAR_11;
 VAR_25->n_chan = 16;
 VAR_25->maxdata = 1;
 VAR_25->range_table = &VAR_19;
 VAR_25->insn_bits = VAR_18;

 FUNC_5(VAR_21);

 return 0;
}

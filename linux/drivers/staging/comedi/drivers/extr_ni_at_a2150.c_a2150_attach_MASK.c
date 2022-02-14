
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int len_chanlist; int cancel; int do_cmdtest; int do_cmd; int insn_read; int * range_table; int type; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; struct comedi_subdevice* read_subdev; scalar_t__ irq; struct comedi_subdevice* subdevices; int pacer; int board_name; struct a2150_board const* board_ptr; } ;
struct comedi_devconfig {int * options; } ;
struct a2150_private {int irq_dma_bits; int config_bits; } ;
struct a2150_board {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct comedi_device*,struct comedi_devconfig*) ;
 int VAR_21 ;
 struct a2150_board* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (scalar_t__,int ,int ,int ) ;
 struct a2150_private* FUNC_3 (struct comedi_device*,int) ;
 int FUNC_4 (struct comedi_device*,int) ;
 int FUNC_5 (struct comedi_device*,int ,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;
 int VAR_22 ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct comedi_device *VAR_23, struct comedi_devconfig *VAR_24)
{
 const struct a2150_board *VAR_25;
 struct a2150_private *VAR_26;
 struct comedi_subdevice *VAR_27;
 static const int VAR_28 = 2000;
 int VAR_29;
 int VAR_30;

 VAR_26 = FUNC_3(VAR_23, sizeof(*VAR_26));
 if (!VAR_26)
  return -VAR_8;

 VAR_30 = FUNC_5(VAR_23, VAR_24->options[0], 0x1c);
 if (VAR_30)
  return VAR_30;

 VAR_25 = FUNC_1(VAR_23);
 if (!VAR_25)
  return -VAR_7;
 VAR_23->board_ptr = VAR_25;
 VAR_23->board_name = VAR_25->name;


 FUNC_0(VAR_23, VAR_24);

 VAR_23->pacer = FUNC_2(VAR_23->iobase + VAR_10,
          0, VAR_11, 0);
 if (!VAR_23->pacer)
  return -VAR_8;

 VAR_30 = FUNC_4(VAR_23, 1);
 if (VAR_30)
  return VAR_30;


 VAR_27 = &VAR_23->subdevices[0];
 VAR_27->type = VAR_1;
 VAR_27->subdev_flags = VAR_16 | VAR_14 | VAR_15;
 VAR_27->n_chan = 4;
 VAR_27->maxdata = 0xffff;
 VAR_27->range_table = &VAR_22;
 VAR_27->insn_read = VAR_20;
 if (VAR_23->irq) {
  VAR_23->read_subdev = VAR_27;
  VAR_27->subdev_flags |= VAR_13;
  VAR_27->len_chanlist = VAR_27->n_chan;
  VAR_27->do_cmd = VAR_18;
  VAR_27->do_cmdtest = VAR_19;
  VAR_27->cancel = VAR_21;
 }


 FUNC_8(VAR_26->irq_dma_bits, VAR_23->iobase + VAR_12);


 FUNC_9(VAR_4 | VAR_0, VAR_23->iobase + VAR_2);
 FUNC_9(VAR_4, VAR_23->iobase + VAR_2);

 VAR_26->config_bits = 0;
 FUNC_8(VAR_26->config_bits, VAR_23->iobase + VAR_2);

 for (VAR_29 = 0; VAR_29 < VAR_28; VAR_29++) {
  if ((VAR_3 & FUNC_7(VAR_23->iobase + VAR_17)) == 0)
   break;
  FUNC_10(1000, 3000);
 }
 if (VAR_29 == VAR_28) {
  FUNC_6(VAR_23->class_dev,
   "timed out waiting for offset calibration to complete\n");
  return -VAR_9;
 }
 VAR_26->config_bits |= VAR_5 | VAR_6;
 FUNC_8(VAR_26->config_bits, VAR_23->iobase + VAR_2);

 return 0;
}

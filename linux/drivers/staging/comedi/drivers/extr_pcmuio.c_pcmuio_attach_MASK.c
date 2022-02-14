
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmuio_private {scalar_t__ irq2; struct pcmuio_asic* asics; } ;
struct pcmuio_board {int num_asics; } ;
struct pcmuio_asic {int spinlock; int pagelock; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int len_chanlist; int do_cmdtest; int do_cmd; int cancel; int insn_config; int insn_bits; int * range_table; int type; } ;
struct comedi_device {scalar_t__ irq; int n_subdevices; struct comedi_subdevice* read_subdev; struct comedi_subdevice* subdevices; int board_name; struct pcmuio_board* board_ptr; } ;
struct comedi_devconfig {scalar_t__* options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct pcmuio_private* FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,scalar_t__,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct comedi_device*) ;
 int VAR_15 ;
 int FUNC_4 (scalar_t__,int ,int ,int ,struct comedi_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_16, struct comedi_devconfig *VAR_17)
{
 const struct pcmuio_board *VAR_18 = VAR_16->board_ptr;
 struct comedi_subdevice *VAR_19;
 struct pcmuio_private *VAR_20;
 int VAR_21;
 int VAR_22;

 VAR_21 = FUNC_2(VAR_16, VAR_17->options[0],
        VAR_18->num_asics * VAR_2);
 if (VAR_21)
  return VAR_21;

 VAR_20 = FUNC_0(VAR_16, sizeof(*VAR_20));
 if (!VAR_20)
  return -VAR_1;

 for (VAR_22 = 0; VAR_22 < VAR_3; ++VAR_22) {
  struct pcmuio_asic *VAR_23 = &VAR_20->asics[VAR_22];

  FUNC_5(&VAR_23->pagelock);
  FUNC_5(&VAR_23->spinlock);
 }

 FUNC_3(VAR_16);

 if (VAR_17->options[1]) {

  VAR_21 = FUNC_4(VAR_17->options[1], VAR_14, 0,
      VAR_16->board_name, VAR_16);
  if (VAR_21 == 0)
   VAR_16->irq = VAR_17->options[1];
 }

 if (VAR_18->num_asics == 2) {
  if (VAR_17->options[2] == VAR_16->irq) {

   VAR_20->irq2 = VAR_17->options[2];
  } else if (VAR_17->options[2]) {

   VAR_21 = FUNC_4(VAR_17->options[2], VAR_14, 0,
       VAR_16->board_name, VAR_16);
   if (VAR_21 == 0)
    VAR_20->irq2 = VAR_17->options[2];
  }
 }

 VAR_21 = FUNC_1(VAR_16, VAR_18->num_asics * 2);
 if (VAR_21)
  return VAR_21;

 for (VAR_22 = 0; VAR_22 < VAR_16->n_subdevices; ++VAR_22) {
  VAR_19 = &VAR_16->subdevices[VAR_22];
  VAR_19->type = VAR_0;
  VAR_19->subdev_flags = VAR_7 | VAR_8;
  VAR_19->n_chan = 24;
  VAR_19->maxdata = 1;
  VAR_19->range_table = &VAR_15;
  VAR_19->insn_bits = VAR_12;
  VAR_19->insn_config = VAR_13;


  if ((VAR_22 == 0 && VAR_16->irq) || (VAR_22 == 2 && VAR_20->irq2)) {

   VAR_16->read_subdev = VAR_19;
   VAR_19->subdev_flags |= VAR_4 | VAR_5 |
        VAR_6;
   VAR_19->len_chanlist = VAR_19->n_chan;
   VAR_19->cancel = VAR_9;
   VAR_19->do_cmd = VAR_10;
   VAR_19->do_cmdtest = VAR_11;
  }
 }

 return 0;
}

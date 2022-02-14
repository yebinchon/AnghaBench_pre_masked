
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {unsigned int irq; } ;
struct nidio_board {scalar_t__ uses_firmware; int name; } ;
struct nidio96_private {int di_mite_ring; int mite; int mite_channel_lock; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int len_chanlist; int * poll; int async_dma_dir; int * buf_change; int * cancel; int * do_cmdtest; int * do_cmd; int * insn_bits; int * insn_config; int * range_table; int type; } ;
struct comedi_device {unsigned int irq; int board_name; struct comedi_subdevice* read_subdev; struct comedi_subdevice* subdevices; scalar_t__ mmio; int class_dev; struct nidio_board const* board_ptr; } ;


 unsigned long FUNC_0 (struct nidio_board*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct nidio96_private* FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (struct comedi_device*) ;
 struct pci_dev* FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct comedi_device*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct nidio_board* VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (struct comedi_device*) ;
 int FUNC_9 (struct comedi_device*) ;
 int VAR_20 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (unsigned int,int ,int ,int ,struct comedi_device*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct comedi_device *VAR_21,
        unsigned long VAR_22)
{
 struct pci_dev *VAR_23 = FUNC_4(VAR_21);
 const struct nidio_board *VAR_24 = ((void*)0);
 struct nidio96_private *VAR_25;
 struct comedi_subdevice *VAR_26;
 int VAR_27;
 unsigned int VAR_28;

 if (VAR_22 < FUNC_0(VAR_18))
  VAR_24 = &VAR_18[VAR_22];
 if (!VAR_24)
  return -VAR_3;
 VAR_21->board_ptr = VAR_24;
 VAR_21->board_name = VAR_24->name;

 VAR_27 = FUNC_3(VAR_21);
 if (VAR_27)
  return VAR_27;

 VAR_25 = FUNC_1(VAR_21, sizeof(*VAR_25));
 if (!VAR_25)
  return -VAR_4;

 FUNC_12(&VAR_25->mite_channel_lock);

 VAR_25->mite = FUNC_7(VAR_21, 0);
 if (!VAR_25->mite)
  return -VAR_4;

 VAR_25->di_mite_ring = FUNC_6(VAR_25->mite);
 if (!VAR_25->di_mite_ring)
  return -VAR_4;

 if (VAR_24->uses_firmware) {
  VAR_27 = FUNC_9(VAR_21);
  if (VAR_27 < 0)
   return VAR_27;
 }

 FUNC_8(VAR_21);

 VAR_27 = FUNC_2(VAR_21, 1);
 if (VAR_27)
  return VAR_27;

 FUNC_5(VAR_21->class_dev, "%s rev=%d\n", VAR_21->board_name,
   FUNC_10(VAR_21->mmio + VAR_0));

 VAR_26 = &VAR_21->subdevices[0];

 VAR_21->read_subdev = VAR_26;
 VAR_26->type = VAR_1;
 VAR_26->subdev_flags =
  VAR_9 | VAR_10 | VAR_7 | VAR_8 |
  VAR_6;
 VAR_26->n_chan = 32;
 VAR_26->range_table = &VAR_20;
 VAR_26->maxdata = 1;
 VAR_26->insn_config = &VAR_16;
 VAR_26->insn_bits = &VAR_15;
 VAR_26->do_cmd = &VAR_13;
 VAR_26->do_cmdtest = &VAR_14;
 VAR_26->cancel = &VAR_11;
 VAR_26->len_chanlist = 32;
 VAR_26->buf_change = &VAR_12;
 VAR_26->async_dma_dir = VAR_2;
 VAR_26->poll = &VAR_17;

 VAR_28 = VAR_23->irq;
 if (VAR_28) {
  VAR_27 = FUNC_11(VAR_28, VAR_19, VAR_5,
      VAR_21->board_name, VAR_21);
  if (VAR_27 == 0)
   VAR_21->irq = VAR_28;
 }

 return 0;
}

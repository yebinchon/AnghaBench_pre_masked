
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; scalar_t__ io_bits; int insn_bits; int insn_config; int * range_table; int type; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; int board_name; struct apci16xx_boardinfo const* board_ptr; } ;
struct apci16xx_boardinfo {int n_chan; int name; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned long FUNC_1 (struct apci16xx_boardinfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct apci16xx_boardinfo* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct comedi_device*,unsigned int) ;
 int FUNC_3 (struct comedi_device*) ;
 struct pci_dev* FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (struct pci_dev*,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_8,
    unsigned long VAR_9)
{
 struct pci_dev *VAR_10 = FUNC_4(VAR_8);
 const struct apci16xx_boardinfo *VAR_11 = ((void*)0);
 struct comedi_subdevice *VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_9 < FUNC_1(VAR_4))
  VAR_11 = &VAR_4[VAR_9];
 if (!VAR_11)
  return -VAR_1;
 VAR_8->board_ptr = VAR_11;
 VAR_8->board_name = VAR_11->name;

 VAR_16 = FUNC_3(VAR_8);
 if (VAR_16)
  return VAR_16;

 VAR_8->iobase = FUNC_6(VAR_10, 0);






 VAR_13 = VAR_11->n_chan / 32;
 if ((VAR_13 * 32) < VAR_11->n_chan) {
  VAR_14 = VAR_11->n_chan - (VAR_13 * 32);
  VAR_13++;
 } else {
  VAR_14 = 0;
 }

 VAR_16 = FUNC_2(VAR_8, VAR_13);
 if (VAR_16)
  return VAR_16;


 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
  VAR_12 = &VAR_8->subdevices[VAR_15];
  VAR_12->type = VAR_0;
  VAR_12->subdev_flags = VAR_3 | VAR_2;
  VAR_12->n_chan = ((VAR_15 * 32) < VAR_11->n_chan) ? 32 : VAR_14;
  VAR_12->maxdata = 1;
  VAR_12->range_table = &VAR_7;
  VAR_12->insn_config = VAR_6;
  VAR_12->insn_bits = VAR_5;


  VAR_12->io_bits = 0;
  FUNC_5(VAR_12->io_bits, VAR_8->iobase + FUNC_0(VAR_15));
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct comedi_subdevice {int n_chan; int maxdata; int insn_write; int * range_table; int subdev_flags; int type; } ;
struct comedi_device {struct comedi_subdevice* subdevices; void* iobase; int board_name; struct cb_pcidda_board const* board_ptr; } ;
struct cb_pcidda_private {int * ao_range; int * eeprom_data; void* daqio; } ;
struct cb_pcidda_board {int ao_chans; int ao_bits; int name; } ;


 unsigned long FUNC_0 (struct cb_pcidda_board*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct cb_pcidda_board* VAR_7 ;
 int FUNC_1 (struct comedi_device*,int,int ) ;
 int VAR_8 ;
 int FUNC_2 (struct comedi_device*,int) ;
 struct cb_pcidda_private* FUNC_3 (struct comedi_device*,int) ;
 int FUNC_4 (struct comedi_device*,int) ;
 int FUNC_5 (struct comedi_device*) ;
 struct pci_dev* FUNC_6 (struct comedi_device*) ;
 void* FUNC_7 (struct pci_dev*,int) ;
 int FUNC_8 (struct comedi_device*,struct comedi_subdevice*,int *,int) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_9,
     unsigned long VAR_10)
{
 struct pci_dev *VAR_11 = FUNC_6(VAR_9);
 const struct cb_pcidda_board *VAR_12 = ((void*)0);
 struct cb_pcidda_private *VAR_13;
 struct comedi_subdevice *VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_10 < FUNC_0(VAR_7))
  VAR_12 = &VAR_7[VAR_10];
 if (!VAR_12)
  return -VAR_2;
 VAR_9->board_ptr = VAR_12;
 VAR_9->board_name = VAR_12->name;

 VAR_13 = FUNC_3(VAR_9, sizeof(*VAR_13));
 if (!VAR_13)
  return -VAR_3;

 VAR_16 = FUNC_5(VAR_9);
 if (VAR_16)
  return VAR_16;
 VAR_9->iobase = FUNC_7(VAR_11, 2);
 VAR_13->daqio = FUNC_7(VAR_11, 3);

 VAR_16 = FUNC_4(VAR_9, 3);
 if (VAR_16)
  return VAR_16;

 VAR_14 = &VAR_9->subdevices[0];

 VAR_14->type = VAR_0;
 VAR_14->subdev_flags = VAR_5;
 VAR_14->n_chan = VAR_12->ao_chans;
 VAR_14->maxdata = (1 << VAR_12->ao_bits) - 1;
 VAR_14->range_table = &VAR_8;
 VAR_14->insn_write = VAR_6;


 for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
  VAR_14 = &VAR_9->subdevices[1 + VAR_15];
  VAR_16 = FUNC_8(VAR_9, VAR_14, ((void*)0), VAR_15 * VAR_4);
  if (VAR_16)
   return VAR_16;
 }


 for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++)
  VAR_13->eeprom_data[VAR_15] = FUNC_2(VAR_9, VAR_15);


 for (VAR_15 = 0; VAR_15 < VAR_12->ao_chans; VAR_15++)
  FUNC_1(VAR_9, VAR_15, VAR_13->ao_range[VAR_15]);

 return 0;
}

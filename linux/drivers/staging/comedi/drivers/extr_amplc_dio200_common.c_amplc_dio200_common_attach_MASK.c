
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_board {int* sdtype; int * sdinfo; int n_subdevs; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; void* type; int insn_config; int insn_read; } ;
struct comedi_device {unsigned int n_subdevices; unsigned int irq; int class_dev; int board_name; struct comedi_subdevice* read_subdev; struct comedi_subdevice* subdevices; struct dio200_board* board_ptr; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int VAR_5 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,int ) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,int ) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (unsigned int,int ,unsigned long,int ,struct comedi_device*) ;





int FUNC_6(struct comedi_device *VAR_8, unsigned int VAR_9,
          unsigned long VAR_10)
{
 const struct dio200_board *VAR_11 = VAR_8->board_ptr;
 struct comedi_subdevice *VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 VAR_14 = FUNC_0(VAR_8, VAR_11->n_subdevs);
 if (VAR_14)
  return VAR_14;

 for (VAR_13 = 0; VAR_13 < VAR_8->n_subdevices; VAR_13++) {
  VAR_12 = &VAR_8->subdevices[VAR_13];
  switch (VAR_11->sdtype[VAR_13]) {
  case 131:

   VAR_14 = FUNC_2(VAR_8, VAR_12,
            VAR_11->sdinfo[VAR_13]);
   if (VAR_14 < 0)
    return VAR_14;
   break;
  case 130:

   VAR_14 = FUNC_3(VAR_8, VAR_12,
            VAR_11->sdinfo[VAR_13]);
   if (VAR_14 < 0)
    return VAR_14;
   break;
  case 129:

   if (VAR_9 && !VAR_8->read_subdev) {
    VAR_14 = FUNC_4(VAR_8, VAR_12,
             VAR_2,
             VAR_11->sdinfo[VAR_13]);
    if (VAR_14 < 0)
     return VAR_14;
    VAR_8->read_subdev = VAR_12;
   } else {
    VAR_12->type = VAR_1;
   }
   break;
  case 128:
   VAR_12->type = VAR_0;
   VAR_12->subdev_flags = VAR_4 | VAR_3;
   VAR_12->n_chan = 1;
   VAR_12->maxdata = 0xffffffff;
   VAR_12->insn_read = VAR_7;
   VAR_12->insn_config = VAR_6;
   break;
  default:
   VAR_12->type = VAR_1;
   break;
  }
 }

 if (VAR_9 && VAR_8->read_subdev) {
  if (FUNC_5(VAR_9, VAR_5, VAR_10,
    VAR_8->board_name, VAR_8) >= 0) {
   VAR_8->irq = VAR_9;
  } else {
   FUNC_1(VAR_8->class_dev,
     "warning! irq %u unavailable!\n", VAR_9);
  }
 }

 return 0;
}

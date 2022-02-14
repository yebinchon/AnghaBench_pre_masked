
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci1710_private {unsigned int* act_chanlist; } ;
struct comedi_subdevice {unsigned int maxdata; } ;
struct comedi_device {int class_dev; scalar_t__ iobase; struct pci1710_private* private; struct boardtype* board_ptr; } ;
struct boardtype {int is_pci1713; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
      struct comedi_subdevice *VAR_3,
      unsigned int VAR_4,
      unsigned int *VAR_5)
{
 const struct boardtype *VAR_6 = VAR_2->board_ptr;
 struct pci1710_private *VAR_7 = VAR_2->private;
 unsigned int VAR_8;
 unsigned int VAR_9;

 VAR_8 = FUNC_1(VAR_2->iobase + VAR_1);
 if (!VAR_6->is_pci1713) {





  VAR_9 = VAR_8 >> 12;
  if (VAR_9 != VAR_7->act_chanlist[VAR_4]) {
   FUNC_0(VAR_2->class_dev,
    "A/D data dropout: received from channel %d, expected %d\n",
    VAR_9, VAR_7->act_chanlist[VAR_4]);
   return -VAR_0;
  }
 }
 *VAR_5 = VAR_8 & VAR_3->maxdata;
 return 0;
}

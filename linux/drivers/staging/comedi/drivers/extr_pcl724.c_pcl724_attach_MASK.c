
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl724_board {unsigned int io_range; int numofports; scalar_t__ is_pet48; scalar_t__ can_have96; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int n_subdevices; int iobase; struct comedi_subdevice* subdevices; struct pcl724_board* board_ptr; } ;
struct comedi_devconfig {int* options; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int,unsigned int) ;
 int * VAR_1 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
    struct comedi_devconfig *VAR_3)
{
 const struct pcl724_board *VAR_4 = VAR_2->board_ptr;
 struct comedi_subdevice *VAR_5;
 unsigned long VAR_6;
 unsigned int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_7 = VAR_4->io_range;
 VAR_8 = VAR_4->numofports;


 if (VAR_4->can_have96 &&
     (VAR_3->options[2] == 1 || VAR_3->options[2] == 96)) {
  VAR_7 = 0x10;
  VAR_8 = 4;
 }

 VAR_9 = FUNC_1(VAR_2, VAR_3->options[0], VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_2, VAR_8);
 if (VAR_9)
  return VAR_9;

 for (VAR_10 = 0; VAR_10 < VAR_2->n_subdevices; VAR_10++) {
  VAR_5 = &VAR_2->subdevices[VAR_10];
  if (VAR_4->is_pet48) {
   VAR_6 = VAR_2->iobase + (VAR_10 * 0x1000);
   VAR_9 = FUNC_2(VAR_2, VAR_5, VAR_1,
            VAR_6);
  } else {
   VAR_9 = FUNC_2(VAR_2, VAR_5, ((void*)0), VAR_10 * VAR_0);
  }
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl726_board {scalar_t__ is_pcl727; } ;
struct comedi_subdevice {int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {unsigned long iobase; struct pcl726_board* board_ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
          struct comedi_subdevice *VAR_5,
          struct comedi_insn *VAR_6,
          unsigned int *VAR_7)
{
 const struct pcl726_board *VAR_8 = VAR_4->board_ptr;
 unsigned long VAR_9 = VAR_4->iobase;
 unsigned int VAR_10;

 VAR_10 = FUNC_0(VAR_5, VAR_7);
 if (VAR_10) {
  if (VAR_8->is_pcl727) {
   if (VAR_10 & 0x00ff)
    FUNC_1(VAR_5->state & 0xff, VAR_9 + VAR_2);
   if (VAR_10 & 0xff00)
    FUNC_1((VAR_5->state >> 8), VAR_9 + VAR_3);
  } else {
   if (VAR_10 & 0x00ff)
    FUNC_1(VAR_5->state & 0xff, VAR_9 + VAR_0);
   if (VAR_10 & 0xff00)
    FUNC_1((VAR_5->state >> 8), VAR_9 + VAR_1);
  }
 }

 VAR_7[1] = VAR_5->state;

 return VAR_6->n;
}

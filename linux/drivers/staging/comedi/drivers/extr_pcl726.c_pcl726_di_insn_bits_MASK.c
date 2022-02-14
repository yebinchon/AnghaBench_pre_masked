
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl726_board {scalar_t__ is_pcl727; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; struct pcl726_board* board_ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_4,
          struct comedi_subdevice *VAR_5,
          struct comedi_insn *VAR_6,
          unsigned int *VAR_7)
{
 const struct pcl726_board *VAR_8 = VAR_4->board_ptr;
 unsigned int VAR_9;

 if (VAR_8->is_pcl727) {
  VAR_9 = FUNC_0(VAR_4->iobase + VAR_2);
  VAR_9 |= (FUNC_0(VAR_4->iobase + VAR_3) << 8);
 } else {
  VAR_9 = FUNC_0(VAR_4->iobase + VAR_0);
  VAR_9 |= (FUNC_0(VAR_4->iobase + VAR_1) << 8);
 }

 VAR_7[1] = VAR_9;

 return VAR_6->n;
}

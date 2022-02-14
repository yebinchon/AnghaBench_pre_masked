
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {scalar_t__ main_iobase; } ;
struct pcidas64_board {scalar_t__ layout; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {struct pcidas64_private* private; struct pcidas64_board* board_ptr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
         struct comedi_subdevice *VAR_5,
         struct comedi_insn *VAR_6,
         unsigned long VAR_7)
{
 const struct pcidas64_board *VAR_8 = VAR_4->board_ptr;
 struct pcidas64_private *VAR_9 = VAR_4->private;
 unsigned int VAR_10;

 VAR_10 = FUNC_1(VAR_9->main_iobase + VAR_2);
 if (VAR_8->layout == VAR_3) {
  VAR_10 = FUNC_1(VAR_9->main_iobase + VAR_0);
  if (VAR_10)
   return 0;
 } else {
  if (FUNC_0(VAR_10))
   return 0;
 }
 return -VAR_1;
}

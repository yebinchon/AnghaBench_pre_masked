
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_private {TYPE_1__* mite; } ;
struct ni_board_struct {unsigned int ao_speed; int ao_fifo_depth; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {struct ni_private* private; struct ni_board_struct* board_ptr; } ;
struct TYPE_2__ {unsigned int fifo_size; } ;




 int VAR_0 ;



 unsigned int FUNC_0 (struct comedi_subdevice*,int ) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
        struct comedi_subdevice *VAR_2,
        struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 const struct ni_board_struct *VAR_5 = VAR_1->board_ptr;
 struct ni_private *VAR_6 = VAR_1->private;
 unsigned int VAR_7;

 switch (VAR_4[0]) {
 case 128:
  switch (VAR_4[1]) {
  case 131:
   VAR_7 = FUNC_0(VAR_2,
        VAR_5->ao_fifo_depth);
   VAR_4[2] = 1 + VAR_7;
   if (VAR_6->mite)
    VAR_4[2] += VAR_6->mite->fifo_size;
   break;
  case 132:
   VAR_4[2] = 0;
   break;
  default:
   return -VAR_0;
  }
  return 0;
 case 130:
  return FUNC_1(VAR_1, VAR_2);
 case 129:


  VAR_4[1] = VAR_5->ao_speed * VAR_4[3];
  VAR_4[2] = 0;
  return 0;
 default:
  break;
 }

 return -VAR_0;
}

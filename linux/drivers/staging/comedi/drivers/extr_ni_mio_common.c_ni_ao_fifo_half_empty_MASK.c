
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_board_struct {int ao_fifo_depth; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct ni_board_struct* board_ptr; } ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct comedi_subdevice*) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
     struct comedi_subdevice *VAR_2)
{
 const struct ni_board_struct *VAR_3 = VAR_1->board_ptr;
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == 0) {
  VAR_2->async->events |= VAR_0;
  return 0;
 }

 VAR_5 = FUNC_1(VAR_2, VAR_4);
 if (VAR_5 > VAR_3->ao_fifo_depth / 2)
  VAR_5 = VAR_3->ao_fifo_depth / 2;

 FUNC_2(VAR_1, VAR_2, VAR_5);

 return 1;
}

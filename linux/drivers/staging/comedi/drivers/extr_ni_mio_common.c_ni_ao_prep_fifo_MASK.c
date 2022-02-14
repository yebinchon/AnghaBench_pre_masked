
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__ is_6xxx; } ;
struct ni_board_struct {unsigned int ao_fifo_depth; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct ni_private* private; struct ni_board_struct* board_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct comedi_subdevice*) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (struct comedi_device*,int,int ) ;
 int FUNC_4 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2,
      struct comedi_subdevice *VAR_3)
{
 const struct ni_board_struct *VAR_4 = VAR_2->board_ptr;
 struct ni_private *VAR_5 = VAR_2->private;
 unsigned int VAR_6;
 unsigned int VAR_7;


 FUNC_4(VAR_2, 1, VAR_1);
 if (VAR_5->is_6xxx)
  FUNC_3(VAR_2, 0x6, VAR_0);


 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 == 0)
  return 0;

 VAR_7 = FUNC_1(VAR_3, VAR_6);
 if (VAR_7 > VAR_4->ao_fifo_depth)
  VAR_7 = VAR_4->ao_fifo_depth;

 FUNC_2(VAR_2, VAR_3, VAR_7);

 return VAR_7;
}

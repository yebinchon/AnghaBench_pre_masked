
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_board_struct {int ai_fifo_depth; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; struct ni_board_struct* board_ptr; } ;


 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,int) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0)
{
 const struct ni_board_struct *VAR_1 = VAR_0->board_ptr;
 struct comedi_subdevice *VAR_2 = VAR_0->read_subdev;
 int VAR_3;

 VAR_3 = VAR_1->ai_fifo_depth / 2;

 FUNC_0(VAR_0, VAR_2, VAR_3);
}

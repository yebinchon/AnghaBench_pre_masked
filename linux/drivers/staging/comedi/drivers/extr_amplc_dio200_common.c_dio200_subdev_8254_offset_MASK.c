
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_board {scalar_t__ is_pcie; } ;
struct comedi_subdevice {struct comedi_8254* private; } ;
struct comedi_device {unsigned int mmio; unsigned int iobase; struct dio200_board* board_ptr; } ;
struct comedi_8254 {unsigned int mmio; unsigned int iobase; } ;



__attribute__((used)) static unsigned int FUNC_0(struct comedi_device *VAR_0,
           struct comedi_subdevice *VAR_1)
{
 const struct dio200_board *VAR_2 = VAR_0->board_ptr;
 struct comedi_8254 *VAR_3 = VAR_1->private;
 unsigned int VAR_4;


 if (VAR_0->mmio)
  VAR_4 = VAR_3->mmio - VAR_0->mmio;
 else
  VAR_4 = VAR_3->iobase - VAR_0->iobase;


 if (VAR_2->is_pcie)
  VAR_4 >>= 3;


 return VAR_4;
}

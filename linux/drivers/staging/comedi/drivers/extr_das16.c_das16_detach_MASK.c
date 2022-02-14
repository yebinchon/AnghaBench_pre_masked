
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das16_private_struct {scalar_t__ extra_iobase; } ;
struct das16_board {int size; } ;
struct comedi_device {scalar_t__ iobase; struct das16_private_struct* private; struct das16_board* board_ptr; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_0)
{
 const struct das16_board *VAR_1 = VAR_0->board_ptr;
 struct das16_private_struct *VAR_2 = VAR_0->private;

 if (VAR_2) {
  if (VAR_0->iobase)
   FUNC_2(VAR_0);
  FUNC_1(VAR_0);

  if (VAR_2->extra_iobase)
   FUNC_3(VAR_2->extra_iobase,
           VAR_1->size & 0x3ff);
 }

 FUNC_0(VAR_0);
}

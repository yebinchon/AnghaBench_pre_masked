
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_subdev_intr {unsigned int valid_isns; int ofs; } ;
struct dio200_board {scalar_t__ has_int_sce; } ;
struct comedi_subdevice {struct dio200_subdev_intr* private; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct dio200_board* board_ptr; } ;


 unsigned int FUNC_0 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0,
     struct comedi_subdevice *VAR_1,
     struct comedi_insn *VAR_2,
     unsigned int *VAR_3)
{
 const struct dio200_board *VAR_4 = VAR_0->board_ptr;
 struct dio200_subdev_intr *VAR_5 = VAR_1->private;

 if (VAR_4->has_int_sce) {

  VAR_3[1] = FUNC_0(VAR_0, VAR_5->ofs) & VAR_5->valid_isns;
 } else {

  VAR_3[0] = 0;
 }

 return VAR_2->n;
}

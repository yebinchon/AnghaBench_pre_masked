
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_subdev_intr {int active; int ofs; scalar_t__ enabled_isns; } ;
struct dio200_board {scalar_t__ has_int_sce; } ;
struct comedi_subdevice {struct dio200_subdev_intr* private; } ;
struct comedi_device {struct dio200_board* board_ptr; } ;


 int FUNC_0 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0,
        struct comedi_subdevice *VAR_1)
{
 const struct dio200_board *VAR_2 = VAR_0->board_ptr;
 struct dio200_subdev_intr *VAR_3 = VAR_1->private;

 VAR_3->active = 0;
 VAR_3->enabled_isns = 0;
 if (VAR_2->has_int_sce)
  FUNC_0(VAR_0, VAR_3->ofs, 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dio200_subdev_intr {unsigned int valid_isns; unsigned int enabled_isns; int ofs; } ;
struct dio200_board {scalar_t__ has_int_sce; } ;
struct comedi_subdevice {TYPE_1__* async; struct dio200_subdev_intr* private; } ;
struct comedi_device {struct dio200_board* board_ptr; } ;
struct comedi_cmd {unsigned int chanlist_len; int * chanlist; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1)
{
 const struct dio200_board *VAR_2 = VAR_0->board_ptr;
 struct dio200_subdev_intr *VAR_3 = VAR_1->private;
 struct comedi_cmd *VAR_4 = &VAR_1->async->cmd;
 unsigned int VAR_5;
 unsigned int VAR_6;


 VAR_6 = 0;
 if (VAR_4->chanlist) {
  for (VAR_5 = 0; VAR_5 < VAR_4->chanlist_len; VAR_5++)
   VAR_6 |= (1U << FUNC_0(VAR_4->chanlist[VAR_5]));
 }
 VAR_6 &= VAR_3->valid_isns;

 VAR_3->enabled_isns = VAR_6;
 if (VAR_2->has_int_sce)
  FUNC_1(VAR_0, VAR_3->ofs, VAR_6);
}

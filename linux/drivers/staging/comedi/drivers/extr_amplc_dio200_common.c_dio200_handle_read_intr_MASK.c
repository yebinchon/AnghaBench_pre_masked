
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_subdev_intr {unsigned int enabled_isns; unsigned int valid_isns; int spinlock; scalar_t__ active; int ofs; } ;
struct dio200_board {scalar_t__ has_int_sce; } ;
struct comedi_subdevice {struct dio200_subdev_intr* private; } ;
struct comedi_device {struct dio200_board* board_ptr; } ;


 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (struct comedi_device*,int ,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_0,
       struct comedi_subdevice *VAR_1)
{
 const struct dio200_board *VAR_2 = VAR_0->board_ptr;
 struct dio200_subdev_intr *VAR_3 = VAR_1->private;
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned long VAR_7;

 VAR_4 = 0;

 FUNC_4(&VAR_3->spinlock, VAR_7);
 if (VAR_2->has_int_sce) {
  VAR_6 = VAR_3->enabled_isns;
  while ((VAR_5 = (FUNC_1(VAR_0, VAR_3->ofs) &
       VAR_3->valid_isns & ~VAR_4)) != 0) {
   VAR_4 |= VAR_5;
   VAR_6 &= ~VAR_4;
   FUNC_3(VAR_0, VAR_3->ofs, VAR_6);
  }
 } else {




  VAR_4 = VAR_3->enabled_isns;
 }

 if (VAR_4) {






  VAR_6 = VAR_3->enabled_isns;
  if (VAR_2->has_int_sce)
   FUNC_3(VAR_0, VAR_3->ofs, VAR_6);

  if (VAR_3->active) {







   if (VAR_4 & VAR_3->enabled_isns) {

    FUNC_2(VAR_0, VAR_1, VAR_4);
   }
  }
 }
 FUNC_5(&VAR_3->spinlock, VAR_7);

 FUNC_0(VAR_0, VAR_1);

 return (VAR_4 != 0);
}

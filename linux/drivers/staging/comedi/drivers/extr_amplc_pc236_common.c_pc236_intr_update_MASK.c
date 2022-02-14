
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pc236_private {int enable_irq; } ;
struct pc236_board {int (* intr_update_cb ) (struct comedi_device*,int) ;} ;
struct comedi_device {int spinlock; struct pc236_private* private; struct pc236_board* board_ptr; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct comedi_device*,int) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_0, bool VAR_1)
{
 const struct pc236_board *VAR_2 = VAR_0->board_ptr;
 struct pc236_private *VAR_3 = VAR_0->private;
 unsigned long VAR_4;

 FUNC_0(&VAR_0->spinlock, VAR_4);
 VAR_3->enable_irq = VAR_1;
 if (VAR_2->intr_update_cb)
  VAR_2->intr_update_cb(VAR_0, VAR_1);
 FUNC_1(&VAR_0->spinlock, VAR_4);
}

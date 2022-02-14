
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct das16_private_struct {int timer; scalar_t__ timer_running; struct comedi_device* dev; } ;
struct comedi_device {int spinlock; } ;


 int FUNC_0 (struct comedi_device*) ;
 struct das16_private_struct* VAR_0 ;
 struct das16_private_struct* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_3)
{
 struct das16_private_struct *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 struct comedi_device *VAR_5 = VAR_4->dev;
 unsigned long VAR_6;

 FUNC_0(VAR_5);

 FUNC_3(&VAR_5->spinlock, VAR_6);
 if (VAR_4->timer_running)
  FUNC_2(&VAR_4->timer, VAR_1 + FUNC_5());
 FUNC_4(&VAR_5->spinlock, VAR_6);
}

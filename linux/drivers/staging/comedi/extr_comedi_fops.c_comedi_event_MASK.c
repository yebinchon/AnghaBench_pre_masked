
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int spin_lock; struct comedi_async* async; } ;
struct comedi_device {int async_queue; } ;
struct TYPE_2__ {int flags; } ;
struct comedi_async {unsigned int events; unsigned int cb_mask; TYPE_1__ cmd; int wait_head; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct comedi_subdevice*,int ) ;
 int FUNC_1 (struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_subdevice*,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct comedi_device *VAR_8, struct comedi_subdevice *VAR_9)
{
 struct comedi_async *VAR_10 = VAR_9->async;
 unsigned int VAR_11;
 int VAR_12 = 0;
 unsigned long VAR_13;

 FUNC_4(&VAR_9->spin_lock, VAR_13);

 VAR_11 = VAR_10->events;
 VAR_10->events = 0;
 if (!FUNC_1(VAR_9)) {
  FUNC_5(&VAR_9->spin_lock, VAR_13);
  return;
 }

 if (VAR_11 & VAR_1)
  FUNC_0(VAR_9, VAR_4);





 if (VAR_11 & VAR_2)
  FUNC_2(VAR_9, VAR_3);

 if (VAR_10->cb_mask & VAR_11) {
  FUNC_6(&VAR_10->wait_head);
  VAR_12 = VAR_10->cmd.flags & VAR_0 ? VAR_6 : VAR_5;
 }

 FUNC_5(&VAR_9->spin_lock, VAR_13);

 if (VAR_12)
  FUNC_3(&VAR_8->async_queue, VAR_7, VAR_12);
}

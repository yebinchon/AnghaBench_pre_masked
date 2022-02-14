
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ni_private {int mite_channel_lock; TYPE_1__* counter_dev; } ;
struct mite_channel {int dummy; } ;
struct comedi_device {struct ni_private* private; } ;
struct TYPE_4__ {struct mite_channel* mite_chan; } ;
struct TYPE_3__ {TYPE_2__* counters; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct mite_channel*) ;
 int FUNC_2 (struct comedi_device*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_1,
      unsigned int VAR_2)
{
 struct ni_private *VAR_3 = VAR_1->private;
 unsigned long VAR_4;

 FUNC_4(&VAR_3->mite_channel_lock, VAR_4);
 if (VAR_3->counter_dev->counters[VAR_2].mite_chan) {
  struct mite_channel *VAR_5 =
      VAR_3->counter_dev->counters[VAR_2].mite_chan;

  FUNC_2(VAR_1, VAR_0,
    FUNC_0(VAR_2), 0);
  FUNC_3(&VAR_3->
     counter_dev->counters[VAR_2],
     ((void*)0));
  FUNC_1(VAR_5);
 }
 FUNC_5(&VAR_3->mite_channel_lock, VAR_4);
}

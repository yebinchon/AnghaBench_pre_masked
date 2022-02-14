
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_private {int mite_channel_lock; int * gpct_mite_ring; int mite; TYPE_1__* counter_dev; } ;
struct ni_gpct {int dummy; } ;
struct mite_channel {int dir; int channel; } ;
struct comedi_device {int class_dev; struct ni_private* private; } ;
typedef enum comedi_io_direction { ____Placeholder_comedi_io_direction } comedi_io_direction ;
struct TYPE_2__ {struct ni_gpct* counters; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 struct mite_channel* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct comedi_device*,int ,int ,int ) ;
 int FUNC_6 (struct ni_gpct*,struct mite_channel*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_2,
     unsigned int VAR_3,
     enum comedi_io_direction VAR_4)
{
 struct ni_private *VAR_5 = VAR_2->private;
 struct ni_gpct *VAR_6 = &VAR_5->counter_dev->counters[VAR_3];
 struct mite_channel *VAR_7;
 unsigned long VAR_8;
 unsigned int VAR_9;

 FUNC_7(&VAR_5->mite_channel_lock, VAR_8);
 VAR_7 = FUNC_4(VAR_5->mite,
      VAR_5->gpct_mite_ring[VAR_3]);
 if (!VAR_7) {
  FUNC_8(&VAR_5->mite_channel_lock, VAR_8);
  FUNC_3(VAR_2->class_dev,
   "failed to reserve mite dma channel for counter\n");
  return -VAR_0;
 }
 VAR_7->dir = VAR_4;
 FUNC_6(VAR_6, VAR_7);

 VAR_9 = FUNC_2(VAR_7->channel);
 FUNC_5(VAR_2, VAR_1,
   FUNC_1(VAR_3),
   FUNC_0(VAR_3, VAR_9));

 FUNC_8(&VAR_5->mite_channel_lock, VAR_8);
 return 0;
}

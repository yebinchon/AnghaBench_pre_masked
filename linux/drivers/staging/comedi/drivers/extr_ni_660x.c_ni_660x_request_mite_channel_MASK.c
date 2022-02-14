
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {size_t chip_index; size_t counter_index; } ;
struct ni_660x_private {int mite_channel_lock; int mite; struct mite_ring*** ring; } ;
struct mite_ring {int dummy; } ;
struct mite_channel {int dir; int channel; } ;
struct comedi_device {int class_dev; struct ni_660x_private* private; } ;
typedef enum comedi_io_direction { ____Placeholder_comedi_io_direction } comedi_io_direction ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct mite_channel* FUNC_1 (int ,struct mite_ring*) ;
 int FUNC_2 (struct comedi_device*,int ,struct ni_gpct*) ;
 int FUNC_3 (struct ni_gpct*,struct mite_channel*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_1,
     struct ni_gpct *VAR_2,
     enum comedi_io_direction VAR_3)
{
 struct ni_660x_private *VAR_4 = VAR_1->private;
 struct mite_ring *VAR_5;
 struct mite_channel *VAR_6;
 unsigned long VAR_7;

 FUNC_4(&VAR_4->mite_channel_lock, VAR_7);
 VAR_5 = VAR_4->ring[VAR_2->chip_index][VAR_2->counter_index];
 VAR_6 = FUNC_1(VAR_4->mite, VAR_5);
 if (!VAR_6) {
  FUNC_5(&VAR_4->mite_channel_lock, VAR_7);
  FUNC_0(VAR_1->class_dev,
   "failed to reserve mite dma channel for counter\n");
  return -VAR_0;
 }
 VAR_6->dir = VAR_3;
 FUNC_3(VAR_2, VAR_6);
 FUNC_2(VAR_1, VAR_6->channel, VAR_2);
 FUNC_5(&VAR_4->mite_channel_lock, VAR_7);
 return 0;
}

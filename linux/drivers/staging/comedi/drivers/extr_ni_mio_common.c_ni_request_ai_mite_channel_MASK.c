
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int mite_channel_lock; struct mite_channel* ai_mite_chan; int ai_mite_ring; int mite; } ;
struct mite_channel {int channel; int dir; } ;
struct comedi_device {int class_dev; struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int VAR_3 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct mite_channel* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct comedi_device*,int ,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_4)
{
 struct ni_private *VAR_5 = VAR_4->private;
 struct mite_channel *VAR_6;
 unsigned long VAR_7;
 unsigned int VAR_8;

 FUNC_5(&VAR_5->mite_channel_lock, VAR_7);
 VAR_6 = FUNC_3(VAR_5->mite, VAR_5->ai_mite_ring);
 if (!VAR_6) {
  FUNC_6(&VAR_5->mite_channel_lock, VAR_7);
  FUNC_2(VAR_4->class_dev,
   "failed to reserve mite dma channel for analog input\n");
  return -VAR_1;
 }
 VAR_6->dir = VAR_0;
 VAR_5->ai_mite_chan = VAR_6;

 VAR_8 = FUNC_1(VAR_6->channel);
 FUNC_4(VAR_4, VAR_2,
   VAR_3, FUNC_0(VAR_8));

 FUNC_6(&VAR_5->mite_channel_lock, VAR_7);
 return 0;
}

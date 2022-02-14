
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {struct mite_channel* mite_chan; } ;
struct ni_660x_private {int mite_channel_lock; } ;
struct mite_channel {int channel; } ;
struct comedi_device {struct ni_660x_private* private; } ;


 int FUNC_0 (struct mite_channel*) ;
 int FUNC_1 (struct comedi_device*,int ,struct ni_gpct*) ;
 int FUNC_2 (struct ni_gpct*,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_0,
      struct ni_gpct *VAR_1)
{
 struct ni_660x_private *VAR_2 = VAR_0->private;
 unsigned long VAR_3;

 FUNC_3(&VAR_2->mite_channel_lock, VAR_3);
 if (VAR_1->mite_chan) {
  struct mite_channel *VAR_4 = VAR_1->mite_chan;

  FUNC_1(VAR_0, VAR_4->channel, VAR_1);
  FUNC_2(VAR_1, ((void*)0));
  FUNC_0(VAR_4);
 }
 FUNC_4(&VAR_2->mite_channel_lock, VAR_3);
}

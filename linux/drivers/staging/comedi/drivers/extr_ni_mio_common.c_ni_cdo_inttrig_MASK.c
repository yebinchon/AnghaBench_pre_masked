
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_private {int mite_channel_lock; scalar_t__ cdo_mite_chan; } ;
struct comedi_subdevice {int (* cancel ) (struct comedi_device*,struct comedi_subdevice*) ;TYPE_1__* async; } ;
struct comedi_device {int class_dev; struct ni_private* private; } ;
struct comedi_cmd {unsigned int start_arg; } ;
struct TYPE_2__ {int prealloc_bufsz; int * inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct comedi_subdevice*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int,int) ;
 int FUNC_4 (struct comedi_device*,int ) ;
 int FUNC_5 (struct comedi_device*,int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_8,
     struct comedi_subdevice *VAR_9,
     unsigned int VAR_10)
{
 struct comedi_cmd *VAR_11 = &VAR_9->async->cmd;
 const unsigned int VAR_12 = 1000;
 int VAR_13 = 0;
 unsigned int VAR_14;
 struct ni_private *VAR_15 = VAR_8->private;
 unsigned long VAR_16;

 if (VAR_10 != VAR_11->start_arg)
  return -VAR_0;

 VAR_9->async->inttrig = ((void*)0);


 FUNC_0(VAR_9, VAR_9->async->prealloc_bufsz);

 FUNC_6(&VAR_15->mite_channel_lock, VAR_16);
 if (VAR_15->cdo_mite_chan) {
  FUNC_3(VAR_15->cdo_mite_chan, 32, 32);
  FUNC_2(VAR_15->cdo_mite_chan);
 } else {
  FUNC_1(VAR_8->class_dev, "BUG: no cdo mite channel?\n");
  VAR_13 = -VAR_1;
 }
 FUNC_7(&VAR_15->mite_channel_lock, VAR_16);
 if (VAR_13 < 0)
  return VAR_13;






 for (VAR_14 = 0; VAR_14 < VAR_12; ++VAR_14) {
  if (FUNC_4(VAR_8, VAR_4) &
      VAR_3)
   break;
  FUNC_9(10, 100);
 }
 if (VAR_14 == VAR_12) {
  FUNC_1(VAR_8->class_dev, "dma failed to fill cdo fifo!\n");
  VAR_9->cancel(VAR_8, VAR_9);
  return -VAR_1;
 }
 FUNC_5(VAR_8, VAR_5 |
         VAR_6 |
         VAR_7,
    VAR_2);
 return VAR_13;
}

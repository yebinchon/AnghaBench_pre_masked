
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int mite_channel_lock; scalar_t__ ai_mite_chan; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; struct ni_private* private; } ;


 int FUNC_0 (scalar_t__,struct comedi_subdevice*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_0)
{
 struct ni_private *VAR_1 = VAR_0->private;
 struct comedi_subdevice *VAR_2 = VAR_0->read_subdev;
 unsigned long VAR_3;

 FUNC_1(&VAR_1->mite_channel_lock, VAR_3);
 if (VAR_1->ai_mite_chan)
  FUNC_0(VAR_1->ai_mite_chan, VAR_2);
 FUNC_2(&VAR_1->mite_channel_lock, VAR_3);
}

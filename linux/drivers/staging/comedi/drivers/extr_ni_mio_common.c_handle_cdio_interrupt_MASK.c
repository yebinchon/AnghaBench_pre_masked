
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_private {int mite_channel_lock; scalar_t__ cdo_mite_chan; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct comedi_subdevice* subdevices; struct ni_private* private; } ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (scalar_t__,struct comedi_subdevice*,int) ;
 unsigned int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_8)
{
 struct ni_private *VAR_9 = VAR_8->private;
 unsigned int VAR_10;
 struct comedi_subdevice *VAR_11 = &VAR_8->subdevices[VAR_1];
 unsigned long VAR_12;

 FUNC_4(&VAR_9->mite_channel_lock, VAR_12);
 if (VAR_9->cdo_mite_chan)
  FUNC_1(VAR_9->cdo_mite_chan, VAR_11, 1);
 FUNC_5(&VAR_9->mite_channel_lock, VAR_12);

 VAR_10 = FUNC_2(VAR_8, VAR_5);
 if (VAR_10 & VAR_3) {

  FUNC_3(VAR_8, VAR_6,
     VAR_2);
  VAR_11->async->events |= VAR_0;
 }
 if (VAR_10 & VAR_4) {
  FUNC_3(VAR_8, VAR_7,
     VAR_2);

 }
 FUNC_0(VAR_8, VAR_11);
}

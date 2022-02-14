
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; struct apci2032_int_private* private; } ;
struct comedi_device {scalar_t__ iobase; int attached; struct comedi_subdevice* read_subdev; } ;
struct comedi_cmd {int chanlist_len; scalar_t__ stop_src; scalar_t__ stop_arg; int * chanlist; } ;
struct apci2032_int_private {unsigned int enabled_isns; int spinlock; scalar_t__ active; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_8, void *VAR_9)
{
 struct comedi_device *VAR_10 = VAR_9;
 struct comedi_subdevice *VAR_11 = VAR_10->read_subdev;
 struct comedi_cmd *VAR_12 = &VAR_11->async->cmd;
 struct apci2032_int_private *VAR_13;
 unsigned int VAR_14;

 if (!VAR_10->attached)
  return VAR_6;


 VAR_14 = FUNC_3(VAR_10->iobase + VAR_3) & VAR_2;
 if (!VAR_14)
  return VAR_6;

 VAR_13 = VAR_11->private;
 FUNC_5(&VAR_13->spinlock);

 VAR_14 = FUNC_3(VAR_10->iobase + VAR_1) & 3;

 FUNC_4(~VAR_14 & 3, VAR_10->iobase + VAR_0);






 if (VAR_13->active && (VAR_14 & VAR_13->enabled_isns) != 0) {
  unsigned short VAR_15 = 0;
  int VAR_16;


  for (VAR_16 = 0; VAR_16 < VAR_12->chanlist_len; VAR_16++) {
   unsigned int VAR_17 = FUNC_0(VAR_12->chanlist[VAR_16]);

   if (VAR_14 & (1 << VAR_17))
    VAR_15 |= (1 << VAR_16);
  }

  FUNC_1(VAR_11, &VAR_15, 1);

  if (VAR_12->stop_src == VAR_7 &&
      VAR_11->async->scans_done >= VAR_12->stop_arg)
   VAR_11->async->events |= VAR_4;
 }

 FUNC_6(&VAR_13->spinlock);

 FUNC_2(VAR_10, VAR_11);

 return VAR_5;
}

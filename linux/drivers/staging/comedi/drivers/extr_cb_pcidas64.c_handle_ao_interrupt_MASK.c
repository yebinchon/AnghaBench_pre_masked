
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcidas64_private {scalar_t__ plx9080_iobase; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; struct comedi_subdevice* write_subdev; struct pcidas64_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 scalar_t__ FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct comedi_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_9,
    unsigned short VAR_10, unsigned int VAR_11)
{
 struct pcidas64_private *VAR_12 = VAR_9->private;
 struct comedi_subdevice *VAR_13 = VAR_9->write_subdev;
 struct comedi_async *VAR_14;
 struct comedi_cmd *VAR_15;
 u8 VAR_16;
 unsigned long VAR_17;


 if (!VAR_13)
  return;
 VAR_14 = VAR_13->async;
 VAR_15 = &VAR_14->cmd;


 FUNC_6(&VAR_9->spinlock, VAR_17);
 VAR_16 = FUNC_4(VAR_12->plx9080_iobase + VAR_7);
 if (VAR_11 & VAR_6) {
  if ((VAR_16 & VAR_5) &&
      !(VAR_16 & VAR_4)) {
   FUNC_8(VAR_5 | VAR_3,
          VAR_12->plx9080_iobase + VAR_7);
  } else {
   FUNC_8(VAR_3,
          VAR_12->plx9080_iobase + VAR_7);
  }
  FUNC_7(&VAR_9->spinlock, VAR_17);
  if (VAR_16 & VAR_5) {
   FUNC_3(VAR_9, VAR_15);

   if (FUNC_0(VAR_9, VAR_16))
    FUNC_5(VAR_9);
  }
 } else {
  FUNC_7(&VAR_9->spinlock, VAR_17);
 }

 if ((VAR_10 & VAR_2)) {
  if ((VAR_15->stop_src == VAR_8 &&
       VAR_14->scans_done >= VAR_15->stop_arg) ||
      FUNC_2(VAR_9))
   VAR_14->events |= VAR_0;
  else
   VAR_14->events |= VAR_1;
 }
 FUNC_1(VAR_9, VAR_13);
}

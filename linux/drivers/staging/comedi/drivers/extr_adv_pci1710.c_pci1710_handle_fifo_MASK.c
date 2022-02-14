
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci1710_private {int max_samples; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; struct pci1710_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {scalar_t__ scans_done; int events; int cur_chan; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned int*,int) ;
 int FUNC_1 (int ,char*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,int ,unsigned int*) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_7,
    struct comedi_subdevice *VAR_8)
{
 struct pci1710_private *VAR_9 = VAR_7->private;
 struct comedi_async *VAR_10 = VAR_8->async;
 struct comedi_cmd *VAR_11 = &VAR_10->cmd;
 unsigned int VAR_12;
 int VAR_13;

 VAR_12 = FUNC_2(VAR_7->iobase + VAR_5);
 if (!(VAR_12 & VAR_4)) {
  FUNC_1(VAR_7->class_dev, "A/D FIFO not half full!\n");
  VAR_10->events |= VAR_1;
  return;
 }
 if (VAR_12 & VAR_3) {
  FUNC_1(VAR_7->class_dev,
   "A/D FIFO Full status (Fatal Error!)\n");
  VAR_10->events |= VAR_1;
  return;
 }

 for (VAR_13 = 0; VAR_13 < VAR_9->max_samples; VAR_13++) {
  unsigned int VAR_14;
  int VAR_15;

  VAR_15 = FUNC_4(VAR_7, VAR_8, VAR_8->async->cur_chan, &VAR_14);
  if (VAR_15) {
   VAR_8->async->events |= VAR_1;
   break;
  }

  if (!FUNC_0(VAR_8, &VAR_14, 1))
   break;

  if (VAR_11->stop_src == VAR_6 &&
      VAR_10->scans_done >= VAR_11->stop_arg) {
   VAR_10->events |= VAR_0;
   break;
  }
 }

 FUNC_3(0, VAR_7->iobase + VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct TYPE_2__ {scalar_t__ scans_done; int events; int cur_chan; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned int*,int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,int ,unsigned int*) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_7,
     struct comedi_subdevice *VAR_8)
{
 struct comedi_cmd *VAR_9 = &VAR_8->async->cmd;
 unsigned int VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_10 = FUNC_2(VAR_7->iobase + VAR_5);
 if (VAR_10 & VAR_3) {
  FUNC_1(VAR_7->class_dev, "A/D FIFO empty (%4x)\n", VAR_10);
  VAR_8->async->events |= VAR_1;
  return;
 }
 if (VAR_10 & VAR_4) {
  FUNC_1(VAR_7->class_dev,
   "A/D FIFO Full status (Fatal Error!) (%4x)\n", VAR_10);
  VAR_8->async->events |= VAR_1;
  return;
 }

 FUNC_3(0, VAR_7->iobase + VAR_2);

 for (; !(FUNC_2(VAR_7->iobase + VAR_5) & VAR_3);) {
  VAR_12 = FUNC_4(VAR_7, VAR_8, VAR_8->async->cur_chan, &VAR_11);
  if (VAR_12) {
   VAR_8->async->events |= VAR_1;
   break;
  }

  FUNC_0(VAR_8, &VAR_11, 1);

  if (VAR_9->stop_src == VAR_6 &&
      VAR_8->async->scans_done >= VAR_9->stop_arg) {
   VAR_8->async->events |= VAR_0;
   break;
  }
 }

 FUNC_3(0, VAR_7->iobase + VAR_2);
}

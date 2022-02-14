
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* read_subdev; int class_dev; int attached; } ;
struct comedi_cmd {int chanlist_len; scalar_t__ stop_src; scalar_t__ stop_arg; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned int*,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (int ,char*) ;
 unsigned int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned char FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct comedi_device *VAR_9 = VAR_8;
 unsigned char VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 if (!VAR_9->attached) {
  FUNC_2(VAR_9->class_dev, "spurious interrupt\n");
  return VAR_5;
 }

 VAR_10 = FUNC_4(VAR_9->iobase + VAR_4);

 if (VAR_10 & VAR_3) {
  struct comedi_subdevice *VAR_13 = VAR_9->read_subdev;
  struct comedi_cmd *VAR_14 = &VAR_13->async->cmd;

  for (VAR_12 = 0; VAR_12 < VAR_14->chanlist_len; VAR_12++) {
   VAR_11 = FUNC_3(VAR_9, VAR_13);
   FUNC_0(VAR_13, &VAR_11, 1);
  }

  if (VAR_14->stop_src == VAR_6 &&
      VAR_13->async->scans_done >= VAR_14->stop_arg)
   VAR_13->async->events |= VAR_0;

  FUNC_1(VAR_9, VAR_13);
 }


 FUNC_5(VAR_1, VAR_9->iobase + VAR_2);
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; int attached; struct comedi_subdevice* read_subdev; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned int*,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,scalar_t__) ;
 unsigned int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct comedi_device *VAR_7 = VAR_6;
 struct comedi_subdevice *VAR_8 = VAR_7->read_subdev;
 struct comedi_cmd *VAR_9 = &VAR_8->async->cmd;
 unsigned int VAR_10;

 if (!VAR_7->attached) {
  FUNC_2(VAR_7->class_dev, "spurious interrupt\n");
  return VAR_1;
 }

 VAR_10 = FUNC_4(VAR_7, VAR_8);

 FUNC_3(VAR_2, VAR_7->iobase + VAR_3);

 FUNC_0(VAR_8, &VAR_10, 1);

 if (VAR_9->stop_src == VAR_4 &&
     VAR_8->async->scans_done >= VAR_9->stop_arg)
  VAR_8->async->events |= VAR_0;

 FUNC_1(VAR_7, VAR_8);

 return VAR_1;
}

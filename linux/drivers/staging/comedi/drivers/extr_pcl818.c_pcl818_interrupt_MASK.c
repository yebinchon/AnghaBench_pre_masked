
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcl818_private {scalar_t__ usefifo; scalar_t__ dma; scalar_t__ ai_cmd_canceled; int ai_cmd_running; } ;
struct comedi_subdevice {int (* cancel ) (struct comedi_device*,struct comedi_subdevice*) ;TYPE_1__* async; } ;
struct comedi_device {int attached; struct comedi_subdevice* read_subdev; struct pcl818_private* private; } ;
struct comedi_cmd {int stop_arg; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int scans_done; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct comedi_device *VAR_3 = VAR_2;
 struct pcl818_private *VAR_4 = VAR_3->private;
 struct comedi_subdevice *VAR_5 = VAR_3->read_subdev;
 struct comedi_cmd *VAR_6 = &VAR_5->async->cmd;

 if (!VAR_3->attached || !VAR_4->ai_cmd_running) {
  FUNC_1(VAR_3);
  return VAR_0;
 }

 if (VAR_4->ai_cmd_canceled) {






  VAR_5->async->scans_done = VAR_6->stop_arg;
  VAR_5->cancel(VAR_3, VAR_5);
  return VAR_0;
 }

 if (VAR_4->dma)
  FUNC_2(VAR_3, VAR_5);
 else if (VAR_4->usefifo)
  FUNC_4(VAR_3, VAR_5);
 else
  FUNC_3(VAR_3, VAR_5);

 FUNC_1(VAR_3);

 FUNC_0(VAR_3, VAR_5);
 return VAR_0;
}

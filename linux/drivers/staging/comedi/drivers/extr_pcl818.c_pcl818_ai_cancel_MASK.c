
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcl818_private {int ai_cmd_canceled; scalar_t__ ai_cmd_running; scalar_t__ usefifo; struct comedi_isadma* dma; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_isadma {int chan; } ;
struct comedi_device {scalar_t__ iobase; int pacer; struct pcl818_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct TYPE_2__ {scalar_t__ scans_done; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_7,
       struct comedi_subdevice *VAR_8)
{
 struct pcl818_private *VAR_9 = VAR_7->private;
 struct comedi_isadma *VAR_10 = VAR_9->dma;
 struct comedi_cmd *VAR_11 = &VAR_8->async->cmd;

 if (!VAR_9->ai_cmd_running)
  return 0;

 if (VAR_10) {
  if (VAR_11->stop_src == VAR_6 ||
      (VAR_11->stop_src == VAR_5 &&
       VAR_8->async->scans_done < VAR_11->stop_arg)) {
   if (!VAR_9->ai_cmd_canceled) {




    VAR_9->ai_cmd_canceled = 1;
    return 0;
   }
  }
  FUNC_1(VAR_10->chan);
 }

 FUNC_2(VAR_0, VAR_7->iobase + VAR_1);
 FUNC_0(VAR_7->pacer, 1, 2, 0);
 FUNC_3(VAR_7);

 if (VAR_9->usefifo) {
  FUNC_2(0, VAR_7->iobase + VAR_4);
  FUNC_2(0, VAR_7->iobase + VAR_3);
  FUNC_2(0, VAR_7->iobase + VAR_2);
 }
 VAR_9->ai_cmd_running = 0;
 VAR_9->ai_cmd_canceled = 0;

 return 0;
}

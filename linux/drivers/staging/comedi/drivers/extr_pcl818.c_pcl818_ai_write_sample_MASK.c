
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcl818_private {unsigned int* act_chanlist; size_t act_chanlist_pos; size_t act_chanlist_len; scalar_t__ usefifo; scalar_t__ dma; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int class_dev; struct pcl818_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct TYPE_2__ {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned int*,int) ;
 int FUNC_1 (int ,char*,char*,unsigned int,unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct comedi_device *VAR_3,
       struct comedi_subdevice *VAR_4,
       unsigned int VAR_5, unsigned int VAR_6)
{
 struct pcl818_private *VAR_7 = VAR_3->private;
 struct comedi_cmd *VAR_8 = &VAR_4->async->cmd;
 unsigned int VAR_9;

 VAR_9 = VAR_7->act_chanlist[VAR_7->act_chanlist_pos];
 if (VAR_5 != VAR_9) {
  FUNC_1(VAR_3->class_dev,
   "A/D mode1/3 %s - channel dropout %d!=%d !\n",
   (VAR_7->dma) ? "DMA" :
   (VAR_7->usefifo) ? "FIFO" : "IRQ",
   VAR_5, VAR_9);
  VAR_4->async->events |= VAR_1;
  return 0;
 }

 FUNC_0(VAR_4, &VAR_6, 1);

 VAR_7->act_chanlist_pos++;
 if (VAR_7->act_chanlist_pos >= VAR_7->act_chanlist_len)
  VAR_7->act_chanlist_pos = 0;

 if (VAR_8->stop_src == VAR_2 &&
     VAR_4->async->scans_done >= VAR_8->stop_arg) {
  VAR_4->async->events |= VAR_0;
  return 0;
 }

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcl818_private {int ai_cmd_running; scalar_t__ usefifo; scalar_t__ act_chanlist_pos; scalar_t__ ai_cmd_canceled; struct comedi_isadma* dma; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_isadma {scalar_t__ cur_dma; } ;
struct comedi_device {int pacer; scalar_t__ iobase; int irq; struct pcl818_private* private; } ;
struct comedi_cmd {scalar_t__ convert_src; int chanlist; int chanlist_len; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,int ,int ) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int,scalar_t__) ;
 int FUNC_5 (struct comedi_device*,int ,unsigned int) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*,int ) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_10,
    struct comedi_subdevice *VAR_11)
{
 struct pcl818_private *VAR_12 = VAR_10->private;
 struct comedi_isadma *VAR_13 = VAR_12->dma;
 struct comedi_cmd *VAR_14 = &VAR_11->async->cmd;
 unsigned int VAR_15 = 0;
 unsigned int VAR_16;

 if (VAR_12->ai_cmd_running)
  return -VAR_0;

 VAR_16 = FUNC_1(VAR_10, VAR_11, VAR_14->chanlist, VAR_14->chanlist_len);
 if (VAR_16 < 1)
  return -VAR_1;
 FUNC_5(VAR_10, VAR_14->chanlist, VAR_16);

 VAR_12->ai_cmd_running = 1;
 VAR_12->ai_cmd_canceled = 0;
 VAR_12->act_chanlist_pos = 0;

 if (VAR_14->convert_src == VAR_9)
  VAR_15 |= VAR_6;
 else
  VAR_15 |= VAR_4;

 FUNC_4(0, VAR_10->iobase + VAR_2);

 if (VAR_13) {

  VAR_13->cur_dma = 0;
  FUNC_6(VAR_10, VAR_11, 0);

  VAR_15 |= VAR_5 | FUNC_0(VAR_10->irq) |
   VAR_3;
 } else if (VAR_12->usefifo) {

  FUNC_4(1, VAR_10->iobase + VAR_8);
 } else {
  VAR_15 |= VAR_5 | FUNC_0(VAR_10->irq);
 }
 FUNC_4(VAR_15, VAR_10->iobase + VAR_7);

 if (VAR_14->convert_src == VAR_9) {
  FUNC_3(VAR_10->pacer);
  FUNC_2(VAR_10->pacer, 1, 2, 1);
 }

 return 0;
}

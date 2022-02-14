
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcl816_private {int ai_cmd_running; scalar_t__ ai_cmd_canceled; scalar_t__ ai_poll_ptr; struct comedi_isadma* dma; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_isadma {int chan; scalar_t__ cur_dma; } ;
struct comedi_device {int irq; scalar_t__ iobase; int pacer; struct pcl816_private* private; } ;
struct comedi_cmd {scalar_t__ convert_src; int chanlist; int chanlist_len; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,int ,int ) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (struct comedi_device*,int ,unsigned int) ;
 int FUNC_8 (struct comedi_device*,struct comedi_subdevice*,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_11, struct comedi_subdevice *VAR_12)
{
 struct pcl816_private *VAR_13 = VAR_11->private;
 struct comedi_isadma *VAR_14 = VAR_13->dma;
 struct comedi_cmd *VAR_15 = &VAR_12->async->cmd;
 unsigned int VAR_16;
 unsigned int VAR_17;

 if (VAR_13->ai_cmd_running)
  return -VAR_0;

 VAR_17 = FUNC_1(VAR_11, VAR_12, VAR_15->chanlist, VAR_15->chanlist_len);
 if (VAR_17 < 1)
  return -VAR_1;
 FUNC_7(VAR_11, VAR_15->chanlist, VAR_17);
 FUNC_9(1);

 VAR_13->ai_cmd_running = 1;
 VAR_13->ai_poll_ptr = 0;
 VAR_13->ai_cmd_canceled = 0;


 VAR_14->cur_dma = 0;
 FUNC_8(VAR_11, VAR_12, 0);

 FUNC_3(VAR_11->pacer, 0, VAR_3 | VAR_2);
 FUNC_5(VAR_11->pacer, 0, 0x0ff);
 FUNC_9(1);
 FUNC_4(VAR_11->pacer);
 FUNC_2(VAR_11->pacer, 1, 2, 1);

 VAR_16 = VAR_6 | VAR_4 |
        FUNC_0(0);
 if (VAR_15->convert_src == VAR_10)
  VAR_16 |= VAR_7;
 else
  VAR_16 |= VAR_5;

 FUNC_6(VAR_16, VAR_11->iobase + VAR_8);
 FUNC_6((VAR_14->chan << 4) | VAR_11->irq,
      VAR_11->iobase + VAR_9);

 return 0;
}

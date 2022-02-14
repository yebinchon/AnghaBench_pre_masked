
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct das16_private_struct {int timer_running; int ctrl_reg; scalar_t__ can_burst; TYPE_1__ timer; struct comedi_isadma* dma; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_isadma {scalar_t__ cur_dma; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; int class_dev; struct das16_private_struct* private; } ;
struct comedi_cmd {int chanlist_len; int flags; scalar_t__ convert_src; int convert_arg; int * chanlist; } ;
struct comedi_async {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int FUNC_2 (int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct comedi_device*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,int ) ;
 int FUNC_6 (struct comedi_device*,int ,int) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ VAR_14 ;
 int FUNC_8 (unsigned int,scalar_t__) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct comedi_device *VAR_15, struct comedi_subdevice *VAR_16)
{
 struct das16_private_struct *VAR_17 = VAR_15->private;
 struct comedi_isadma *VAR_18 = VAR_17->dma;
 struct comedi_async *VAR_19 = VAR_16->async;
 struct comedi_cmd *VAR_20 = &VAR_19->cmd;
 unsigned int VAR_21 = FUNC_0(VAR_20->chanlist[0]);
 unsigned int VAR_22 = FUNC_0(VAR_20->chanlist[VAR_20->chanlist_len - 1]);
 unsigned int VAR_23 = FUNC_1(VAR_20->chanlist[0]);
 unsigned int VAR_24;
 unsigned long VAR_25;

 if (VAR_20->flags & VAR_0) {
  FUNC_7(VAR_15->class_dev,
   "isa dma transfers cannot be performed with CMDF_PRIORITY, aborting\n");
  return -1;
 }

 if (VAR_17->can_burst)
  FUNC_8(VAR_3, VAR_15->iobase + VAR_4);


 FUNC_4(VAR_15, VAR_21, VAR_22, VAR_23);


 VAR_20->convert_arg = FUNC_6(VAR_15, VAR_20->convert_arg, VAR_20->flags);


 VAR_24 = 0;
 if (VAR_17->can_burst) {
  if (VAR_20->convert_src == VAR_13) {
   FUNC_8(VAR_2,
        VAR_15->iobase + VAR_1);

   VAR_24 |= FUNC_2(VAR_20->chanlist_len - 1);
  } else {
   FUNC_8(0, VAR_15->iobase + VAR_1);
  }
 }
 FUNC_8(VAR_24, VAR_15->iobase + VAR_11);


 VAR_18->cur_dma = 0;
 FUNC_5(VAR_15, VAR_16, 0);


 FUNC_9(&VAR_15->spinlock, VAR_25);
 VAR_17->timer_running = 1;
 VAR_17->timer.expires = VAR_14 + FUNC_11();
 FUNC_3(&VAR_17->timer);


 VAR_17->ctrl_reg &= ~(VAR_7 | VAR_9);
 VAR_17->ctrl_reg |= VAR_5;
 if (VAR_20->convert_src == VAR_12)
  VAR_17->ctrl_reg |= VAR_6;
 else
  VAR_17->ctrl_reg |= VAR_8;
 FUNC_8(VAR_17->ctrl_reg, VAR_15->iobase + VAR_10);

 if (VAR_17->can_burst)
  FUNC_8(0, VAR_15->iobase + VAR_4);
 FUNC_10(&VAR_15->spinlock, VAR_25);

 return 0;
}

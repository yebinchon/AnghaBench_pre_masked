
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcidas64_private {scalar_t__ ai_cmd_running; scalar_t__ plx9080_iobase; } ;
struct pcidas64_board {scalar_t__ layout; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; int class_dev; struct comedi_subdevice* read_subdev; struct pcidas64_private* private; struct pcidas64_board* board_ptr; } ;
struct comedi_cmd {int flags; scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct comedi_device *VAR_14,
    unsigned short VAR_15,
    unsigned int VAR_16)
{
 const struct pcidas64_board *VAR_17 = VAR_14->board_ptr;
 struct pcidas64_private *VAR_18 = VAR_14->private;
 struct comedi_subdevice *VAR_19 = VAR_14->read_subdev;
 struct comedi_async *VAR_20 = VAR_19->async;
 struct comedi_cmd *VAR_21 = &VAR_20->cmd;
 u8 VAR_22;
 unsigned long VAR_23;


 if (VAR_15 & VAR_2) {
  FUNC_1(VAR_14->class_dev, "fifo overrun\n");
  VAR_20->events |= VAR_6;
 }

 FUNC_5(&VAR_14->spinlock, VAR_23);
 VAR_22 = FUNC_4(VAR_18->plx9080_iobase + VAR_11);
 if (VAR_16 & VAR_10) {
  FUNC_7((VAR_22 & VAR_9) | VAR_8,
         VAR_18->plx9080_iobase + VAR_11);

  if (VAR_22 & VAR_9)
   FUNC_2(VAR_14, 1);
 }
 FUNC_6(&VAR_14->spinlock, VAR_23);


 if ((VAR_15 & VAR_0) ||
     ((VAR_21->flags & VAR_4) &&
      (VAR_15 & VAR_1) &&
      (VAR_17->layout != VAR_7))) {
  FUNC_5(&VAR_14->spinlock, VAR_23);
  if (VAR_18->ai_cmd_running) {
   FUNC_6(&VAR_14->spinlock, VAR_23);
   FUNC_3(VAR_14);
  } else {
   FUNC_6(&VAR_14->spinlock, VAR_23);
  }
 }

 if ((VAR_21->stop_src == VAR_12 &&
      VAR_20->scans_done >= VAR_21->stop_arg) ||
     (VAR_21->stop_src == VAR_13 && (VAR_15 & VAR_3)))
  VAR_20->events |= VAR_5;

 FUNC_0(VAR_14, VAR_19);
}

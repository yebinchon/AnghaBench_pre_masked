
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int class_dev; struct comedi_subdevice* read_subdev; struct cb_pcidas_private* private; struct cb_pcidas_board* board_ptr; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;
struct cb_pcidas_private {unsigned short* ai_buffer; scalar_t__ pcibar2; scalar_t__ pcibar1; } ;
struct cb_pcidas_board {int fifo_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned short VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_2 (struct comedi_subdevice*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,unsigned short*,unsigned int) ;
 unsigned short FUNC_5 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_6(struct comedi_device *VAR_12,
        unsigned int VAR_13)
{
 const struct cb_pcidas_board *VAR_14 = VAR_12->board_ptr;
 struct cb_pcidas_private *VAR_15 = VAR_12->private;
 struct comedi_subdevice *VAR_16 = VAR_12->read_subdev;
 struct comedi_async *VAR_17 = VAR_16->async;
 struct comedi_cmd *VAR_18 = &VAR_17->cmd;
 unsigned int VAR_19 = 0;

 if (VAR_13 & VAR_3) {
  unsigned int VAR_20;

  VAR_19 |= VAR_8;


  VAR_20 = FUNC_2(VAR_16, VAR_14->fifo_size / 2);
  FUNC_4(VAR_15->pcibar2 + VAR_2,
       VAR_15->ai_buffer, VAR_20);
  FUNC_0(VAR_16, VAR_15->ai_buffer, VAR_20);

  if (VAR_18->stop_src == VAR_11 &&
      VAR_17->scans_done >= VAR_18->stop_arg)
   VAR_17->events |= VAR_0;
 } else if (VAR_13 & (VAR_5 | VAR_7)) {
  unsigned int VAR_21;

  VAR_19 |= VAR_8;


  for (VAR_21 = 0; VAR_21 < 10000; VAR_21++) {
   unsigned short VAR_22;


   if ((FUNC_5(VAR_15->pcibar1 + VAR_10) &
       VAR_4) == 0)
    break;
   VAR_22 = FUNC_5(VAR_15->pcibar2 + VAR_2);
   FUNC_0(VAR_16, &VAR_22, 1);

   if (VAR_18->stop_src == VAR_11 &&
       VAR_17->scans_done >= VAR_18->stop_arg) {
    VAR_17->events |= VAR_0;
    break;
   }
  }
 } else if (VAR_13 & VAR_6) {
  VAR_19 |= VAR_6;

  FUNC_3(VAR_12->class_dev,
   "bug! encountered end of acquisition interrupt?\n");
 }


 if (VAR_13 & VAR_9) {
  VAR_19 |= VAR_9;

  FUNC_3(VAR_12->class_dev, "fifo overflow\n");
  VAR_17->events |= VAR_1;
 }

 FUNC_1(VAR_12, VAR_16);

 return VAR_19;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int class_dev; struct comedi_subdevice* write_subdev; struct cb_pcidas_private* private; struct cb_pcidas_board* board_ptr; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;
struct cb_pcidas_private {scalar_t__ pcibar4; } ;
struct cb_pcidas_board {int fifo_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_4(struct comedi_device *VAR_7,
        unsigned int VAR_8)
{
 const struct cb_pcidas_board *VAR_9 = VAR_7->board_ptr;
 struct cb_pcidas_private *VAR_10 = VAR_7->private;
 struct comedi_subdevice *VAR_11 = VAR_7->write_subdev;
 struct comedi_async *VAR_12 = VAR_11->async;
 struct comedi_cmd *VAR_13 = &VAR_12->cmd;
 unsigned int VAR_14 = 0;

 if (VAR_8 & VAR_4) {
  VAR_14 |= VAR_4;

  if (FUNC_3(VAR_10->pcibar4 + VAR_3) & VAR_2) {
   if (VAR_13->stop_src == VAR_6 &&
       VAR_12->scans_done >= VAR_13->stop_arg) {
    VAR_12->events |= VAR_0;
   } else {
    FUNC_2(VAR_7->class_dev, "dac fifo underflow\n");
    VAR_12->events |= VAR_1;
   }
  }
 } else if (VAR_8 & VAR_5) {
  VAR_14 |= VAR_5;

  FUNC_0(VAR_7, VAR_11, VAR_9->fifo_size / 2);
 }

 FUNC_1(VAR_7, VAR_11);

 return VAR_14;
}

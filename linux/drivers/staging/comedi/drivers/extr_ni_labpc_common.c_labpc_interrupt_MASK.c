
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {int stat1; int (* read_byte ) (struct comedi_device*,int ) ;int stat2; scalar_t__ current_transfer; scalar_t__ count; int (* write_byte ) (struct comedi_device*,int,int ) ;} ;
struct labpc_boardinfo {scalar_t__ is_labpc1200; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int class_dev; int attached; struct comedi_subdevice* read_subdev; struct labpc_private* private; struct labpc_boardinfo* board_ptr; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct comedi_async {int events; struct comedi_cmd cmd; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*,int ) ;
 int FUNC_6 (struct comedi_device*,int ) ;
 int FUNC_7 (struct comedi_device*,int,int ) ;
 int FUNC_8 (struct comedi_device*,int,int ) ;
 int FUNC_9 (struct comedi_device*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_18, void *VAR_19)
{
 struct comedi_device *VAR_20 = VAR_19;
 const struct labpc_boardinfo *VAR_21 = VAR_20->board_ptr;
 struct labpc_private *VAR_22 = VAR_20->private;
 struct comedi_subdevice *VAR_23 = VAR_20->read_subdev;
 struct comedi_async *VAR_24;
 struct comedi_cmd *VAR_25;

 if (!VAR_20->attached) {
  FUNC_1(VAR_20->class_dev, "premature interrupt\n");
  return VAR_3;
 }

 VAR_24 = VAR_23->async;
 VAR_25 = &VAR_24->cmd;


 VAR_22->stat1 = VAR_22->read_byte(VAR_20, VAR_10);
 if (VAR_21->is_labpc1200)
  VAR_22->stat2 = VAR_22->read_byte(VAR_20, VAR_13);

 if ((VAR_22->stat1 & (VAR_7 | VAR_5 | VAR_8 |
          VAR_9 | VAR_6)) == 0 &&
     (VAR_22->stat2 & VAR_12) == 0 &&
     (VAR_22->stat2 & VAR_11)) {
  return VAR_4;
 }

 if (VAR_22->stat1 & VAR_9) {

  VAR_22->write_byte(VAR_20, 0x1, VAR_0);
  VAR_24->events |= VAR_2;
  FUNC_0(VAR_20, VAR_23);
  FUNC_1(VAR_20->class_dev, "overrun\n");
  return VAR_3;
 }

 if (VAR_22->current_transfer == VAR_17)
  FUNC_4(VAR_20);
 else
  FUNC_3(VAR_20);

 if (VAR_22->stat1 & VAR_5) {
  FUNC_1(VAR_20->class_dev, "handled timer interrupt?\n");

  VAR_22->write_byte(VAR_20, 0x1, VAR_14);
 }

 if (VAR_22->stat1 & VAR_8) {

  VAR_22->write_byte(VAR_20, 0x1, VAR_0);
  VAR_24->events |= VAR_2;
  FUNC_0(VAR_20, VAR_23);
  FUNC_1(VAR_20->class_dev, "overflow\n");
  return VAR_3;
 }

 if (VAR_25->stop_src == VAR_16) {
  if (VAR_22->stat2 & VAR_12) {
   FUNC_2(VAR_20);
   VAR_24->events |= VAR_1;
  }
 }


 if (VAR_25->stop_src == VAR_15) {
  if (VAR_22->count == 0)
   VAR_24->events |= VAR_1;
 }

 FUNC_0(VAR_20, VAR_23);
 return VAR_3;
}

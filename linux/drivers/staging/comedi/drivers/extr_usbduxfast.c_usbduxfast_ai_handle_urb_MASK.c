
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxfast_private {scalar_t__ ignore; } ;
struct urb {scalar_t__ status; int dev; int transfer_buffer; int actual_length; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int class_dev; struct usbduxfast_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct comedi_subdevice*,int ,unsigned int) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,int ) ;
 unsigned int FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_5,
         struct comedi_subdevice *VAR_6,
         struct urb *VAR_7)
{
 struct usbduxfast_private *VAR_8 = VAR_5->private;
 struct comedi_async *VAR_9 = VAR_6->async;
 struct comedi_cmd *VAR_10 = &VAR_9->cmd;
 int VAR_11;

 if (VAR_8->ignore) {
  VAR_8->ignore--;
 } else {
  unsigned int VAR_12;

  VAR_12 = FUNC_1(VAR_6, VAR_7->actual_length);
  VAR_12 = FUNC_2(VAR_6, VAR_12);
  FUNC_0(VAR_6, VAR_7->transfer_buffer, VAR_12);

  if (VAR_10->stop_src == VAR_4 &&
      VAR_9->scans_done >= VAR_10->stop_arg)
   VAR_9->events |= VAR_1;
 }


 if (!(VAR_9->events & VAR_0)) {
  VAR_7->dev = FUNC_3(VAR_5);
  VAR_7->status = 0;
  VAR_11 = FUNC_5(VAR_7, VAR_3);
  if (VAR_11 < 0) {
   FUNC_4(VAR_5->class_dev, "urb resubm failed: %d", VAR_11);
   VAR_9->events |= VAR_2;
  }
 }
}

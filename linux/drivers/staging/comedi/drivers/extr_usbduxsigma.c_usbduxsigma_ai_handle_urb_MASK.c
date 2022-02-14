
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbduxsigma_private {scalar_t__ ai_counter; scalar_t__ ai_timer; int * in_buf; } ;
struct urb {scalar_t__ actual_length; int dev; int status; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int class_dev; struct usbduxsigma_private* private; } ;
struct comedi_cmd {int chanlist_len; scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_subdevice*,int*,int) ;
 int FUNC_2 (struct comedi_subdevice*,int) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_7,
          struct comedi_subdevice *VAR_8,
          struct urb *VAR_9)
{
 struct usbduxsigma_private *VAR_10 = VAR_7->private;
 struct comedi_async *VAR_11 = VAR_8->async;
 struct comedi_cmd *VAR_12 = &VAR_11->cmd;
 u32 VAR_13;
 int VAR_14;
 int VAR_15;

 if ((VAR_9->actual_length > 0) && (VAR_9->status != -VAR_4)) {
  VAR_10->ai_counter--;
  if (VAR_10->ai_counter == 0) {
   VAR_10->ai_counter = VAR_10->ai_timer;





   for (VAR_15 = 0; VAR_15 < VAR_12->chanlist_len; VAR_15++) {
    VAR_13 = FUNC_0(VAR_10->in_buf[VAR_15 + 1]);
    VAR_13 &= 0x00ffffff;
    VAR_13 = FUNC_2(VAR_8, VAR_13);
    if (!FUNC_1(VAR_8, &VAR_13, 1))
     return;
   }

   if (VAR_12->stop_src == VAR_6 &&
       VAR_11->scans_done >= VAR_12->stop_arg)
    VAR_11->events |= VAR_1;
  }
 }


 if (!(VAR_11->events & VAR_0)) {
  VAR_9->dev = FUNC_3(VAR_7);
  VAR_14 = FUNC_5(VAR_9, VAR_5);
  if (VAR_14 < 0) {
   FUNC_4(VAR_7->class_dev, "urb resubmit failed (%d)\n",
    VAR_14);
   if (VAR_14 == -VAR_3)
    FUNC_4(VAR_7->class_dev,
     "buggy USB host controller or bug in IRQ handler\n");
   VAR_11->events |= VAR_2;
  }
 }
}

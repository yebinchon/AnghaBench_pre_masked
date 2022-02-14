
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbdux_private {scalar_t__ ai_counter; scalar_t__ ai_timer; int * in_buf; } ;
struct urb {int dev; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int class_dev; struct usbdux_private* private; } ;
struct comedi_cmd {int chanlist_len; scalar_t__ stop_src; scalar_t__ stop_arg; int * chanlist; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct comedi_subdevice*,int *,int) ;
 int FUNC_2 (struct comedi_subdevice*,int ) ;
 scalar_t__ FUNC_3 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_8(struct comedi_device *VAR_6,
        struct comedi_subdevice *VAR_7,
        struct urb *VAR_8)
{
 struct usbdux_private *VAR_9 = VAR_6->private;
 struct comedi_async *VAR_10 = VAR_7->async;
 struct comedi_cmd *VAR_11 = &VAR_10->cmd;
 int VAR_12;
 int VAR_13;

 VAR_9->ai_counter--;
 if (VAR_9->ai_counter == 0) {
  VAR_9->ai_counter = VAR_9->ai_timer;


  for (VAR_13 = 0; VAR_13 < VAR_11->chanlist_len; VAR_13++) {
   unsigned int VAR_14 = FUNC_0(VAR_11->chanlist[VAR_13]);
   u16 VAR_15 = FUNC_6(VAR_9->in_buf[VAR_13]);


   if (FUNC_3(VAR_7, VAR_14))
    VAR_15 = FUNC_2(VAR_7, VAR_15);


   if (!FUNC_1(VAR_7, &VAR_15, 1))
    return;
  }

  if (VAR_11->stop_src == VAR_5 &&
      VAR_10->scans_done >= VAR_11->stop_arg)
   VAR_10->events |= VAR_1;
 }


 if (!(VAR_10->events & VAR_0)) {
  VAR_8->dev = FUNC_4(VAR_6);
  VAR_12 = FUNC_7(VAR_8, VAR_4);
  if (VAR_12 < 0) {
   FUNC_5(VAR_6->class_dev,
    "urb resubmit failed in int-context! err=%d\n",
    VAR_12);
   if (VAR_12 == -VAR_3)
    FUNC_5(VAR_6->class_dev,
     "buggy USB host controller or bug in IRQ handler!\n");
   VAR_10->events |= VAR_2;
  }
 }
}

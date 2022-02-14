
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usbdux_private {scalar_t__ ao_counter; scalar_t__ ao_timer; scalar_t__ high_speed; } ;
struct urb {int interval; int number_of_packets; TYPE_1__* iso_frame_desc; scalar_t__ status; int dev; void* transfer_buffer_length; int * transfer_buffer; } ;
struct comedi_subdevice {unsigned short* readback; struct comedi_async* async; } ;
struct comedi_device {int class_dev; struct usbdux_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; int chanlist_len; int * chanlist; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;
struct TYPE_2__ {scalar_t__ status; void* length; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_8,
        struct comedi_subdevice *VAR_9,
        struct urb *VAR_10)
{
 struct usbdux_private *VAR_11 = VAR_8->private;
 struct comedi_async *VAR_12 = VAR_9->async;
 struct comedi_cmd *VAR_13 = &VAR_12->cmd;
 u8 *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_11->ao_counter--;
 if (VAR_11->ao_counter == 0) {
  VAR_11->ao_counter = VAR_11->ao_timer;

  if (VAR_13->stop_src == VAR_7 &&
      VAR_12->scans_done >= VAR_13->stop_arg) {
   VAR_12->events |= VAR_1;
   return;
  }


  VAR_14 = VAR_10->transfer_buffer;
  *VAR_14++ = VAR_13->chanlist_len;
  for (VAR_16 = 0; VAR_16 < VAR_13->chanlist_len; VAR_16++) {
   unsigned int VAR_17 = FUNC_0(VAR_13->chanlist[VAR_16]);
   unsigned short VAR_18;

   if (!FUNC_1(VAR_9, &VAR_18, 1)) {
    FUNC_3(VAR_8->class_dev, "buffer underflow\n");
    VAR_12->events |= VAR_3;
    return;
   }


   *VAR_14++ = VAR_18 & 0xff;
   *VAR_14++ = (VAR_18 >> 8) & 0xff;
   *VAR_14++ = VAR_17 << 6;
   VAR_9->readback[VAR_17] = VAR_18;
  }
 }


 if (!(VAR_12->events & VAR_0)) {
  VAR_10->transfer_buffer_length = VAR_6;
  VAR_10->dev = FUNC_2(VAR_8);
  VAR_10->status = 0;
  if (VAR_11->high_speed)
   VAR_10->interval = 8;
  else
   VAR_10->interval = 1;
  VAR_10->number_of_packets = 1;
  VAR_10->iso_frame_desc[0].offset = 0;
  VAR_10->iso_frame_desc[0].length = VAR_6;
  VAR_10->iso_frame_desc[0].status = 0;
  VAR_15 = FUNC_4(VAR_10, VAR_5);
  if (VAR_15 < 0) {
   FUNC_3(VAR_8->class_dev,
    "ao urb resubm failed in int-cont. ret=%d",
    VAR_15);
   if (VAR_15 == -VAR_4)
    FUNC_3(VAR_8->class_dev,
     "buggy USB host controller or bug in IRQ handling!\n");
   VAR_12->events |= VAR_2;
  }
 }
}

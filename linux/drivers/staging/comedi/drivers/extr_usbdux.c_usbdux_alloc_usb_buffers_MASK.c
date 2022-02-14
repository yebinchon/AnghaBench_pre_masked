
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbdux_private {int n_ai_urbs; int n_ao_urbs; void* pwm_buf_sz; struct urb* pwm_urb; scalar_t__ high_speed; struct urb** ao_urbs; struct urb** ai_urbs; void* insn_buf; void* in_buf; void* dux_commands; } ;
struct usb_device {int dummy; } ;
struct urb {int number_of_packets; int interval; void* transfer_buffer; TYPE_1__* iso_frame_desc; void* transfer_buffer_length; int complete; void* transfer_flags; int pipe; struct comedi_device* context; struct usb_device* dev; } ;
struct comedi_device {struct usbdux_private* private; } ;
struct TYPE_2__ {void* length; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 struct usb_device* FUNC_0 (struct comedi_device*) ;
 void* FUNC_1 (int,int,int ) ;
 void* FUNC_2 (void*,int ) ;
 struct urb* FUNC_3 (int,int ) ;
 int FUNC_4 (struct usb_device*,int) ;
 int FUNC_5 (struct usb_device*,int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_9)
{
 struct usb_device *VAR_10 = FUNC_0(VAR_9);
 struct usbdux_private *VAR_11 = VAR_9->private;
 struct urb *VAR_12;
 int VAR_13;

 VAR_11->dux_commands = FUNC_2(VAR_4, VAR_1);
 VAR_11->in_buf = FUNC_2(VAR_2, VAR_1);
 VAR_11->insn_buf = FUNC_2(VAR_3, VAR_1);
 VAR_11->ai_urbs = FUNC_1(VAR_11->n_ai_urbs, sizeof(void *),
       VAR_1);
 VAR_11->ao_urbs = FUNC_1(VAR_11->n_ao_urbs, sizeof(void *),
       VAR_1);
 if (!VAR_11->dux_commands || !VAR_11->in_buf || !VAR_11->insn_buf ||
     !VAR_11->ai_urbs || !VAR_11->ao_urbs)
  return -VAR_0;

 for (VAR_13 = 0; VAR_13 < VAR_11->n_ai_urbs; VAR_13++) {

  VAR_12 = FUNC_3(1, VAR_1);
  if (!VAR_12)
   return -VAR_0;
  VAR_11->ai_urbs[VAR_13] = VAR_12;

  VAR_12->dev = VAR_10;
  VAR_12->context = VAR_9;
  VAR_12->pipe = FUNC_4(VAR_10, 6);
  VAR_12->transfer_flags = VAR_6;
  VAR_12->transfer_buffer = FUNC_2(VAR_2, VAR_1);
  if (!VAR_12->transfer_buffer)
   return -VAR_0;

  VAR_12->complete = VAR_7;
  VAR_12->number_of_packets = 1;
  VAR_12->transfer_buffer_length = VAR_2;
  VAR_12->iso_frame_desc[0].offset = 0;
  VAR_12->iso_frame_desc[0].length = VAR_2;
 }

 for (VAR_13 = 0; VAR_13 < VAR_11->n_ao_urbs; VAR_13++) {

  VAR_12 = FUNC_3(1, VAR_1);
  if (!VAR_12)
   return -VAR_0;
  VAR_11->ao_urbs[VAR_13] = VAR_12;

  VAR_12->dev = VAR_10;
  VAR_12->context = VAR_9;
  VAR_12->pipe = FUNC_5(VAR_10, 2);
  VAR_12->transfer_flags = VAR_6;
  VAR_12->transfer_buffer = FUNC_2(VAR_5, VAR_1);
  if (!VAR_12->transfer_buffer)
   return -VAR_0;

  VAR_12->complete = VAR_8;
  VAR_12->number_of_packets = 1;
  VAR_12->transfer_buffer_length = VAR_5;
  VAR_12->iso_frame_desc[0].offset = 0;
  VAR_12->iso_frame_desc[0].length = VAR_5;
  if (VAR_11->high_speed)
   VAR_12->interval = 8;
  else
   VAR_12->interval = 1;
 }


 if (VAR_11->pwm_buf_sz) {
  VAR_12 = FUNC_3(0, VAR_1);
  if (!VAR_12)
   return -VAR_0;
  VAR_11->pwm_urb = VAR_12;


  VAR_12->transfer_buffer = FUNC_2(VAR_11->pwm_buf_sz,
            VAR_1);
  if (!VAR_12->transfer_buffer)
   return -VAR_0;
 }

 return 0;
}

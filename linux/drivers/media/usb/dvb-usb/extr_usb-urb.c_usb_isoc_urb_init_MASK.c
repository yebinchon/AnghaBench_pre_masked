
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int framesize; int framesperurb; int interval; } ;
struct TYPE_7__ {TYPE_2__ isoc; } ;
struct TYPE_8__ {int count; TYPE_3__ u; int endpoint; } ;
struct usb_data_stream {int urbs_initialized; TYPE_4__ props; int * dma_addr; int * buf_list; int buf_size; int udev; struct urb** urb_list; } ;
struct urb {int transfer_flags; int number_of_packets; TYPE_1__* iso_frame_desc; int transfer_dma; int transfer_buffer; int transfer_buffer_length; int interval; int pipe; int complete; struct usb_data_stream* context; int dev; } ;
struct TYPE_5__ {int offset; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 struct urb* FUNC_1 (int,int ) ;
 int FUNC_2 (struct usb_data_stream*,int,int) ;
 int FUNC_3 (struct urb*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct usb_data_stream *VAR_5)
{
 int VAR_6,VAR_7;

 if ((VAR_6 = FUNC_2(VAR_5,VAR_5->props.count,
     VAR_5->props.u.isoc.framesize*VAR_5->props.u.isoc.framesperurb)) < 0)
  return VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_5->props.count; VAR_6++) {
  struct urb *VAR_8;
  int VAR_9 = 0;

  VAR_5->urb_list[VAR_6] = FUNC_1(VAR_5->props.u.isoc.framesperurb, VAR_1);
  if (!VAR_5->urb_list[VAR_6]) {
   FUNC_0("not enough memory for urb_alloc_urb!\n");
   for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
    FUNC_3(VAR_5->urb_list[VAR_7]);
   return -VAR_0;
  }

  VAR_8 = VAR_5->urb_list[VAR_6];

  VAR_8->dev = VAR_5->udev;
  VAR_8->context = VAR_5;
  VAR_8->complete = VAR_4;
  VAR_8->pipe = FUNC_4(VAR_5->udev,VAR_5->props.endpoint);
  VAR_8->transfer_flags = VAR_2 | VAR_3;
  VAR_8->interval = VAR_5->props.u.isoc.interval;
  VAR_8->number_of_packets = VAR_5->props.u.isoc.framesperurb;
  VAR_8->transfer_buffer_length = VAR_5->buf_size;
  VAR_8->transfer_buffer = VAR_5->buf_list[VAR_6];
  VAR_8->transfer_dma = VAR_5->dma_addr[VAR_6];

  for (VAR_7 = 0; VAR_7 < VAR_5->props.u.isoc.framesperurb; VAR_7++) {
   VAR_8->iso_frame_desc[VAR_7].offset = VAR_9;
   VAR_8->iso_frame_desc[VAR_7].length = VAR_5->props.u.isoc.framesize;
   VAR_9 += VAR_5->props.u.isoc.framesize;
  }

  VAR_5->urbs_initialized++;
 }
 return 0;
}

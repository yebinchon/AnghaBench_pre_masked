
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct vb2_queue {int dummy; } ;
struct urb {int interval; int* transfer_buffer; int number_of_packets; int transfer_buffer_length; TYPE_1__* iso_frame_desc; int complete; int transfer_flags; int pipe; struct dvb_usb_device* context; TYPE_4__* dev; } ;
struct dvb_usb_device {TYPE_4__* udev; struct cxusb_medion_dev* priv; } ;
struct TYPE_7__ {int buf; } ;
struct TYPE_6__ {int * buf; int mode; } ;
struct cxusb_medion_dev {int cx25840; TYPE_3__ auxbuf; struct urb** streamurbs; TYPE_2__ bt656; int * vbuf; scalar_t__ vbuf_sequence; scalar_t__ nexturb; scalar_t__ urbcomplete; int field_order; scalar_t__ stop_streaming; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_5__ {int offset; int length; } ;


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
 int FUNC_0 (struct dvb_usb_device*,int ,int*,int,int *,int ) ;
 int FUNC_1 (struct cxusb_medion_dev*) ;
 int FUNC_2 (struct cxusb_medion_dev*,int) ;
 int FUNC_3 (struct cxusb_medion_dev*) ;
 int VAR_10 ;
 int FUNC_4 (struct cxusb_medion_dev*,int*) ;
 int FUNC_5 (struct dvb_usb_device*,int ,char*) ;
 int FUNC_6 (int *,char*,int,...) ;
 int FUNC_7 (int*) ;
 int* FUNC_8 (int,int ) ;
 int VAR_11 ;
 struct urb* FUNC_9 (int,int ) ;
 int FUNC_10 (TYPE_4__*,int) ;
 int FUNC_11 (struct urb*,int ) ;
 int FUNC_12 (int ,int ,int ,int) ;
 struct dvb_usb_device* FUNC_13 (struct vb2_queue*) ;
 int FUNC_14 (int ) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_15(struct vb2_queue *VAR_13,
       unsigned int VAR_14)
{
 struct dvb_usb_device *VAR_15 = FUNC_13(VAR_13);
 struct cxusb_medion_dev *VAR_16 = VAR_15->priv;
 u8 VAR_17[2] = { 0x03, 0x00 };
 int VAR_18, VAR_19;
 int VAR_20;

 FUNC_5(VAR_15, VAR_8, "should start streaming\n");

 if (VAR_16->stop_streaming) {

  VAR_20 = -VAR_4;
  goto ret_retbufs;
 }

 VAR_16->field_order = FUNC_1(VAR_16);

 VAR_20 = FUNC_12(VAR_16->cx25840, VAR_12, VAR_11, 1);
 if (VAR_20 != 0) {
  FUNC_6(&VAR_15->udev->dev,
   "unable to start stream (%d)\n", VAR_20);
  goto ret_retbufs;
 }

 VAR_20 = FUNC_0(VAR_15, VAR_1, VAR_17, 2,
        ((void*)0), 0);
 if (VAR_20 != 0) {
  FUNC_6(&VAR_15->udev->dev,
   "unable to start streaming (%d)\n", VAR_20);
  goto ret_unstream_cx;
 }

 VAR_20 = FUNC_4(VAR_16, &VAR_18);
 if (VAR_20 != 0)
  goto ret_unstream_md;

 for (VAR_19 = 0; VAR_19 < VAR_3; VAR_19++) {
  int VAR_21;
  u8 *VAR_22;
  struct urb *VAR_23;






  VAR_22 = FUNC_8(VAR_18 * VAR_2,
        VAR_6);
  if (!VAR_22) {
   if (VAR_19 < 2) {
    VAR_20 = -VAR_5;
    goto ret_freeab;
   }
   break;
  }

  VAR_23 = FUNC_9(VAR_18, VAR_6);
  if (!VAR_23) {
   FUNC_7(VAR_22);
   VAR_20 = -VAR_5;
   goto ret_freeu;
  }

  VAR_16->streamurbs[VAR_19] = VAR_23;
  VAR_23->dev = VAR_15->udev;
  VAR_23->context = VAR_15;
  VAR_23->pipe = FUNC_10(VAR_15->udev, 2);

  VAR_23->interval = 1;
  VAR_23->transfer_flags = VAR_9;

  VAR_23->transfer_buffer = VAR_22;

  VAR_23->complete = VAR_10;
  VAR_23->number_of_packets = VAR_18;
  VAR_23->transfer_buffer_length = VAR_18 * VAR_2;

  for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21++) {
   VAR_23->iso_frame_desc[VAR_21].offset =
    VAR_2 * VAR_21;

   VAR_23->iso_frame_desc[VAR_21].length =
    VAR_2;
  }
 }

 VAR_16->urbcomplete = 0;
 VAR_16->nexturb = 0;
 VAR_16->vbuf_sequence = 0;

 VAR_16->vbuf = ((void*)0);
 VAR_16->bt656.mode = VAR_7;
 VAR_16->bt656.buf = ((void*)0);

 for (VAR_19 = 0; VAR_19 < VAR_3; VAR_19++)
  if (VAR_16->streamurbs[VAR_19]) {
   VAR_20 = FUNC_11(VAR_16->streamurbs[VAR_19],
          VAR_6);
   if (VAR_20 != 0)
    FUNC_6(&VAR_15->udev->dev,
     "URB %d submission failed (%d)\n", VAR_19,
     VAR_20);
  }

 return 0;

ret_freeu:
 FUNC_3(VAR_16);

ret_freeab:
 FUNC_14(VAR_16->auxbuf.buf);

ret_unstream_md:
 FUNC_0(VAR_15, VAR_0, ((void*)0), 0, ((void*)0), 0);

ret_unstream_cx:
 FUNC_12(VAR_16->cx25840, VAR_12, VAR_11, 0);

ret_retbufs:
 FUNC_2(VAR_16, 1);

 return VAR_20;
}

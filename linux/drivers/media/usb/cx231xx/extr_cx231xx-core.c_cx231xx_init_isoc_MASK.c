
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {int number_of_packets; int transfer_flags; TYPE_1__* iso_frame_desc; int transfer_dma; } ;
struct cx231xx_dmaqueue {int current_field; int lines_per_field; int bytes_left_in_line; int* ps_head; int wq; scalar_t__* partial_buf; int add_ps_package_head; scalar_t__ mpeg_buffer_completed; scalar_t__ left_data_count; scalar_t__ mpeg_buffer_done; scalar_t__ lines_completed; scalar_t__ field1_done; scalar_t__ last_sav; scalar_t__ is_partial_line; scalar_t__ pos; int * p_left_data; } ;
struct TYPE_6__ {int (* isoc_copy ) (struct cx231xx*,struct urb*) ;int num_bufs; int max_pkt_size; struct urb** urb; int * transfer_buffer; int * buf; } ;
struct TYPE_5__ {int end_point_addr; TYPE_3__ isoc_ctl; struct cx231xx_dmaqueue vidq; } ;
struct cx231xx {int height; int width; int mode_tv; int dev; TYPE_2__ video_mode; int udev; } ;
struct TYPE_4__ {int offset; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cx231xx*,int,int ) ;
 int VAR_8 ;
 int FUNC_1 (struct cx231xx*) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct urb**) ;
 int * FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int,int ,int *) ;
 struct urb* FUNC_10 (int,int ) ;
 int FUNC_11 (struct urb*,int ,int,int ,int,int ,struct cx231xx_dmaqueue*,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (struct urb*,int ) ;

int FUNC_14(struct cx231xx *VAR_9, int VAR_10,
        int VAR_11, int VAR_12,
        int (*VAR_13) (struct cx231xx *VAR_14, struct urb *VAR_15))
{
 struct cx231xx_dmaqueue *VAR_16 = &VAR_9->video_mode.vidq;
 int VAR_17;
 int VAR_18, VAR_19;
 struct urb *VAR_20;
 int VAR_21, VAR_22;
 int VAR_23;


 FUNC_1(VAR_9);

 VAR_16->p_left_data = FUNC_7(4096, VAR_3);
 if (VAR_16->p_left_data == ((void*)0))
  return -VAR_1;

 VAR_9->video_mode.isoc_ctl.isoc_copy = VAR_13;
 VAR_9->video_mode.isoc_ctl.num_bufs = VAR_11;
 VAR_16->pos = 0;
 VAR_16->is_partial_line = 0;
 VAR_16->last_sav = 0;
 VAR_16->current_field = -1;
 VAR_16->field1_done = 0;
 VAR_16->lines_per_field = VAR_9->height / 2;
 VAR_16->bytes_left_in_line = VAR_9->width << 1;
 VAR_16->lines_completed = 0;
 VAR_16->mpeg_buffer_done = 0;
 VAR_16->left_data_count = 0;
 VAR_16->mpeg_buffer_completed = 0;
 VAR_16->add_ps_package_head = VAR_0;
 VAR_16->ps_head[0] = 0x00;
 VAR_16->ps_head[1] = 0x00;
 VAR_16->ps_head[2] = 0x01;
 VAR_16->ps_head[3] = 0xBA;
 for (VAR_17 = 0; VAR_17 < 8; VAR_17++)
  VAR_16->partial_buf[VAR_17] = 0;

 VAR_9->video_mode.isoc_ctl.urb =
     FUNC_5(VAR_11, sizeof(void *), VAR_3);
 if (!VAR_9->video_mode.isoc_ctl.urb) {
  FUNC_2(VAR_9->dev,
   "cannot alloc memory for usb buffers\n");
  return -VAR_1;
 }

 VAR_9->video_mode.isoc_ctl.transfer_buffer =
     FUNC_5(VAR_11, sizeof(void *), VAR_3);
 if (!VAR_9->video_mode.isoc_ctl.transfer_buffer) {
  FUNC_2(VAR_9->dev,
   "cannot allocate memory for usbtransfer\n");
  FUNC_6(VAR_9->video_mode.isoc_ctl.urb);
  return -VAR_1;
 }

 VAR_9->video_mode.isoc_ctl.max_pkt_size = VAR_12;
 VAR_9->video_mode.isoc_ctl.buf = ((void*)0);

 VAR_18 = VAR_10 * VAR_9->video_mode.isoc_ctl.max_pkt_size;

 if (VAR_9->mode_tv == 1)
  VAR_9->video_mode.end_point_addr = 0x81;
 else
  VAR_9->video_mode.end_point_addr = 0x84;



 for (VAR_17 = 0; VAR_17 < VAR_9->video_mode.isoc_ctl.num_bufs; VAR_17++) {
  VAR_20 = FUNC_10(VAR_10, VAR_3);
  if (!VAR_20) {
   FUNC_1(VAR_9);
   return -VAR_1;
  }
  VAR_9->video_mode.isoc_ctl.urb[VAR_17] = VAR_20;

  VAR_9->video_mode.isoc_ctl.transfer_buffer[VAR_17] =
      FUNC_9(VAR_9->udev, VAR_18, VAR_3,
           &VAR_20->transfer_dma);
  if (!VAR_9->video_mode.isoc_ctl.transfer_buffer[VAR_17]) {
   FUNC_2(VAR_9->dev,
    "unable to allocate %i bytes for transfer buffer %i%s\n",
    VAR_18, VAR_17,
    FUNC_3() ? " while in int" : "");
   FUNC_1(VAR_9);
   return -VAR_1;
  }
  FUNC_8(VAR_9->video_mode.isoc_ctl.transfer_buffer[VAR_17], 0, VAR_18);

  VAR_19 =
      FUNC_12(VAR_9->udev, VAR_9->video_mode.end_point_addr);

  FUNC_11(VAR_20, VAR_9->udev, VAR_19,
     VAR_9->video_mode.isoc_ctl.transfer_buffer[VAR_17],
     VAR_18, VAR_8, VAR_16, 1);

  VAR_20->number_of_packets = VAR_10;
  VAR_20->transfer_flags = VAR_6 | VAR_7;

  VAR_22 = 0;
  for (VAR_21 = 0; VAR_21 < VAR_10; VAR_21++) {
   VAR_20->iso_frame_desc[VAR_21].offset = VAR_22;
   VAR_20->iso_frame_desc[VAR_21].length =
       VAR_9->video_mode.isoc_ctl.max_pkt_size;
   VAR_22 += VAR_9->video_mode.isoc_ctl.max_pkt_size;
  }
 }

 FUNC_4(&VAR_16->wq);


 for (VAR_17 = 0; VAR_17 < VAR_9->video_mode.isoc_ctl.num_bufs; VAR_17++) {
  VAR_23 = FUNC_13(VAR_9->video_mode.isoc_ctl.urb[VAR_17],
        VAR_2);
  if (VAR_23) {
   FUNC_2(VAR_9->dev,
    "submit of urb %i failed (error=%i)\n", VAR_17,
    VAR_23);
   FUNC_1(VAR_9);
   return VAR_23;
  }
 }

 if (VAR_9->mode_tv == 0)
  FUNC_0(VAR_9, 1, VAR_4);
 else
  FUNC_0(VAR_9, 1, VAR_5);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int pipe; int transfer_dma; int transfer_flags; } ;
struct cx231xx_dmaqueue {int current_field; int lines_per_field; int bytes_left_in_line; int* ps_head; int wq; scalar_t__* partial_buf; scalar_t__ mpeg_buffer_completed; scalar_t__ left_data_count; scalar_t__ mpeg_buffer_done; scalar_t__ lines_completed; scalar_t__ field1_done; scalar_t__ last_sav; scalar_t__ is_partial_line; scalar_t__ pos; } ;
struct TYPE_3__ {int (* bulk_copy ) (struct cx231xx*,struct urb*) ;int num_bufs; int max_pkt_size; struct urb** urb; int * transfer_buffer; int * buf; } ;
struct TYPE_4__ {int end_point_addr; TYPE_1__ bulk_ctl; struct cx231xx_dmaqueue vidq; } ;
struct cx231xx {int video_input; int height; int width; int mode_tv; int dev; TYPE_2__ video_mode; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cx231xx*,int,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct cx231xx*) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int,int,int ) ;
 int FUNC_7 (struct urb**) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int,int ,int *) ;
 struct urb* FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct urb*,int ,int,int ,int,int ,struct cx231xx_dmaqueue*) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (struct urb*,int ) ;
 int FUNC_15 (struct cx231xx*,int) ;

int FUNC_16(struct cx231xx *VAR_7, int VAR_8,
        int VAR_9, int VAR_10,
        int (*VAR_11) (struct cx231xx *VAR_12, struct urb *VAR_13))
{
 struct cx231xx_dmaqueue *VAR_14 = &VAR_7->video_mode.vidq;
 int VAR_15;
 int VAR_16, VAR_17;
 struct urb *VAR_18;
 int VAR_19;

 VAR_7->video_input = VAR_7->video_input > 2 ? 2 : VAR_7->video_input;

 FUNC_1("Setting Video mux to %d\n", VAR_7->video_input);

 FUNC_15(VAR_7, VAR_7->video_input);


 FUNC_2(VAR_7);

 VAR_7->video_mode.bulk_ctl.bulk_copy = VAR_11;
 VAR_7->video_mode.bulk_ctl.num_bufs = VAR_9;
 VAR_14->pos = 0;
 VAR_14->is_partial_line = 0;
 VAR_14->last_sav = 0;
 VAR_14->current_field = -1;
 VAR_14->field1_done = 0;
 VAR_14->lines_per_field = VAR_7->height / 2;
 VAR_14->bytes_left_in_line = VAR_7->width << 1;
 VAR_14->lines_completed = 0;
 VAR_14->mpeg_buffer_done = 0;
 VAR_14->left_data_count = 0;
 VAR_14->mpeg_buffer_completed = 0;
 VAR_14->ps_head[0] = 0x00;
 VAR_14->ps_head[1] = 0x00;
 VAR_14->ps_head[2] = 0x01;
 VAR_14->ps_head[3] = 0xBA;
 for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
  VAR_14->partial_buf[VAR_15] = 0;

 VAR_7->video_mode.bulk_ctl.urb =
     FUNC_6(VAR_9, sizeof(void *), VAR_2);
 if (!VAR_7->video_mode.bulk_ctl.urb) {
  FUNC_3(VAR_7->dev,
   "cannot alloc memory for usb buffers\n");
  return -VAR_0;
 }

 VAR_7->video_mode.bulk_ctl.transfer_buffer =
     FUNC_6(VAR_9, sizeof(void *), VAR_2);
 if (!VAR_7->video_mode.bulk_ctl.transfer_buffer) {
  FUNC_3(VAR_7->dev,
   "cannot allocate memory for usbtransfer\n");
  FUNC_7(VAR_7->video_mode.bulk_ctl.urb);
  return -VAR_0;
 }

 VAR_7->video_mode.bulk_ctl.max_pkt_size = VAR_10;
 VAR_7->video_mode.bulk_ctl.buf = ((void*)0);

 VAR_16 = VAR_8 * VAR_7->video_mode.bulk_ctl.max_pkt_size;

 if (VAR_7->mode_tv == 1)
  VAR_7->video_mode.end_point_addr = 0x81;
 else
  VAR_7->video_mode.end_point_addr = 0x84;



 for (VAR_15 = 0; VAR_15 < VAR_7->video_mode.bulk_ctl.num_bufs; VAR_15++) {
  VAR_18 = FUNC_10(0, VAR_2);
  if (!VAR_18) {
   FUNC_2(VAR_7);
   return -VAR_0;
  }
  VAR_7->video_mode.bulk_ctl.urb[VAR_15] = VAR_18;
  VAR_18->transfer_flags = VAR_5;

  VAR_7->video_mode.bulk_ctl.transfer_buffer[VAR_15] =
      FUNC_9(VAR_7->udev, VAR_16, VAR_2,
         &VAR_18->transfer_dma);
  if (!VAR_7->video_mode.bulk_ctl.transfer_buffer[VAR_15]) {
   FUNC_3(VAR_7->dev,
    "unable to allocate %i bytes for transfer buffer %i%s\n",
    VAR_16, VAR_15,
    FUNC_4() ? " while in int" : "");
   FUNC_2(VAR_7);
   return -VAR_0;
  }
  FUNC_8(VAR_7->video_mode.bulk_ctl.transfer_buffer[VAR_15], 0, VAR_16);

  VAR_17 = FUNC_13(VAR_7->udev,
     VAR_7->video_mode.end_point_addr);
  FUNC_12(VAR_18, VAR_7->udev, VAR_17,
      VAR_7->video_mode.bulk_ctl.transfer_buffer[VAR_15],
      VAR_16, VAR_6, VAR_14);
 }


 VAR_19 = FUNC_11(VAR_7->udev, VAR_7->video_mode.bulk_ctl.urb[0]->pipe);
 if (VAR_19 < 0) {
  FUNC_3(VAR_7->dev,
   "failed to clear USB bulk endpoint stall/halt condition (error=%i)\n",
   VAR_19);
  FUNC_2(VAR_7);
  return VAR_19;
 }

 FUNC_5(&VAR_14->wq);


 for (VAR_15 = 0; VAR_15 < VAR_7->video_mode.bulk_ctl.num_bufs; VAR_15++) {
  VAR_19 = FUNC_14(VAR_7->video_mode.bulk_ctl.urb[VAR_15],
        VAR_1);
  if (VAR_19) {
   FUNC_3(VAR_7->dev,
    "submit of urb %i failed (error=%i)\n", VAR_15, VAR_19);
   FUNC_2(VAR_7);
   return VAR_19;
  }
 }

 if (VAR_7->mode_tv == 0)
  FUNC_0(VAR_7, 1, VAR_3);
 else
  FUNC_0(VAR_7, 1, VAR_4);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {scalar_t__ transfer_flags; } ;
struct cx231xx_dmaqueue {int current_field; int bytes_left_in_line; int wq; scalar_t__* partial_buf; scalar_t__ lines_completed; int lines_per_field; scalar_t__ last_sav; scalar_t__ is_partial_line; scalar_t__ pos; } ;
struct TYPE_3__ {int (* bulk_copy ) (struct cx231xx*,struct urb*) ;int num_bufs; int max_pkt_size; struct urb** urb; int * transfer_buffer; int * buf; } ;
struct TYPE_4__ {TYPE_1__ bulk_ctl; int end_point_addr; struct cx231xx_dmaqueue vidq; } ;
struct cx231xx {int width; int norm; int dev; TYPE_2__ vbi_mode; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cx231xx*,int,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct cx231xx*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int,int,int ) ;
 int FUNC_7 (struct urb**) ;
 int FUNC_8 (int,int ) ;
 struct urb* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct urb*,int ,int,int ,int,int ,struct cx231xx_dmaqueue*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct urb*,int ) ;

int FUNC_14(struct cx231xx *VAR_8, int VAR_9,
     int VAR_10, int VAR_11,
     int (*VAR_12) (struct cx231xx *VAR_13,
         struct urb *VAR_14))
{
 struct cx231xx_dmaqueue *VAR_15 = &VAR_8->vbi_mode.vidq;
 int VAR_16;
 int VAR_17, VAR_18;
 struct urb *VAR_19;
 int VAR_20;

 FUNC_2(VAR_8->dev, "called cx231xx_vbi_isoc\n");


 FUNC_1(VAR_8);


 FUNC_10(VAR_8->udev,
         FUNC_12(VAR_8->udev,
           VAR_8->vbi_mode.end_point_addr));

 VAR_8->vbi_mode.bulk_ctl.bulk_copy = VAR_12;
 VAR_8->vbi_mode.bulk_ctl.num_bufs = VAR_10;
 VAR_15->pos = 0;
 VAR_15->is_partial_line = 0;
 VAR_15->last_sav = 0;
 VAR_15->current_field = -1;
 VAR_15->bytes_left_in_line = VAR_8->width << 1;
 VAR_15->lines_per_field = ((VAR_8->norm & VAR_5) ?
      VAR_4 : VAR_3);
 VAR_15->lines_completed = 0;
 for (VAR_16 = 0; VAR_16 < 8; VAR_16++)
  VAR_15->partial_buf[VAR_16] = 0;

 VAR_8->vbi_mode.bulk_ctl.urb = FUNC_6(VAR_10, sizeof(void *),
          VAR_2);
 if (!VAR_8->vbi_mode.bulk_ctl.urb) {
  FUNC_3(VAR_8->dev,
   "cannot alloc memory for usb buffers\n");
  return -VAR_0;
 }

 VAR_8->vbi_mode.bulk_ctl.transfer_buffer =
     FUNC_6(VAR_10, sizeof(void *), VAR_2);
 if (!VAR_8->vbi_mode.bulk_ctl.transfer_buffer) {
  FUNC_3(VAR_8->dev,
   "cannot allocate memory for usbtransfer\n");
  FUNC_7(VAR_8->vbi_mode.bulk_ctl.urb);
  return -VAR_0;
 }

 VAR_8->vbi_mode.bulk_ctl.max_pkt_size = VAR_11;
 VAR_8->vbi_mode.bulk_ctl.buf = ((void*)0);

 VAR_17 = VAR_9 * VAR_8->vbi_mode.bulk_ctl.max_pkt_size;


 for (VAR_16 = 0; VAR_16 < VAR_8->vbi_mode.bulk_ctl.num_bufs; VAR_16++) {

  VAR_19 = FUNC_9(0, VAR_2);
  if (!VAR_19) {
   FUNC_1(VAR_8);
   return -VAR_0;
  }
  VAR_8->vbi_mode.bulk_ctl.urb[VAR_16] = VAR_19;
  VAR_19->transfer_flags = 0;

  VAR_8->vbi_mode.bulk_ctl.transfer_buffer[VAR_16] =
      FUNC_8(VAR_17, VAR_2);
  if (!VAR_8->vbi_mode.bulk_ctl.transfer_buffer[VAR_16]) {
   FUNC_3(VAR_8->dev,
    "unable to allocate %i bytes for transfer buffer %i%s\n",
    VAR_17, VAR_16,
    FUNC_4() ? " while in int" : "");
   FUNC_1(VAR_8);
   return -VAR_0;
  }

  VAR_18 = FUNC_12(VAR_8->udev, VAR_8->vbi_mode.end_point_addr);
  FUNC_11(VAR_19, VAR_8->udev, VAR_18,
      VAR_8->vbi_mode.bulk_ctl.transfer_buffer[VAR_16],
      VAR_17, VAR_7, VAR_15);
 }

 FUNC_5(&VAR_15->wq);


 for (VAR_16 = 0; VAR_16 < VAR_8->vbi_mode.bulk_ctl.num_bufs; VAR_16++) {
  VAR_20 = FUNC_13(VAR_8->vbi_mode.bulk_ctl.urb[VAR_16], VAR_1);
  if (VAR_20) {
   FUNC_3(VAR_8->dev,
    "submit of urb %i failed (error=%i)\n", VAR_16, VAR_20);
   FUNC_1(VAR_8);
   return VAR_20;
  }
 }

 FUNC_0(VAR_8, 1, VAR_6);

 return 0;
}

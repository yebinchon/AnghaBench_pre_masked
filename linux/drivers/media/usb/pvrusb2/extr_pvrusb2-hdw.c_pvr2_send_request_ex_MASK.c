
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pvr2_hdw {int cmd_debug_state; unsigned char cmd_debug_code; unsigned int cmd_debug_write_len; unsigned int cmd_debug_read_len; int ctl_write_pend_flag; int ctl_read_pend_flag; unsigned char* ctl_write_buffer; unsigned char* ctl_read_buffer; TYPE_1__* ctl_read_urb; TYPE_1__* ctl_write_urb; scalar_t__ ctl_timeout_flag; int ctl_done; int usb_dev; int flag_ok; int ctl_lock_held; } ;
struct TYPE_9__ {scalar_t__ expires; } ;
struct hdw_timer {TYPE_4__ timer; struct pvr2_hdw* hdw; } ;
struct TYPE_8__ {unsigned int actual_length; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (unsigned char*,int,unsigned int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (struct pvr2_hdw*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (TYPE_4__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ,unsigned char*,unsigned int,int ,struct pvr2_hdw*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct pvr2_hdw *VAR_17,
    unsigned int VAR_18,int VAR_19,
    void *VAR_20,unsigned int VAR_21,
    void *VAR_22,unsigned int VAR_23)
{
 unsigned int VAR_24;
 int VAR_25 = 0;
 struct hdw_timer VAR_26 = {
  .hdw = VAR_17,
 };

 if (!VAR_17->ctl_lock_held) {
  FUNC_6(VAR_12,
      "Attempted to execute control transfer without lock!!");
  return -VAR_1;
 }
 if (!VAR_17->flag_ok && !VAR_19) {
  FUNC_6(VAR_12,
      "Attempted to execute control transfer when device not ok");
  return -VAR_3;
 }
 if (!(VAR_17->ctl_read_urb && VAR_17->ctl_write_urb)) {
  if (!VAR_19) {
   FUNC_6(VAR_12,
       "Attempted to execute control transfer when USB is disconnected");
  }
  return -VAR_5;
 }


 if (!VAR_20) VAR_21 = 0;
 if (!VAR_22) VAR_23 = 0;
 if (VAR_21 > VAR_9) {
  FUNC_6(
   VAR_12,
   "Attempted to execute %d byte control-write transfer (limit=%d)",
   VAR_21,VAR_9);
  return -VAR_2;
 }
 if (VAR_23 > VAR_9) {
  FUNC_6(
   VAR_12,
   "Attempted to execute %d byte control-read transfer (limit=%d)",
   VAR_21,VAR_9);
  return -VAR_2;
 }
 if ((!VAR_21) && (!VAR_23)) {
  FUNC_6(
   VAR_12,
   "Attempted to execute null control transfer?");
  return -VAR_2;
 }


 VAR_17->cmd_debug_state = 1;
 if (VAR_21 && VAR_20)
  VAR_17->cmd_debug_code = ((unsigned char *)VAR_20)[0];
 else
  VAR_17->cmd_debug_code = 0;
 VAR_17->cmd_debug_write_len = VAR_21;
 VAR_17->cmd_debug_read_len = VAR_23;


 FUNC_3(&VAR_17->ctl_done);
 VAR_17->ctl_timeout_flag = 0;
 VAR_17->ctl_write_pend_flag = 0;
 VAR_17->ctl_read_pend_flag = 0;
 FUNC_7(&VAR_26.timer, VAR_15, 0);
 VAR_26.timer.expires = VAR_13 + VAR_18;

 if (VAR_21 && VAR_20) {
  VAR_17->cmd_debug_state = 2;

  for (VAR_24 = 0; VAR_24 < VAR_21; VAR_24++) {
   VAR_17->ctl_write_buffer[VAR_24] =
    ((unsigned char *)VAR_20)[VAR_24];
  }

  FUNC_8(VAR_17->ctl_write_urb,
      VAR_17->usb_dev,
      FUNC_10(VAR_17->usb_dev,
        VAR_11),
      VAR_17->ctl_write_buffer,
      VAR_21,
      VAR_16,
      VAR_17);
  VAR_17->ctl_write_urb->actual_length = 0;
  VAR_17->ctl_write_pend_flag = !0;
  if (FUNC_12(VAR_17->ctl_write_urb)) {
   FUNC_6(
    VAR_12,
    "Invalid write control endpoint");
   return -VAR_2;
  }
  VAR_25 = FUNC_11(VAR_17->ctl_write_urb,VAR_8);
  if (VAR_25 < 0) {
   FUNC_6(VAR_12,
       "Failed to submit write-control URB status=%d",
VAR_25);
   VAR_17->ctl_write_pend_flag = 0;
   goto done;
  }
 }

 if (VAR_23) {
  VAR_17->cmd_debug_state = 3;
  FUNC_4(VAR_17->ctl_read_buffer,0x43,VAR_23);

  FUNC_8(VAR_17->ctl_read_urb,
      VAR_17->usb_dev,
      FUNC_9(VAR_17->usb_dev,
        VAR_10),
      VAR_17->ctl_read_buffer,
      VAR_23,
      VAR_14,
      VAR_17);
  VAR_17->ctl_read_urb->actual_length = 0;
  VAR_17->ctl_read_pend_flag = !0;
  if (FUNC_12(VAR_17->ctl_read_urb)) {
   FUNC_6(
    VAR_12,
    "Invalid read control endpoint");
   return -VAR_2;
  }
  VAR_25 = FUNC_11(VAR_17->ctl_read_urb,VAR_8);
  if (VAR_25 < 0) {
   FUNC_6(VAR_12,
       "Failed to submit read-control URB status=%d",
VAR_25);
   VAR_17->ctl_read_pend_flag = 0;
   goto done;
  }
 }


 FUNC_0(&VAR_26.timer);


 VAR_17->cmd_debug_state = 4;
 while (VAR_17->ctl_write_pend_flag || VAR_17->ctl_read_pend_flag) {
  FUNC_13(&VAR_17->ctl_done);
 }
 VAR_17->cmd_debug_state = 5;


 FUNC_1(&VAR_26.timer);

 VAR_17->cmd_debug_state = 6;
 VAR_25 = 0;

 if (VAR_17->ctl_timeout_flag) {
  VAR_25 = -VAR_7;
  if (!VAR_19) {
   FUNC_6(VAR_12,
       "Timed out control-write");
  }
  goto done;
 }

 if (VAR_21) {

  if ((VAR_17->ctl_write_urb->status != 0) &&
      (VAR_17->ctl_write_urb->status != -VAR_4) &&
      (VAR_17->ctl_write_urb->status != -VAR_6) &&
      (VAR_17->ctl_write_urb->status != -VAR_0)) {


   VAR_25 = VAR_17->ctl_write_urb->status;
   if (!VAR_19) {
    FUNC_6(VAR_12,
        "control-write URB failure, status=%d",
        VAR_25);
   }
   goto done;
  }
  if (VAR_17->ctl_write_urb->actual_length < VAR_21) {

   VAR_25 = -VAR_3;
   if (!VAR_19) {
    FUNC_6(VAR_12,
        "control-write URB short, expected=%d got=%d",
        VAR_21,
        VAR_17->ctl_write_urb->actual_length);
   }
   goto done;
  }
 }
 if (VAR_23 && VAR_22) {

  if ((VAR_17->ctl_read_urb->status != 0) &&
      (VAR_17->ctl_read_urb->status != -VAR_4) &&
      (VAR_17->ctl_read_urb->status != -VAR_6) &&
      (VAR_17->ctl_read_urb->status != -VAR_0)) {


   VAR_25 = VAR_17->ctl_read_urb->status;
   if (!VAR_19) {
    FUNC_6(VAR_12,
        "control-read URB failure, status=%d",
        VAR_25);
   }
   goto done;
  }
  if (VAR_17->ctl_read_urb->actual_length < VAR_23) {

   VAR_25 = -VAR_3;
   if (!VAR_19) {
    FUNC_6(VAR_12,
        "control-read URB short, expected=%d got=%d",
        VAR_23,
        VAR_17->ctl_read_urb->actual_length);
   }
   goto done;
  }

  for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++) {
   ((unsigned char *)VAR_22)[VAR_24] =
    VAR_17->ctl_read_buffer[VAR_24];
  }
 }

 done:

 VAR_17->cmd_debug_state = 0;
 if ((VAR_25 < 0) && (!VAR_19)) {
  FUNC_5(VAR_17);
 }
 FUNC_2(&VAR_26.timer);

 return VAR_25;
}

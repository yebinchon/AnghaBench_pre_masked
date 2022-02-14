
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_device {int dummy; } ;
struct mux_tx {int len; void (* callback ) (void*) ;int urb; scalar_t__ buf; void* cb_data; } ;
struct mux_pkt_header {int packet_type; void* payload_size; void* seq_num; void* start_flag; } ;
struct mux_dev {scalar_t__ usb_state; int write_lock; int intf; struct usb_device* usbdev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 struct mux_tx* FUNC_3 (int) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,void*,int) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int * VAR_6 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,struct usb_device*,int ,scalar_t__,int,int ,struct mux_tx*) ;
 int FUNC_12 (struct usb_device*) ;
 int FUNC_13 (struct usb_device*,int) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static int FUNC_15(void *VAR_7, void *VAR_8, int VAR_9, int VAR_10,
   void (*VAR_11)(void *VAR_12), void *VAR_13)
{
 struct mux_dev *VAR_14 = VAR_7;
 struct usb_device *VAR_15 = VAR_14->usbdev;
 struct mux_pkt_header *VAR_16;
 struct mux_tx *VAR_17 = ((void*)0);
 static u32 VAR_18 = 1;
 int VAR_19;
 int VAR_20;
 unsigned long VAR_21;

 if (VAR_14->usb_state == VAR_3) {
  VAR_20 = FUNC_9(VAR_14->intf);
  if (!VAR_20)
   FUNC_10(VAR_14->intf);
 }

 FUNC_7(&VAR_14->write_lock, VAR_21);

 VAR_19 = FUNC_0(VAR_2 + VAR_9, 4);

 VAR_17 = FUNC_3(VAR_19);
 if (!VAR_17) {
  FUNC_6("alloc_mux_tx fail\n");
  FUNC_8(&VAR_14->write_lock, VAR_21);
  return -VAR_0;
 }

 VAR_16 = (struct mux_pkt_header *)VAR_17->buf;
 VAR_16->start_flag = FUNC_2(VAR_4);
 VAR_16->seq_num = FUNC_2(VAR_18++);
 VAR_16->payload_size = FUNC_2((u32)VAR_9);
 VAR_16->packet_type = FUNC_1(VAR_6[VAR_10]);

 FUNC_4(VAR_17->buf + VAR_2, VAR_8, VAR_9);
 FUNC_5(VAR_17->buf + VAR_2 + VAR_9, 0,
        VAR_19 - VAR_2 - VAR_9);

 VAR_17->len = VAR_19;
 VAR_17->callback = VAR_11;
 VAR_17->cb_data = VAR_13;

 FUNC_11(VAR_17->urb,
     VAR_15,
     FUNC_13(VAR_15, 5),
     VAR_17->buf,
     VAR_19,
     VAR_5,
     VAR_17);

 VAR_20 = FUNC_14(VAR_17->urb, VAR_1);

 FUNC_8(&VAR_14->write_lock, VAR_21);

 if (VAR_20)
  FUNC_6("usb_submit_urb Error: %d\n", VAR_20);

 FUNC_12(VAR_15);

 return VAR_20;
}

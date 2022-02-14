
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct urb {size_t* transfer_buffer; int actual_length; scalar_t__ transfer_buffer_length; int transfer_flags; int unlinked; int interval; } ;
struct u132_udev {int usb_device; } ;
struct u132_ring {scalar_t__ in_use; } ;
struct u132_endp {size_t usb_addr; int toggle_bits; int usb_endp; scalar_t__ jiffies; scalar_t__ active; struct u132_ring* ring; scalar_t__ dequeueing; struct u132* u132; } ;
struct u132 {int going; int scheduler_lock; TYPE_2__* platform_dev; struct u132_udev* udev; TYPE_1__* addr; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {size_t address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct u132*,struct u132_ring*,struct u132_endp*,struct urb*,size_t,int,void (*) (void*,struct urb*,size_t*,int,int,int,int,int,int,int,int,int)) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct u132*,struct u132_endp*) ;
 int FUNC_6 (struct u132*,struct u132_endp*,struct urb*,int) ;
 int FUNC_7 (struct u132*,struct u132_endp*,struct urb*,int) ;
 int FUNC_8 (struct u132*,struct u132_ring*) ;
 int FUNC_9 (struct u132*,struct u132_ring*,int ) ;
 int FUNC_10 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_11(void *VAR_9, struct urb *VAR_10, u8 *VAR_11,
 int VAR_12, int VAR_13, int VAR_14, int VAR_15,
 int VAR_16, int VAR_17, int VAR_18, int VAR_19, int VAR_20)
{
 struct u132_endp *VAR_21 = VAR_9;
 struct u132 *VAR_22 = VAR_21->u132;
 u8 VAR_23 = VAR_22->addr[VAR_21->usb_addr].address;
 struct u132_udev *VAR_24 = &VAR_22->udev[VAR_23];
 FUNC_3(&VAR_22->scheduler_lock);
 if (VAR_22->going > 1) {
  FUNC_0(&VAR_22->platform_dev->dev, "device has been removed %d\n"
   , VAR_22->going);
  FUNC_4(&VAR_22->scheduler_lock);
  FUNC_6(VAR_22, VAR_21, VAR_10, -VAR_1);
  return;
 } else if (VAR_21->dequeueing) {
  VAR_21->dequeueing = 0;
  FUNC_4(&VAR_22->scheduler_lock);
  FUNC_7(VAR_22, VAR_21, VAR_10, -VAR_0);
  return;
 } else if (VAR_22->going > 0) {
  FUNC_0(&VAR_22->platform_dev->dev, "device is being removed "
    "urb=%p\n", VAR_10);
  FUNC_4(&VAR_22->scheduler_lock);
  FUNC_7(VAR_22, VAR_21, VAR_10, -VAR_1);
  return;
 } else if (!VAR_10->unlinked) {
  struct u132_ring *VAR_25 = VAR_21->ring;
  u8 *VAR_26 = VAR_10->transfer_buffer + VAR_10->actual_length;
  u8 *VAR_27 = VAR_11;
  int VAR_28 = VAR_12;

  while (VAR_28-- > 0)
   *VAR_26++ = *VAR_27++;

  VAR_10->actual_length += VAR_12;
  if ((VAR_15 == VAR_2) &&
   (VAR_10->transfer_buffer_length > VAR_10->actual_length)) {
   VAR_21->toggle_bits = VAR_13;
   FUNC_10(VAR_24->usb_device, VAR_21->usb_endp, 0,
    1 & VAR_13);
   if (VAR_10->actual_length > 0) {
    int VAR_29;
    FUNC_4(&VAR_22->scheduler_lock);
    VAR_29 = FUNC_1(VAR_22, VAR_25, VAR_21, VAR_10,
     VAR_23, VAR_21->toggle_bits,
     FUNC_11);
    if (VAR_29 != 0)
     FUNC_7(VAR_22, VAR_21, VAR_10,
      VAR_29);
   } else {
    VAR_25->in_use = 0;
    VAR_21->active = 0;
    VAR_21->jiffies = VAR_8 +
     FUNC_2(VAR_10->interval);
    FUNC_8(VAR_22, VAR_25);
    FUNC_9(VAR_22, VAR_25, 0);
    FUNC_4(&VAR_22->scheduler_lock);
    FUNC_5(VAR_22, VAR_21);
   }
   return;
  } else if ((VAR_15 == VAR_4) &&
   ((VAR_10->transfer_flags & VAR_5) == 0)) {
   VAR_21->toggle_bits = VAR_13;
   FUNC_10(VAR_24->usb_device, VAR_21->usb_endp, 0,
    1 & VAR_13);
   FUNC_4(&VAR_22->scheduler_lock);
   FUNC_7(VAR_22, VAR_21, VAR_10, 0);
   return;
  } else {
   if (VAR_15 == VAR_2) {
    VAR_21->toggle_bits = VAR_13;
    FUNC_10(VAR_24->usb_device, VAR_21->usb_endp,
     0, 1 & VAR_13);
   } else if (VAR_15 == VAR_3) {
    VAR_21->toggle_bits = 0x2;
    FUNC_10(VAR_24->usb_device, VAR_21->usb_endp,
     0, 0);
   } else {
    VAR_21->toggle_bits = 0x2;
    FUNC_10(VAR_24->usb_device, VAR_21->usb_endp,
     0, 0);
    FUNC_0(&VAR_22->platform_dev->dev, "urb=%p givin"
     "g back INTERRUPT %s\n", VAR_10,
     VAR_7[VAR_15]);
   }
   FUNC_4(&VAR_22->scheduler_lock);
   FUNC_7(VAR_22, VAR_21, VAR_10,
    VAR_6[VAR_15]);
   return;
  }
 } else {
  FUNC_0(&VAR_22->platform_dev->dev, "CALLBACK called urb=%p "
    "unlinked=%d\n", VAR_10, VAR_10->unlinked);
  FUNC_4(&VAR_22->scheduler_lock);
  FUNC_7(VAR_22, VAR_21, VAR_10, 0);
  return;
 }
}

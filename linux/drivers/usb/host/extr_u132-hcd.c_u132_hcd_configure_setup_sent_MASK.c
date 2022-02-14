
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct urb {int unlinked; int pipe; } ;
struct u132_ring {int number; } ;
struct u132_endp {size_t usb_addr; int usb_endp; struct u132_ring* ring; scalar_t__ dequeueing; struct u132* u132; } ;
struct u132 {int going; int scheduler_lock; TYPE_2__* platform_dev; TYPE_1__* addr; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct u132*,struct u132_endp*,struct urb*,int) ;
 int FUNC_4 (struct u132*,struct u132_endp*,struct urb*,int) ;
 int FUNC_5 (TYPE_2__*,int ,struct u132_endp*,struct urb*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_4, struct urb *VAR_5, u8 *VAR_6,
 int VAR_7, int VAR_8, int VAR_9, int VAR_10,
 int VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
 struct u132_endp *VAR_16 = VAR_4;
 struct u132 *VAR_17 = VAR_16->u132;
 u8 VAR_18 = VAR_17->addr[VAR_16->usb_addr].address;
 FUNC_1(&VAR_17->scheduler_lock);
 if (VAR_17->going > 1) {
  FUNC_0(&VAR_17->platform_dev->dev, "device has been removed %d\n"
   , VAR_17->going);
  FUNC_2(&VAR_17->scheduler_lock);
  FUNC_3(VAR_17, VAR_16, VAR_5, -VAR_1);
  return;
 } else if (VAR_16->dequeueing) {
  VAR_16->dequeueing = 0;
  FUNC_2(&VAR_17->scheduler_lock);
  FUNC_4(VAR_17, VAR_16, VAR_5, -VAR_0);
  return;
 } else if (VAR_17->going > 0) {
  FUNC_0(&VAR_17->platform_dev->dev, "device is being removed "
    "urb=%p\n", VAR_5);
  FUNC_2(&VAR_17->scheduler_lock);
  FUNC_4(VAR_17, VAR_16, VAR_5, -VAR_1);
  return;
 } else if (!VAR_5->unlinked) {
  if (FUNC_6(VAR_5->pipe)) {
   int VAR_19;
   struct u132_ring *VAR_20 = VAR_16->ring;
   FUNC_2(&VAR_17->scheduler_lock);
   VAR_19 = FUNC_5(VAR_17->platform_dev,
    VAR_20->number, VAR_16, VAR_5, VAR_18,
    VAR_16->usb_endp, 0,
    VAR_3);
   if (VAR_19 != 0)
    FUNC_4(VAR_17, VAR_16, VAR_5, VAR_19);
   return;
  } else {
   int VAR_21;
   struct u132_ring *VAR_22 = VAR_16->ring;
   FUNC_2(&VAR_17->scheduler_lock);
   VAR_21 = FUNC_5(VAR_17->platform_dev,
    VAR_22->number, VAR_16, VAR_5, VAR_18,
    VAR_16->usb_endp, 0,
    VAR_2);
   if (VAR_21 != 0)
    FUNC_4(VAR_17, VAR_16, VAR_5, VAR_21);
   return;
  }
 } else {
  FUNC_0(&VAR_17->platform_dev->dev, "CALLBACK called urb=%p "
    "unlinked=%d\n", VAR_5, VAR_5->unlinked);
  FUNC_2(&VAR_17->scheduler_lock);
  FUNC_4(VAR_17, VAR_16, VAR_5, 0);
  return;
 }
}

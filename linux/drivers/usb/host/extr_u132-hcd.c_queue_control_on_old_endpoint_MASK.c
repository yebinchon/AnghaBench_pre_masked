
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct usb_device {size_t devnum; } ;
struct urb {struct u132* hcpriv; scalar_t__ setup_packet; int pipe; } ;
struct u132_urbq {struct urb* urb; int urb_more; } ;
struct u132_udev {int enumeration; int udev_number; size_t usb_addr; struct usb_device* usb_device; int * endp_number_out; int * endp_number_in; } ;
struct u132_endp {int udev_number; int urb_more; scalar_t__ queue_size; int queue_last; struct urb** urb_list; int endp_number; } ;
struct u132_addr {int address; } ;
struct u132 {struct u132_udev* udev; struct u132_addr* addr; TYPE_1__* platform_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 struct u132_urbq* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct u132*,struct u132_udev*) ;
 int FUNC_4 (struct u132*,struct u132_udev*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct u132 *VAR_6,
 struct urb *VAR_7,
 struct usb_device *VAR_8, struct u132_endp *VAR_9, u8 VAR_10,
 u8 VAR_11)
{
 if (VAR_10 == 0) {
  if (FUNC_5(VAR_7->pipe)) {
   VAR_7->hcpriv = VAR_6;
   if (VAR_9->queue_size++ < VAR_2) {
    VAR_9->urb_list[VAR_1 &
     VAR_9->queue_last++] = VAR_7;
   } else {
    struct u132_urbq *VAR_12 =
     FUNC_1(sizeof(struct u132_urbq),
     VAR_4);
    if (VAR_12 == ((void*)0)) {
     VAR_9->queue_size -= 1;
     return -VAR_3;
    } else {
     FUNC_2(&VAR_12->urb_more,
      &VAR_9->urb_more);
     VAR_12->urb = VAR_7;
    }
   }
   return 0;
  } else {
   struct u132_addr *VAR_13 = &VAR_6->addr[VAR_8->devnum];
   int VAR_14 = VAR_5;
   int VAR_15 = 0;
   while (--VAR_14 > 0) {
    struct u132_udev *VAR_16 = &VAR_6->udev[++VAR_15];
    if (VAR_16->usb_device) {
     continue;
    } else {
     VAR_16->enumeration = 1;
     VAR_6->addr[0].address = VAR_15;
     VAR_9->udev_number = VAR_15;
     VAR_16->udev_number = VAR_15;
     VAR_16->usb_addr = VAR_8->devnum;
     FUNC_4(VAR_6, VAR_16);
     VAR_16->endp_number_in[VAR_11] =
      VAR_9->endp_number;
     FUNC_3(VAR_6, VAR_16);
     VAR_16->endp_number_out[VAR_11] =
      VAR_9->endp_number;
     VAR_16->usb_device = VAR_8;
     ((u8 *) (VAR_7->setup_packet))[2] =
      VAR_13->address = VAR_15;
     FUNC_3(VAR_6, VAR_16);
     break;
    }
   }
   if (VAR_14 == 0) {
    FUNC_0(&VAR_6->platform_dev->dev, "run out of d"
     "evice space\n");
    return -VAR_0;
   }
   VAR_7->hcpriv = VAR_6;
   if (VAR_9->queue_size++ < VAR_2) {
    VAR_9->urb_list[VAR_1 &
     VAR_9->queue_last++] = VAR_7;
   } else {
    struct u132_urbq *VAR_17 =
     FUNC_1(sizeof(struct u132_urbq),
     VAR_4);
    if (VAR_17 == ((void*)0)) {
     VAR_9->queue_size -= 1;
     return -VAR_3;
    } else {
     FUNC_2(&VAR_17->urb_more,
      &VAR_9->urb_more);
     VAR_17->urb = VAR_7;
    }
   }
   return 0;
  }
 } else {
  u8 VAR_18 = VAR_6->addr[VAR_10].address;
  struct u132_udev *VAR_19 = &VAR_6->udev[VAR_18];
  VAR_7->hcpriv = VAR_6;
  if (VAR_19->enumeration != 2)
   VAR_19->enumeration = 2;
  if (VAR_9->queue_size++ < VAR_2) {
   VAR_9->urb_list[VAR_1 & VAR_9->queue_last++] =
    VAR_7;
  } else {
   struct u132_urbq *VAR_20 =
    FUNC_1(sizeof(struct u132_urbq), VAR_4);
   if (VAR_20 == ((void*)0)) {
    VAR_9->queue_size -= 1;
    return -VAR_3;
   } else {
    FUNC_2(&VAR_20->urb_more, &VAR_9->urb_more);
    VAR_20->urb = VAR_7;
   }
  }
  return 0;
 }
}

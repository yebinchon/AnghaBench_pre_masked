
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usb_device {int dummy; } ;
struct urb {struct u132* hcpriv; int pipe; TYPE_1__* ep; } ;
struct u132_udev {int* endp_number_in; int* endp_number_out; int enumeration; } ;
struct u132_ring {int length; struct u132_endp* curr_endp; } ;
struct TYPE_6__ {int slock; } ;
struct u132_endp {int endp_number; int udev_number; int usb_addr; int usb_endp; int input; int output; int queue_size; TYPE_3__ queue_lock; scalar_t__ queue_last; struct urb** urb_list; scalar_t__ queue_next; void* pipetype; TYPE_1__* hep; struct u132* u132; scalar_t__ delayed; scalar_t__ active; scalar_t__ edset_flush; scalar_t__ dequeueing; int endp_ring; struct u132_ring* ring; int urb_more; int scheduler; } ;
struct u132 {int num_endpoints; struct u132_udev* udev; TYPE_2__* addr; struct u132_ring* ring; struct u132_endp** endp; } ;
typedef int gfp_t ;
struct TYPE_5__ {int address; } ;
struct TYPE_4__ {struct u132_endp* hcpriv; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct u132_endp*) ;
 struct u132_endp* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct u132*,struct u132_endp*) ;
 int FUNC_9 (struct u132*,struct u132_endp*) ;
 int FUNC_10 (struct u132*,struct u132_endp*,int ) ;
 int VAR_2 ;
 int FUNC_11 (struct u132*) ;
 int FUNC_12 (struct u132*,struct u132_udev*) ;
 int FUNC_13 (struct u132*,struct u132_udev*) ;
 int FUNC_14 (int ,struct urb*) ;
 void* FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct u132 *VAR_3,
 struct urb *VAR_4,
 struct usb_device *VAR_5, u8 VAR_6, u8 VAR_7,
 gfp_t VAR_8)
{
 struct u132_ring *VAR_9;
 unsigned long VAR_10;
 int VAR_11;
 u8 VAR_12;
 struct u132_endp *VAR_13 = FUNC_3(sizeof(struct u132_endp), VAR_8);

 if (!VAR_13)
  return -VAR_1;

 FUNC_5(&VAR_13->queue_lock.slock);
 FUNC_6(&VAR_13->queue_lock.slock, VAR_10);
 VAR_11 = FUNC_14(FUNC_11(VAR_3), VAR_4);
 if (VAR_11) {
  FUNC_7(&VAR_13->queue_lock.slock, VAR_10);
  FUNC_2(VAR_13);
  return VAR_11;
 }

 VAR_12 = ++VAR_3->num_endpoints;
 VAR_4->ep->hcpriv = VAR_3->endp[VAR_12 - 1] = VAR_13;
 FUNC_0(&VAR_13->scheduler, VAR_2);
 FUNC_1(&VAR_13->urb_more);
 VAR_9 = VAR_13->ring = &VAR_3->ring[0];
 if (VAR_9->curr_endp) {
  FUNC_4(&VAR_13->endp_ring, &VAR_9->curr_endp->endp_ring);
 } else {
  FUNC_1(&VAR_13->endp_ring);
  VAR_9->curr_endp = VAR_13;
 }
 VAR_9->length += 1;
 VAR_13->dequeueing = 0;
 VAR_13->edset_flush = 0;
 VAR_13->active = 0;
 VAR_13->delayed = 0;
 VAR_13->endp_number = VAR_12;
 VAR_13->u132 = VAR_3;
 VAR_13->hep = VAR_4->ep;
 FUNC_9(VAR_3, VAR_13);
 FUNC_8(VAR_3, VAR_13);
 if (VAR_6 == 0) {
  u8 VAR_14 = VAR_3->addr[VAR_6].address;
  struct u132_udev *VAR_15 = &VAR_3->udev[VAR_14];
  VAR_13->udev_number = VAR_14;
  VAR_13->usb_addr = VAR_6;
  VAR_13->usb_endp = VAR_7;
  VAR_13->input = 1;
  VAR_13->output = 1;
  VAR_13->pipetype = FUNC_15(VAR_4->pipe);
  FUNC_13(VAR_3, VAR_15);
  FUNC_12(VAR_3, VAR_15);
  VAR_15->endp_number_in[VAR_7] = VAR_12;
  VAR_15->endp_number_out[VAR_7] = VAR_12;
  VAR_4->hcpriv = VAR_3;
  VAR_13->queue_size = 1;
  VAR_13->queue_last = 0;
  VAR_13->queue_next = 0;
  VAR_13->urb_list[VAR_0 & VAR_13->queue_last++] = VAR_4;
  FUNC_7(&VAR_13->queue_lock.slock, VAR_10);
  FUNC_10(VAR_3, VAR_13, 0);
  return 0;
 } else {
  u8 VAR_16 = VAR_3->addr[VAR_6].address;
  struct u132_udev *VAR_17 = &VAR_3->udev[VAR_16];
  VAR_13->udev_number = VAR_16;
  VAR_13->usb_addr = VAR_6;
  VAR_13->usb_endp = VAR_7;
  VAR_13->input = 1;
  VAR_13->output = 1;
  VAR_13->pipetype = FUNC_15(VAR_4->pipe);
  FUNC_12(VAR_3, VAR_17);
  VAR_17->enumeration = 2;
  VAR_17->endp_number_in[VAR_7] = VAR_12;
  VAR_17->endp_number_out[VAR_7] = VAR_12;
  VAR_4->hcpriv = VAR_3;
  VAR_13->queue_size = 1;
  VAR_13->queue_last = 0;
  VAR_13->queue_next = 0;
  VAR_13->urb_list[VAR_0 & VAR_13->queue_last++] = VAR_4;
  FUNC_7(&VAR_13->queue_lock.slock, VAR_10);
  FUNC_10(VAR_3, VAR_13, 0);
  return 0;
 }
}

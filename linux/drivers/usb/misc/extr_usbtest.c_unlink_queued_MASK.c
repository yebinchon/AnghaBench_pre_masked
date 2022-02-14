
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct usbtest_dev {TYPE_1__* intf; } ;
struct usb_device {int dummy; } ;
struct urb {int dummy; } ;
struct queued_ctx {unsigned int num; int status; TYPE_2__** urbs; int complete; int pending; } ;
typedef int dma_addr_t ;
struct TYPE_11__ {int transfer_flags; int pipe; int transfer_dma; } ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int,int) ;
 int FUNC_6 (int *) ;
 TYPE_2__** FUNC_7 (unsigned int,int,int ) ;
 int FUNC_8 (TYPE_2__**) ;
 int FUNC_9 (void*,int ,unsigned int) ;
 int FUNC_10 (TYPE_2__*) ;
 struct usb_device* FUNC_11 (struct usbtest_dev*) ;
 int VAR_4 ;
 void* FUNC_12 (struct usb_device*,unsigned int,int ,int *) ;
 TYPE_2__* FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_2__*,struct usb_device*,int,void*,unsigned int,int ,struct queued_ctx*) ;
 int FUNC_15 (struct usb_device*,unsigned int,void*,int ) ;
 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (TYPE_2__*,int ) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct usbtest_dev *VAR_5, int VAR_6, unsigned VAR_7,
  unsigned VAR_8)
{
 struct queued_ctx VAR_9;
 struct usb_device *VAR_10 = FUNC_11(VAR_5);
 void *VAR_11;
 dma_addr_t VAR_12;
 int VAR_13;
 int VAR_14 = -VAR_0;

 FUNC_6(&VAR_9.complete);
 FUNC_3(&VAR_9.pending, 1);
 VAR_9.num = VAR_7;
 VAR_9.status = 0;

 VAR_11 = FUNC_12(VAR_10, VAR_8, VAR_1, &VAR_12);
 if (!VAR_11)
  return VAR_14;
 FUNC_9(VAR_11, 0, VAR_8);


 VAR_9.urbs = FUNC_7(VAR_7, sizeof(struct urb *), VAR_1);
 if (!VAR_9.urbs)
  goto free_buf;
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  VAR_9.urbs[VAR_13] = FUNC_13(0, VAR_1);
  if (!VAR_9.urbs[VAR_13])
   goto free_urbs;
  FUNC_14(VAR_9.urbs[VAR_13], VAR_10, VAR_6, VAR_11, VAR_8,
    VAR_4, &VAR_9);
  VAR_9.urbs[VAR_13]->transfer_dma = VAR_12;
  VAR_9.urbs[VAR_13]->transfer_flags = VAR_2;

  if (FUNC_17(VAR_9.urbs[VAR_13]->pipe)) {
   FUNC_10(VAR_9.urbs[VAR_13]);
   VAR_9.urbs[VAR_13]->transfer_flags |= VAR_3;
  }
 }


 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  FUNC_2(&VAR_9.pending);
  VAR_14 = FUNC_18(VAR_9.urbs[VAR_13], VAR_1);
  if (VAR_14 != 0) {
   FUNC_5(&VAR_5->intf->dev, "submit urbs[%d] fail %d\n",
     VAR_13, VAR_14);
   FUNC_0(&VAR_9.pending);
   VAR_9.status = VAR_14;
   break;
  }
 }
 if (VAR_13 == VAR_7) {
  FUNC_19(VAR_9.urbs[VAR_7 - 4]);
  FUNC_19(VAR_9.urbs[VAR_7 - 2]);
 } else {
  while (--VAR_13 >= 0)
   FUNC_19(VAR_9.urbs[VAR_13]);
 }

 if (FUNC_1(&VAR_9.pending))
  FUNC_4(&VAR_9.complete);
 FUNC_20(&VAR_9.complete);
 VAR_14 = VAR_9.status;

 free_urbs:
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
  FUNC_16(VAR_9.urbs[VAR_13]);
 FUNC_8(VAR_9.urbs);
 free_buf:
 FUNC_15(VAR_10, VAR_8, VAR_11, VAR_12);
 return VAR_14;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_request {scalar_t__ length; scalar_t__ actual; int status; int buf; int complete; } ;
struct usb_ep {int dummy; } ;
struct s3c_hsudc_req {int queue; } ;
struct s3c_hsudc_ep {int queue; int stopped; int bEndpointAddress; struct s3c_hsudc* dev; } ;
struct TYPE_2__ {scalar_t__ speed; } ;
struct s3c_hsudc {int regs; int lock; int ep0state; TYPE_1__ gadget; int driver; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct s3c_hsudc_ep*) ;
 scalar_t__ FUNC_1 (struct s3c_hsudc_ep*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct s3c_hsudc_ep* FUNC_4 (struct usb_ep*) ;
 struct s3c_hsudc_req* FUNC_5 (struct usb_request*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct s3c_hsudc_ep*,struct s3c_hsudc_req*,int ) ;
 int FUNC_8 (struct s3c_hsudc_ep*,struct s3c_hsudc_req*) ;
 int FUNC_9 (struct s3c_hsudc_ep*,struct s3c_hsudc_req*) ;
 int FUNC_10 (struct s3c_hsudc*,int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct usb_ep *VAR_9, struct usb_request *VAR_10,
   gfp_t VAR_11)
{
 struct s3c_hsudc_req *VAR_12;
 struct s3c_hsudc_ep *VAR_13;
 struct s3c_hsudc *VAR_14;
 unsigned long VAR_15;
 u32 VAR_16;
 u32 VAR_17;

 VAR_12 = FUNC_5(VAR_10);
 if ((!VAR_10 || !VAR_10->complete || !VAR_10->buf ||
  !FUNC_3(&VAR_12->queue)))
  return -VAR_1;

 VAR_13 = FUNC_4(VAR_9);
 VAR_14 = VAR_13->dev;
 if (!VAR_14->driver || VAR_14->gadget.speed == VAR_7)
  return -VAR_2;

 FUNC_11(&VAR_14->lock, VAR_15);
 FUNC_10(VAR_14, VAR_13->bEndpointAddress);

 VAR_10->status = -VAR_0;
 VAR_10->actual = 0;

 if (!FUNC_0(VAR_13) && VAR_10->length == 0) {
  VAR_14->ep0state = VAR_8;
  FUNC_7(VAR_13, VAR_12, 0);
  FUNC_12(&VAR_14->lock, VAR_15);
  return 0;
 }

 if (FUNC_3(&VAR_13->queue) && !VAR_13->stopped) {
  VAR_16 = (FUNC_0(VAR_13)) ? VAR_4 : VAR_3;
  if (FUNC_1(VAR_13)) {
   VAR_17 = FUNC_6(VAR_14->regs + VAR_16);
   if (!(VAR_17 & VAR_6) &&
    (FUNC_9(VAR_13, VAR_12) == 1))
    VAR_12 = ((void*)0);
  } else {
   VAR_17 = FUNC_6(VAR_14->regs + VAR_16);
   if ((VAR_17 & VAR_5)
       && (FUNC_8(VAR_13, VAR_12) == 1))
    VAR_12 = ((void*)0);
  }
 }

 if (VAR_12)
  FUNC_2(&VAR_12->queue, &VAR_13->queue);

 FUNC_12(&VAR_14->lock, VAR_15);
 return 0;
}

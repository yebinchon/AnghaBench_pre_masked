
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {scalar_t__ actual; int status; int length; } ;
struct usb_ep {int dummy; } ;
struct renesas_usb3_request {int queue; } ;
struct renesas_usb3_ep {int num; int queue; } ;
struct renesas_usb3 {int lock; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct renesas_usb3* FUNC_4 (struct renesas_usb3_ep*) ;
 int FUNC_5 (struct renesas_usb3_ep*,struct renesas_usb3_request*) ;
 int FUNC_6 (struct renesas_usb3_ep*,struct renesas_usb3_request*) ;
 int FUNC_7 (struct renesas_usb3*) ;
 struct renesas_usb3_ep* FUNC_8 (struct usb_ep*) ;
 struct renesas_usb3_request* FUNC_9 (struct usb_request*) ;

__attribute__((used)) static int FUNC_10(struct usb_ep *VAR_1, struct usb_request *VAR_2,
     gfp_t VAR_3)
{
 struct renesas_usb3_ep *VAR_4 = FUNC_8(VAR_1);
 struct renesas_usb3_request *VAR_5 = FUNC_9(VAR_2);
 struct renesas_usb3 *VAR_6 = FUNC_4(VAR_4);
 unsigned long VAR_7;

 FUNC_0(FUNC_7(VAR_6), "ep_queue: ep%2d, %u\n", VAR_4->num,
  VAR_2->length);

 VAR_2->status = -VAR_0;
 VAR_2->actual = 0;
 FUNC_2(&VAR_6->lock, VAR_7);
 FUNC_1(&VAR_5->queue, &VAR_4->queue);
 FUNC_3(&VAR_6->lock, VAR_7);

 if (!VAR_4->num)
  FUNC_5(VAR_4, VAR_5);
 else
  FUNC_6(VAR_4, VAR_5);

 return 0;
}

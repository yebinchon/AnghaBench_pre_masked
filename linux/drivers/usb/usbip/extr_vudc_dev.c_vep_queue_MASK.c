
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vudc {int lock; } ;
struct vrequest {int req_entry; } ;
struct vep {int req_queue; } ;
struct usb_request {int status; scalar_t__ actual; } ;
struct usb_ep {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct vudc* FUNC_0 (struct vep*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct vep* FUNC_4 (struct usb_ep*) ;
 struct vrequest* FUNC_5 (struct usb_request*) ;

__attribute__((used)) static int FUNC_6(struct usb_ep *VAR_2, struct usb_request *VAR_3,
  gfp_t VAR_4)
{
 struct vep *VAR_5;
 struct vrequest *VAR_6;
 struct vudc *VAR_7;
 unsigned long VAR_8;

 if (!VAR_2 || !VAR_3)
  return -VAR_1;

 VAR_5 = FUNC_4(VAR_2);
 VAR_6 = FUNC_5(VAR_3);
 VAR_7 = FUNC_0(VAR_5);

 FUNC_2(&VAR_7->lock, VAR_8);
 VAR_3->actual = 0;
 VAR_3->status = -VAR_0;

 FUNC_1(&VAR_6->req_entry, &VAR_5->req_queue);
 FUNC_3(&VAR_7->lock, VAR_8);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct usba_request {struct usb_request req; int queue; } ;
struct usb_ep {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int ,char*,struct usb_ep*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct usba_request* FUNC_2 (int,int ) ;

__attribute__((used)) static struct usb_request *
FUNC_3(struct usb_ep *VAR_1, gfp_t VAR_2)
{
 struct usba_request *VAR_3;

 FUNC_0(VAR_0, "ep_alloc_request: %p, 0x%x\n", VAR_1, VAR_2);

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_2);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(&VAR_3->queue);

 return &VAR_3->req;
}

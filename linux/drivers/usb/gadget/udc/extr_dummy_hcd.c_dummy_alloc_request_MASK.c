
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;
struct dummy_request {struct usb_request req; int queue; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct dummy_request* FUNC_1 (int,int ) ;

__attribute__((used)) static struct usb_request *FUNC_2(struct usb_ep *VAR_0,
  gfp_t VAR_1)
{
 struct dummy_request *VAR_2;

 if (!VAR_0)
  return ((void*)0);

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_1);
 if (!VAR_2)
  return ((void*)0);
 FUNC_0(&VAR_2->queue);
 return &VAR_2->req;
}

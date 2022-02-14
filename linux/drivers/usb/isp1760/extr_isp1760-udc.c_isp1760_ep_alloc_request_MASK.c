
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;
struct isp1760_request {struct usb_request req; } ;
typedef int gfp_t ;


 struct isp1760_request* FUNC_0 (int,int ) ;

__attribute__((used)) static struct usb_request *FUNC_1(struct usb_ep *VAR_0,
          gfp_t VAR_1)
{
 struct isp1760_request *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_1);
 if (!VAR_2)
  return ((void*)0);

 return &VAR_2->req;
}

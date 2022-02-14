
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct renesas_usb3_request {struct usb_request req; int queue; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct renesas_usb3_request* FUNC_1 (int,int ) ;

__attribute__((used)) static struct usb_request *FUNC_2(gfp_t VAR_0)
{
 struct renesas_usb3_request *VAR_1;

 VAR_1 = FUNC_1(sizeof(struct renesas_usb3_request), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(&VAR_1->queue);

 return &VAR_1->req;
}

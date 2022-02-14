
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dma; } ;
struct usb_ep {int dummy; } ;
struct nbu2ss_req {struct usb_request req; int queue; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct nbu2ss_req* FUNC_1 (int,int ) ;

__attribute__((used)) static struct usb_request *FUNC_2(struct usb_ep *VAR_1,
         gfp_t VAR_2)
{
 struct nbu2ss_req *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_2);
 if (!VAR_3)
  return ((void*)0);




 FUNC_0(&VAR_3->queue);

 return &VAR_3->req;
}

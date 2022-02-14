
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;
struct cdns3_request {struct usb_request request; struct cdns3_endpoint* priv_ep; } ;
struct cdns3_endpoint {int dummy; } ;
typedef int gfp_t ;


 struct cdns3_endpoint* FUNC_0 (struct usb_ep*) ;
 struct cdns3_request* FUNC_1 (int,int ) ;
 int FUNC_2 (struct cdns3_request*) ;

struct usb_request *FUNC_3(struct usb_ep *VAR_0,
        gfp_t VAR_1)
{
 struct cdns3_endpoint *VAR_2 = FUNC_0(VAR_0);
 struct cdns3_request *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->priv_ep = VAR_2;

 FUNC_2(VAR_3);
 return &VAR_3->request;
}

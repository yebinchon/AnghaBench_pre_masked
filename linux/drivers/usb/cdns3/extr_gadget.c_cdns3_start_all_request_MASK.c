
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int list; } ;
struct cdns3_endpoint {int flags; int pending_req_list; int deferred_req_list; } ;
struct cdns3_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cdns3_endpoint*,struct usb_request*) ;
 struct usb_request* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct cdns3_device *VAR_1,
       struct cdns3_endpoint *VAR_2)
{
 struct usb_request *VAR_3;
 int VAR_4 = 0;

 while (!FUNC_4(&VAR_2->deferred_req_list)) {
  VAR_3 = FUNC_1(&VAR_2->deferred_req_list);

  VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (VAR_4)
   return VAR_4;

  FUNC_3(&VAR_3->list);
  FUNC_2(&VAR_3->list,
         &VAR_2->pending_req_list);
 }

 VAR_2->flags &= ~VAR_0;
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {scalar_t__ length; scalar_t__ actual; int list; int status; } ;
struct cdns3_request {int flags; struct usb_request request; } ;
struct cdns3_endpoint {int flags; int * descmis_req; int deferred_req_list; } ;
struct cdns3_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct usb_request* FUNC_0 (int *) ;
 int FUNC_1 (struct cdns3_device*,struct cdns3_endpoint*) ;
 int FUNC_2 (struct cdns3_endpoint*,struct usb_request*) ;
 int FUNC_3 (int *) ;

struct usb_request *FUNC_4(struct cdns3_device *VAR_4,
           struct cdns3_endpoint *VAR_5,
           struct cdns3_request *VAR_6)
{
 if (VAR_5->flags & VAR_2 &&
     VAR_6->flags & VAR_3) {
  struct usb_request *VAR_7;

  VAR_7 = FUNC_0(&VAR_5->deferred_req_list);

  VAR_5->descmis_req = ((void*)0);

  if (!VAR_7)
   return ((void*)0);

  FUNC_2(VAR_5, VAR_7);
  if (!(VAR_5->flags & VAR_1) &&
      VAR_7->length != VAR_7->actual) {

   return ((void*)0);
  }

  if (VAR_7->status == -VAR_0)
   VAR_7->status = 0;

  FUNC_3(&VAR_7->list);
  FUNC_1(VAR_4, VAR_5);
  return VAR_7;
 }

 return &VAR_6->request;
}

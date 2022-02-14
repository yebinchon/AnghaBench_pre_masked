
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int status; int list; scalar_t__ actual; } ;
struct usb_ep {int desc; } ;
struct cdns3_request {int dummy; } ;
struct cdns3_endpoint {int flags; int deferred_req_list; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {scalar_t__ dev_ver; scalar_t__ hw_configured_flag; int sysdev; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cdns3_request*) ;
 int FUNC_1 (struct cdns3_device*,struct cdns3_endpoint*) ;
 int FUNC_2 (struct cdns3_device*,struct cdns3_endpoint*,struct cdns3_request*) ;
 struct cdns3_endpoint* FUNC_3 (struct usb_ep*) ;
 int FUNC_4 (int *,int *) ;
 struct cdns3_request* FUNC_5 (struct usb_request*) ;
 int FUNC_6 (struct cdns3_request*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct usb_request*,int ) ;

__attribute__((used)) static int FUNC_9(struct usb_ep *VAR_4,
       struct usb_request *VAR_5,
       gfp_t VAR_6)
{
 struct cdns3_endpoint *VAR_7 = FUNC_3(VAR_4);
 struct cdns3_device *VAR_8 = VAR_7->cdns3_dev;
 struct cdns3_request *VAR_9;
 int VAR_10 = 0;

 VAR_5->actual = 0;
 VAR_5->status = -VAR_1;
 VAR_9 = FUNC_5(VAR_5);
 FUNC_6(VAR_9);

 if (VAR_8->dev_ver < VAR_0) {
  VAR_10 = FUNC_2(VAR_8, VAR_7,
      VAR_9);

  if (VAR_10 == VAR_1)
   return 0;
 }

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_8(VAR_8->sysdev, VAR_5,
         FUNC_7(VAR_4->desc));
 if (VAR_10)
  return VAR_10;

 FUNC_4(&VAR_5->list, &VAR_7->deferred_req_list);






 if (VAR_8->hw_configured_flag && !(VAR_7->flags & VAR_2) &&
     !(VAR_7->flags & VAR_3))
  FUNC_1(VAR_8, VAR_7);

 return 0;
}

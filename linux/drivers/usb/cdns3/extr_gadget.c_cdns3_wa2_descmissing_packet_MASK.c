
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_request {int dummy; } ;
struct TYPE_4__ {int length; int buf; } ;
struct cdns3_request {TYPE_2__ request; int flags; } ;
struct cdns3_endpoint {int flags; scalar_t__ wa2_counter; TYPE_1__* cdns3_dev; struct cdns3_request* descmis_req; int endpoint; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 struct usb_request* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct usb_request*) ;
 int FUNC_3 (struct cdns3_endpoint*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 struct cdns3_request* FUNC_6 (struct usb_request*) ;
 int FUNC_7 (struct cdns3_endpoint*,char*) ;

__attribute__((used)) static void FUNC_8(struct cdns3_endpoint *VAR_7)
{
 struct cdns3_request *VAR_8;
 struct usb_request *VAR_9;

 if (VAR_7->flags & VAR_2) {
  VAR_7->flags &= ~VAR_2;
  VAR_7->flags |= VAR_3;
 }

 FUNC_7(VAR_7, "Description Missing detected\n");

 if (VAR_7->wa2_counter >= VAR_1)
  FUNC_3(VAR_7);

 VAR_9 = FUNC_1(&VAR_7->endpoint,
      VAR_4);
 if (!VAR_9)
  goto err;

 VAR_8 = FUNC_6(VAR_9);
 VAR_8->flags |= VAR_5;







 if (VAR_7->descmis_req)
  VAR_7->descmis_req->flags |= VAR_6;

 VAR_8->request.buf = FUNC_5(VAR_0,
     VAR_4);
 VAR_7->wa2_counter++;

 if (!VAR_8->request.buf) {
  FUNC_2(&VAR_7->endpoint, VAR_9);
  goto err;
 }

 VAR_8->request.length = VAR_0;
 VAR_7->descmis_req = VAR_8;

 FUNC_0(&VAR_7->endpoint,
    &VAR_7->descmis_req->request,
    VAR_4);

 return;

err:
 FUNC_4(VAR_7->cdns3_dev->dev,
  "Failed: No sufficient memory for DESCMIS\n");
}

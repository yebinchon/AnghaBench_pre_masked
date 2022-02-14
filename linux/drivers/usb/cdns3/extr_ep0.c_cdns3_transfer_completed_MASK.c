
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int actual; } ;
struct cdns3_endpoint {int dir; TYPE_1__* trb_pool; int pending_req_list; } ;
struct cdns3_device {int ep0_data_dir; struct cdns3_endpoint** eps; } ;
struct TYPE_2__ {int length; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cdns3_device*,int ,int ) ;
 int FUNC_2 (struct cdns3_endpoint*,int ,int ) ;
 struct usb_request* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_request*) ;
 int FUNC_7 (struct cdns3_endpoint*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(struct cdns3_device *VAR_0)
{
 struct cdns3_endpoint *VAR_1 = VAR_0->eps[0];

 if (!FUNC_5(&VAR_1->pending_req_list)) {
  struct usb_request *VAR_2;

  FUNC_7(VAR_1, VAR_1->trb_pool);
  VAR_2 = FUNC_3(&VAR_1->pending_req_list);

  VAR_2->actual =
   FUNC_0(FUNC_4(VAR_1->trb_pool->length));

  VAR_1->dir = VAR_0->ep0_data_dir;
  FUNC_2(VAR_1, FUNC_6(VAR_2), 0);
 }

 FUNC_1(VAR_0, 0, 0);
}

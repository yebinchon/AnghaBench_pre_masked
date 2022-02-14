
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int actual; } ;
struct cdns3_trb {int length; int control; } ;
struct cdns3_request {struct cdns3_trb* trb; } ;
struct TYPE_2__ {int address; } ;
struct cdns3_endpoint {int dequeue; scalar_t__ type; int flags; struct cdns3_trb* trb_pool; TYPE_1__ endpoint; int pending_req_list; } ;
struct cdns3_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct cdns3_endpoint*,struct cdns3_request*,int ) ;
 int FUNC_3 (struct cdns3_request*) ;
 struct usb_request* FUNC_4 (int *) ;
 int FUNC_5 (struct cdns3_endpoint*,struct cdns3_request*) ;
 int FUNC_6 (struct cdns3_device*,int ) ;
 int FUNC_7 (struct cdns3_device*,struct cdns3_endpoint*) ;
 int FUNC_8 (int ,char*,struct cdns3_trb*,struct cdns3_trb*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 struct cdns3_request* FUNC_11 (struct usb_request*) ;
 int FUNC_12 (struct cdns3_endpoint*,struct cdns3_trb*) ;

__attribute__((used)) static void FUNC_13(struct cdns3_device *VAR_6,
         struct cdns3_endpoint *VAR_7)
{
 struct cdns3_request *VAR_8;
 struct usb_request *VAR_9;
 struct cdns3_trb *VAR_10;

 while (!FUNC_10(&VAR_7->pending_req_list)) {
  VAR_9 = FUNC_4(&VAR_7->pending_req_list);
  VAR_8 = FUNC_11(VAR_9);

  VAR_10 = VAR_7->trb_pool + VAR_7->dequeue;


  if (FUNC_0(VAR_10->control) == VAR_4) {
   FUNC_12(VAR_7, VAR_10);
   FUNC_3(VAR_8);
  }




  FUNC_6(VAR_6, VAR_7->endpoint.address);

  if (!FUNC_5(VAR_7, VAR_8))
   goto prepare_next_td;

  VAR_10 = VAR_7->trb_pool + VAR_7->dequeue;
  FUNC_12(VAR_7, VAR_10);

  if (VAR_10 != VAR_8->trb)
   FUNC_8(VAR_6->dev,
     "request_trb=0x%p, queue_trb=0x%p\n",
     VAR_8->trb, VAR_10);

  VAR_9->actual = FUNC_1(FUNC_9(VAR_10->length));
  FUNC_3(VAR_8);
  FUNC_2(VAR_7, VAR_8, 0);

  if (VAR_7->type != VAR_5 &&
      VAR_3 == 2)
   break;
 }
 VAR_7->flags &= ~VAR_0;

prepare_next_td:
 if (!(VAR_7->flags & VAR_1) &&
     !(VAR_7->flags & VAR_2))
  FUNC_7(VAR_6, VAR_7);
}

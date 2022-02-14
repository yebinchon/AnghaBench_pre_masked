
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct usb_request {int dummy; } ;
struct usb_ep {TYPE_2__* desc; } ;
struct TYPE_6__ {int buf; } ;
struct cdns3_request {int list; TYPE_3__ request; } ;
struct cdns3_endpoint {int flags; int * descmis_req; int deferred_req_list; int wa2_counter; int endpoint; int wa2_descmiss_req_list; int pending_req_list; int name; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {int lock; int dev; TYPE_1__* regs; } ;
struct TYPE_5__ {int bEndpointAddress; } ;
struct TYPE_4__ {int ep_cmd; int ep_sts; int ep_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (struct cdns3_endpoint*,int ,int ) ;
 struct cdns3_request* FUNC_2 (int *) ;
 struct usb_request* FUNC_3 (int *) ;
 int FUNC_4 (struct cdns3_device*,int ) ;
 scalar_t__ FUNC_5 (int ,int,char*,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 struct cdns3_endpoint* FUNC_7 (struct usb_ep*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int,int,int,int) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (struct usb_request*) ;
 int FUNC_17 (struct cdns3_endpoint*) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (int,int *) ;

__attribute__((used)) static int FUNC_20(struct usb_ep *VAR_7)
{
 struct cdns3_endpoint *VAR_8;
 struct cdns3_request *VAR_9;
 struct cdns3_device *VAR_10;
 struct usb_request *VAR_11;
 unsigned long VAR_12;
 int VAR_13 = 0;
 u32 VAR_14;
 int VAR_15;

 if (!VAR_7) {
  FUNC_11("usbss: invalid parameters\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_7(VAR_7);
 VAR_10 = VAR_8->cdns3_dev;

 if (FUNC_5(VAR_10->dev, !(VAR_8->flags & VAR_4),
     "%s is already disabled\n", VAR_8->name))
  return 0;

 FUNC_14(&VAR_10->lock, VAR_12);

 FUNC_17(VAR_8);

 FUNC_4(VAR_10, VAR_7->desc->bEndpointAddress);

 VAR_14 = FUNC_12(&VAR_10->regs->ep_cfg);
 VAR_14 &= ~VAR_1;
 FUNC_19(VAR_14, &VAR_10->regs->ep_cfg);






 FUNC_13(&VAR_10->regs->ep_sts, VAR_15,
      !(VAR_15 & VAR_5), 1, 10);
 FUNC_19(VAR_3, &VAR_10->regs->ep_cmd);

 FUNC_13(&VAR_10->regs->ep_cmd, VAR_15,
      !(VAR_15 & (VAR_2 | VAR_3)),
      1, 1000);
 if (FUNC_18(VAR_13))
  FUNC_6(VAR_10->dev, "Timeout: %s resetting failed.\n",
   VAR_8->name);

 while (!FUNC_10(&VAR_8->pending_req_list)) {
  VAR_11 = FUNC_3(&VAR_8->pending_req_list);

  FUNC_1(VAR_8, FUNC_16(VAR_11),
          -VAR_6);
 }

 while (!FUNC_10(&VAR_8->wa2_descmiss_req_list)) {
  VAR_9 = FUNC_2(&VAR_8->wa2_descmiss_req_list);

  FUNC_8(VAR_9->request.buf);
  FUNC_0(&VAR_8->endpoint,
          &VAR_9->request);
  FUNC_9(&VAR_9->list);
  --VAR_8->wa2_counter;
 }

 while (!FUNC_10(&VAR_8->deferred_req_list)) {
  VAR_11 = FUNC_3(&VAR_8->deferred_req_list);

  FUNC_1(VAR_8, FUNC_16(VAR_11),
          -VAR_6);
 }

 VAR_8->descmis_req = ((void*)0);

 VAR_7->desc = ((void*)0);
 VAR_8->flags &= ~VAR_4;

 FUNC_15(&VAR_10->lock, VAR_12);

 return VAR_13;
}

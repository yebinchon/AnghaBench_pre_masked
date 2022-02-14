
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_request {int length; int dma; scalar_t__ zero; int list; int status; scalar_t__ actual; } ;
struct usb_ep {int maxpacket; } ;
struct cdns3_endpoint {int pending_req_list; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {scalar_t__ ep0_stage; int status_completion_no_call; int lock; int dev; int ep0_data_dir; int sysdev; int pending_status_wq; struct usb_request* pending_status_request; int hw_configured_flag; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cdns3_device*,int) ;
 scalar_t__ FUNC_1 (struct cdns3_device*) ;
 int FUNC_2 (struct cdns3_device*,int ,int) ;
 int FUNC_3 (struct cdns3_device*,int ,int,int,int) ;
 int FUNC_4 (struct cdns3_device*,int) ;
 int FUNC_5 (struct cdns3_device*) ;
 int FUNC_6 (int ,char*) ;
 struct cdns3_endpoint* FUNC_7 (struct usb_ep*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int VAR_5 ;
 int FUNC_13 (struct cdns3_device*,struct usb_request*) ;
 int FUNC_14 (int ,struct usb_request*,int ) ;

__attribute__((used)) static int FUNC_15(struct usb_ep *VAR_6,
      struct usb_request *VAR_7,
      gfp_t VAR_8)
{
 struct cdns3_endpoint *VAR_9 = FUNC_7(VAR_6);
 struct cdns3_device *VAR_10 = VAR_9->cdns3_dev;
 unsigned long VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;
 u8 VAR_14 = 0;

 FUNC_13(VAR_10, VAR_7);


 if (FUNC_1(VAR_10))
  return -VAR_2;


 if (VAR_10->ep0_stage == VAR_0) {
  FUNC_11(&VAR_10->lock, VAR_11);
  FUNC_4(VAR_10, 0x00);

  VAR_12 = !VAR_10->hw_configured_flag;
  FUNC_5(VAR_10);

  if (!VAR_12)
   FUNC_2(VAR_10, 0, 1);

  FUNC_0(VAR_10, 1);

  VAR_7->actual = 0;
  VAR_10->status_completion_no_call = 1;
  VAR_10->pending_status_request = VAR_7;
  FUNC_12(&VAR_10->lock, VAR_11);






  FUNC_10(VAR_5, &VAR_10->pending_status_wq);
  return 0;
 }

 FUNC_11(&VAR_10->lock, VAR_11);
 if (!FUNC_9(&VAR_9->pending_req_list)) {
  FUNC_6(VAR_10->dev,
   "can't handle multiple requests for ep0\n");
  FUNC_12(&VAR_10->lock, VAR_11);
  return -VAR_1;
 }

 VAR_13 = FUNC_14(VAR_10->sysdev, VAR_7,
         VAR_10->ep0_data_dir);
 if (VAR_13) {
  FUNC_12(&VAR_10->lock, VAR_11);
  FUNC_6(VAR_10->dev, "failed to map request\n");
  return -VAR_4;
 }

 VAR_7->status = -VAR_3;
 FUNC_8(&VAR_7->list, &VAR_9->pending_req_list);

 if (VAR_7->zero && VAR_7->length &&
     (VAR_7->length % VAR_6->maxpacket == 0))
  VAR_14 = 1;

 FUNC_3(VAR_10, VAR_7->dma, VAR_7->length, 1, VAR_14);

 FUNC_12(&VAR_10->lock, VAR_11);

 return VAR_13;
}

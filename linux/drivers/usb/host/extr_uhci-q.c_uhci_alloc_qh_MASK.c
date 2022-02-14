
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {int desc; struct uhci_qh* hcpriv; } ;
struct usb_device {int speed; } ;
struct uhci_qh {int type; int load; int state; struct usb_device* udev; struct usb_host_endpoint* hep; int dummy_td; int node; int queue; void* link; void* element; int dma_handle; } ;
struct uhci_hcd {int qh_pool; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (struct uhci_hcd*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,struct uhci_qh*,int ) ;
 struct uhci_qh* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct uhci_hcd*) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct uhci_qh *FUNC_9(struct uhci_hcd *VAR_5,
  struct usb_device *VAR_6, struct usb_host_endpoint *VAR_7)
{
 dma_addr_t VAR_8;
 struct uhci_qh *VAR_9;

 VAR_9 = FUNC_3(VAR_5->qh_pool, VAR_0, &VAR_8);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->dma_handle = VAR_8;

 VAR_9->element = FUNC_1(VAR_5);
 VAR_9->link = FUNC_1(VAR_5);

 FUNC_0(&VAR_9->queue);
 FUNC_0(&VAR_9->node);

 if (VAR_6) {
  VAR_9->type = FUNC_8(&VAR_7->desc);
  if (VAR_9->type != VAR_4) {
   VAR_9->dummy_td = FUNC_4(VAR_5);
   if (!VAR_9->dummy_td) {
    FUNC_2(VAR_5->qh_pool, VAR_9, VAR_8);
    return ((void*)0);
   }
  }
  VAR_9->state = VAR_2;
  VAR_9->hep = VAR_7;
  VAR_9->udev = VAR_6;
  VAR_7->hcpriv = VAR_9;

  if (VAR_9->type == VAR_3 ||
    VAR_9->type == VAR_4)
   VAR_9->load = FUNC_5(VAR_6->speed,
     FUNC_6(&VAR_7->desc),
     VAR_9->type == VAR_4,
     FUNC_7(&VAR_7->desc))
    / 1000 + 1;

 } else {
  VAR_9->state = VAR_1;
  VAR_9->type = -1;
 }
 return VAR_9;
}

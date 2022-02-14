
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_ep_ctx {int dummy; } ;
struct usb_host_endpoint {int desc; } ;
struct usb_device {scalar_t__ speed; } ;
struct mu3h_sch_tt {int dummy; } ;
struct mu3h_sch_ep_info {struct usb_host_endpoint* ep; struct mu3h_sch_tt* sch_tt; } ;


 int VAR_0 ;
 struct mu3h_sch_ep_info* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mu3h_sch_tt*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mu3h_sch_tt* FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct xhci_ep_ctx*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct mu3h_sch_ep_info*) ;
 struct mu3h_sch_ep_info* FUNC_6 (size_t,int ) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static struct mu3h_sch_ep_info *FUNC_8(struct usb_device *VAR_4,
 struct usb_host_endpoint *VAR_5, struct xhci_ep_ctx *VAR_6)
{
 struct mu3h_sch_ep_info *VAR_7;
 struct mu3h_sch_tt *VAR_8 = ((void*)0);
 u32 VAR_9;
 size_t VAR_10;

 if (FUNC_4(VAR_4->speed))
  VAR_9 = VAR_2;
 else if ((VAR_4->speed >= VAR_3)
   && FUNC_7(&VAR_5->desc))
  VAR_9 = FUNC_3(VAR_6);
 else
  VAR_9 = 1;

 VAR_10 = sizeof(struct mu3h_sch_ep_info) +
   VAR_9 * sizeof(u32);
 VAR_7 = FUNC_6(VAR_10, VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 if (FUNC_4(VAR_4->speed)) {
  VAR_8 = FUNC_2(VAR_4);
  if (FUNC_1(VAR_8)) {
   FUNC_5(VAR_7);
   return FUNC_0(-VAR_0);
  }
 }

 VAR_7->sch_tt = VAR_8;
 VAR_7->ep = VAR_5;

 return VAR_7;
}

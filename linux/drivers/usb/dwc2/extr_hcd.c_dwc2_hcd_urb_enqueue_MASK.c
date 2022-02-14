
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dwc2_qtd {TYPE_5__* urb; TYPE_4__* qh; } ;
struct dwc2_qh {int dummy; } ;
struct TYPE_8__ {scalar_t__ fs_phy_type; scalar_t__ hs_phy_type; } ;
struct TYPE_6__ {int port_connect_status; } ;
struct TYPE_7__ {TYPE_1__ b; } ;
struct dwc2_hsotg {int dev; TYPE_3__ hw_params; TYPE_2__ flags; } ;
struct dwc2_hcd_urb {int priv; } ;
typedef enum dwc2_transaction_type { ____Placeholder_dwc2_transaction_type } dwc2_transaction_type ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {scalar_t__ ep_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct dwc2_hsotg*,struct dwc2_qtd*,struct dwc2_qh*) ;
 int FUNC_2 (struct dwc2_qtd*,struct dwc2_hcd_urb*) ;
 int FUNC_3 (struct dwc2_hsotg*,int) ;
 int FUNC_4 (struct dwc2_hsotg*) ;
 int FUNC_5 (struct dwc2_hsotg*,int ) ;
 scalar_t__ FUNC_6 (struct dwc2_hsotg*,int ) ;

__attribute__((used)) static int FUNC_7(struct dwc2_hsotg *VAR_14,
    struct dwc2_hcd_urb *VAR_15, struct dwc2_qh *VAR_16,
    struct dwc2_qtd *VAR_17)
{
 u32 VAR_18;
 int VAR_19;
 int VAR_20;

 if (!VAR_14->flags.b.port_connect_status) {

  FUNC_0(VAR_14->dev, "Not connected\n");
  return -VAR_2;
 }

 VAR_20 = FUNC_5(VAR_14, VAR_15->priv);


 if ((VAR_20 == VAR_13) &&
     (VAR_14->hw_params.fs_phy_type == VAR_3) &&
     (VAR_14->hw_params.hs_phy_type == VAR_4)) {
  u32 VAR_21 = FUNC_6(VAR_14, VAR_7);
  u32 VAR_22 = (VAR_21 & VAR_9) >> VAR_10;

  if (VAR_22 == VAR_8)
   return -VAR_2;
 }

 if (!VAR_17)
  return -VAR_1;

 FUNC_2(VAR_17, VAR_15);
 VAR_19 = FUNC_1(VAR_14, VAR_17, VAR_16);
 if (VAR_19) {
  FUNC_0(VAR_14->dev,
   "DWC OTG HCD URB Enqueue failed adding QTD. Error status %d\n",
   VAR_19);
  return VAR_19;
 }

 VAR_18 = FUNC_6(VAR_14, VAR_5);
 if (!(VAR_18 & VAR_6)) {
  enum dwc2_transaction_type VAR_23;

  if (VAR_17->qh->ep_type == VAR_12 &&
      !(VAR_17->urb->flags & VAR_11))




   return 0;

  VAR_23 = FUNC_4(VAR_14);
  if (VAR_23 != VAR_0)
   FUNC_3(VAR_14, VAR_23);
 }

 return 0;
}

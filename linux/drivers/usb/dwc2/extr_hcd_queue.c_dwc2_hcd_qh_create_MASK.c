
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc2_qh {int dummy; } ;
struct TYPE_2__ {scalar_t__ dma_desc_enable; } ;
struct dwc2_hsotg {TYPE_1__ params; } ;
struct dwc2_hcd_urb {int priv; } ;
typedef int gfp_t ;


 int FUNC_0 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 scalar_t__ FUNC_1 (struct dwc2_hsotg*,struct dwc2_qh*,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_qh*,struct dwc2_hcd_urb*,int ) ;
 struct dwc2_qh* FUNC_3 (int,int ) ;

struct dwc2_qh *FUNC_4(struct dwc2_hsotg *VAR_0,
       struct dwc2_hcd_urb *VAR_1,
       gfp_t VAR_2)
{
 struct dwc2_qh *VAR_3;

 if (!VAR_1->priv)
  return ((void*)0);


 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_2);
 if (!VAR_3)
  return ((void*)0);

 FUNC_2(VAR_0, VAR_3, VAR_1, VAR_2);

 if (VAR_0->params.dma_desc_enable &&
     FUNC_1(VAR_0, VAR_3, VAR_2) < 0) {
  FUNC_0(VAR_0, VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}

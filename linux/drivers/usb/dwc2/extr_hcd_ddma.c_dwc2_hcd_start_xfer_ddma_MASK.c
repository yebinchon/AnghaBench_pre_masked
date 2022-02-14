
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dwc2_qh {int ntd; struct dwc2_host_chan* channel; } ;
struct dwc2_hsotg {int dummy; } ;
struct dwc2_host_chan {int ep_type; int ntd; int xfer_started; } ;






 int FUNC_0 (struct dwc2_hsotg*,struct dwc2_host_chan*) ;
 int FUNC_1 (struct dwc2_hsotg*,struct dwc2_qh*,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 int FUNC_3 (struct dwc2_qh*) ;
 int FUNC_4 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 int FUNC_5 (struct dwc2_hsotg*,struct dwc2_qh*,int) ;

void FUNC_6(struct dwc2_hsotg *VAR_0, struct dwc2_qh *VAR_1)
{

 struct dwc2_host_chan *VAR_2 = VAR_1->channel;
 u16 VAR_3 = 0;

 switch (VAR_2->ep_type) {
 case 130:
 case 131:
  FUNC_2(VAR_0, VAR_1);
  FUNC_0(VAR_0, VAR_2);
  break;
 case 129:
  FUNC_2(VAR_0, VAR_1);
  FUNC_5(VAR_0, VAR_1, 1);
  FUNC_0(VAR_0, VAR_2);
  break;
 case 128:
  if (!VAR_1->ntd)
   VAR_3 = FUNC_4(VAR_0, VAR_1);
  FUNC_1(VAR_0, VAR_1, VAR_3);

  if (!VAR_2->xfer_started) {
   FUNC_5(VAR_0, VAR_1, 1);






   VAR_2->ntd = FUNC_3(VAR_1);


   FUNC_0(VAR_0, VAR_2);
  }

  break;
 default:
  break;
 }
}

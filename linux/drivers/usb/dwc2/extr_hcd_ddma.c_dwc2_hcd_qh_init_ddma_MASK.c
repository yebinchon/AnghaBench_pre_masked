
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_qh {scalar_t__ ep_type; scalar_t__ ntd; scalar_t__ do_split; } ;
struct dwc2_hsotg {int frame_list; int dev; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dwc2_hsotg*,struct dwc2_qh*,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 int FUNC_3 (struct dwc2_hsotg*,int ) ;
 int FUNC_4 (struct dwc2_hsotg*,int ) ;

int FUNC_5(struct dwc2_hsotg *VAR_4, struct dwc2_qh *VAR_5,
     gfp_t VAR_6)
{
 int VAR_7;

 if (VAR_5->do_split) {
  FUNC_0(VAR_4->dev,
   "SPLIT Transfers are not supported in Descriptor DMA mode.\n");
  VAR_7 = -VAR_0;
  goto err0;
 }

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6);
 if (VAR_7)
  goto err0;

 if (VAR_5->ep_type == VAR_3 ||
     VAR_5->ep_type == VAR_2) {
  if (!VAR_4->frame_list) {
   VAR_7 = FUNC_3(VAR_4, VAR_6);
   if (VAR_7)
    goto err1;

   FUNC_4(VAR_4, VAR_1);
  }
 }

 VAR_5->ntd = 0;
 return 0;

err1:
 FUNC_2(VAR_4, VAR_5);
err0:
 return VAR_7;
}

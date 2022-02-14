
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc2_qh {scalar_t__ ep_type; scalar_t__ channel; } ;
struct TYPE_2__ {scalar_t__ uframe_sched; } ;
struct dwc2_hsotg {scalar_t__ frame_list; int periodic_channels; TYPE_1__ params; int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 int FUNC_1 (struct dwc2_hsotg*) ;
 int FUNC_2 (struct dwc2_hsotg*) ;
 int FUNC_3 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct dwc2_hsotg *VAR_2, struct dwc2_qh *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(VAR_2, VAR_3);
 FUNC_4(&VAR_2->lock, VAR_4);
 if (VAR_3->channel)
  FUNC_3(VAR_2, VAR_3);
 FUNC_5(&VAR_2->lock, VAR_4);

 if ((VAR_3->ep_type == VAR_1 ||
      VAR_3->ep_type == VAR_0) &&
     (VAR_2->params.uframe_sched ||
      !VAR_2->periodic_channels) && VAR_2->frame_list) {
  FUNC_2(VAR_2);
  FUNC_1(VAR_2);
 }
}

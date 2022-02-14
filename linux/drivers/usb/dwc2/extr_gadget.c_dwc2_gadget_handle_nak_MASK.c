
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dwc2_hsotg_ep {int dir_in; int target_frame; int interval; int index; int isochronous; struct dwc2_hsotg* parent; } ;
struct TYPE_2__ {scalar_t__ service_interval; } ;
struct dwc2_hsotg {int frame_number; TYPE_1__ params; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dwc2_hsotg_ep*) ;
 int FUNC_2 (struct dwc2_hsotg_ep*) ;
 int FUNC_3 (struct dwc2_hsotg_ep*) ;
 int FUNC_4 (struct dwc2_hsotg*,struct dwc2_hsotg_ep*,int ,int ) ;
 int FUNC_5 (struct dwc2_hsotg*,int ) ;
 int FUNC_6 (struct dwc2_hsotg*,int ,int ) ;
 int FUNC_7 (struct dwc2_hsotg_ep*) ;
 scalar_t__ FUNC_8 (struct dwc2_hsotg*) ;

__attribute__((used)) static void FUNC_9(struct dwc2_hsotg_ep *VAR_3)
{
 struct dwc2_hsotg *VAR_4 = VAR_3->parent;
 int VAR_5 = VAR_3->dir_in;

 if (!VAR_5 || !VAR_3->isochronous)
  return;

 if (VAR_3->target_frame == VAR_2) {

  if (FUNC_8(VAR_4)) {
   VAR_3->target_frame = VAR_4->frame_number;
   FUNC_2(VAR_3);




   if (VAR_4->params.service_interval) {



    VAR_3->target_frame &= ~VAR_3->interval + 1;




    FUNC_2(VAR_3);
    FUNC_1(VAR_3);
   }

   FUNC_3(VAR_3);
   return;
  }

  VAR_3->target_frame = VAR_4->frame_number;
  if (VAR_3->interval > 1) {
   u32 VAR_6 = FUNC_5(VAR_4,
           FUNC_0(VAR_3->index));
   if (VAR_3->target_frame & 0x1)
    VAR_6 |= VAR_1;
   else
    VAR_6 |= VAR_0;

   FUNC_6(VAR_4, VAR_6, FUNC_0(VAR_3->index));
  }

  FUNC_4(VAR_4, VAR_3,
         FUNC_7(VAR_3), 0);
 }

 if (!FUNC_8(VAR_4))
  FUNC_2(VAR_3);
}

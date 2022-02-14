
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg_ep {int dir_in; scalar_t__ target_frame; int interval; int index; int isochronous; struct dwc2_hsotg* parent; } ;
struct dwc2_hsotg {scalar_t__ frame_number; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct dwc2_hsotg_ep*) ;
 int FUNC_2 (struct dwc2_hsotg_ep*) ;
 int FUNC_3 (struct dwc2_hsotg_ep*) ;
 int FUNC_4 (struct dwc2_hsotg*,int ) ;
 int FUNC_5 (struct dwc2_hsotg*,int ,int ) ;
 scalar_t__ FUNC_6 (struct dwc2_hsotg*) ;

__attribute__((used)) static void FUNC_7(struct dwc2_hsotg_ep *VAR_5)
{
 struct dwc2_hsotg *VAR_6 = VAR_5->parent;
 int VAR_7 = VAR_5->dir_in;
 u32 VAR_8;

 if (VAR_7 || !VAR_5->isochronous)
  return;

 if (FUNC_6(VAR_6)) {
  if (VAR_5->target_frame == VAR_4) {

   VAR_5->target_frame = VAR_6->frame_number;
   FUNC_2(VAR_5);
  }
  return;
 }

 if (VAR_5->interval > 1 &&
     VAR_5->target_frame == VAR_4) {
  u32 VAR_9;

  VAR_5->target_frame = VAR_6->frame_number;
  FUNC_1(VAR_5);

  VAR_9 = FUNC_4(VAR_6, FUNC_0(VAR_5->index));
  if (VAR_5->target_frame & 0x1)
   VAR_9 |= VAR_3;
  else
   VAR_9 |= VAR_2;

  FUNC_5(VAR_6, VAR_9, FUNC_0(VAR_5->index));
 }

 FUNC_3(VAR_5);
 VAR_8 = FUNC_4(VAR_6, VAR_0);
 VAR_8 &= ~VAR_1;
 FUNC_5(VAR_6, VAR_8, VAR_0);
}

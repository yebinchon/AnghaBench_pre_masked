
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_qh {scalar_t__ dw_align_buf; scalar_t__ desc_list; int dwc_tt; int wait_timer; int unreserve_timer; } ;
struct dwc2_hsotg {scalar_t__ unaligned_cache; int lock; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 int FUNC_3 (struct dwc2_hsotg*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dwc2_qh*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(struct dwc2_hsotg *VAR_0, struct dwc2_qh *VAR_1)
{

 if (FUNC_0(&VAR_1->unreserve_timer)) {
  unsigned long VAR_2;

  FUNC_7(&VAR_0->lock, VAR_2);
  FUNC_1(VAR_0, VAR_1);
  FUNC_8(&VAR_0->lock, VAR_2);
 }
 FUNC_4(&VAR_1->wait_timer);

 FUNC_3(VAR_0, VAR_1->dwc_tt);

 if (VAR_1->desc_list)
  FUNC_2(VAR_0, VAR_1);
 else if (VAR_0->unaligned_cache && VAR_1->dw_align_buf)
  FUNC_6(VAR_0->unaligned_cache, VAR_1->dw_align_buf);

 FUNC_5(VAR_1);
}

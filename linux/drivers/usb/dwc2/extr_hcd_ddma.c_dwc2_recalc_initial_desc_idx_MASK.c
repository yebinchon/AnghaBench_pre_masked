
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dwc2_qh {int next_active_frame; int td_last; int td_first; scalar_t__ channel; } ;
struct dwc2_hsotg {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (struct dwc2_hsotg*,struct dwc2_qh*,int*) ;
 int FUNC_1 (struct dwc2_qh*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dwc2_qh*,int) ;

__attribute__((used)) static u16 FUNC_4(struct dwc2_hsotg *VAR_1,
     struct dwc2_qh *VAR_2)
{
 u16 VAR_3, VAR_4, VAR_5, VAR_6;
 if (VAR_2->channel) {
  VAR_3 = FUNC_0(VAR_1, VAR_2, &VAR_6);




  VAR_5 = FUNC_2(VAR_3);
  VAR_4 = (VAR_0 +
     FUNC_2(VAR_2->next_active_frame) -
     VAR_5) % FUNC_1(VAR_2);
  VAR_4 = (VAR_4 + VAR_5) % VAR_0;
 } else {
  VAR_2->next_active_frame = FUNC_0(VAR_1, VAR_2,
          &VAR_6);
  VAR_4 = FUNC_2(VAR_2->next_active_frame);
 }

 VAR_2->td_first = VAR_2->td_last = FUNC_3(VAR_2, VAR_4);

 return VAR_6;
}

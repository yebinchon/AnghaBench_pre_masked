
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct dwc2_qh {scalar_t__ next_active_frame; scalar_t__ start_active_frame; scalar_t__ ep_type; int ep_is_in; } ;
struct dwc2_hsotg {int dummy; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct dwc2_hsotg *VAR_1,
     struct dwc2_qh *VAR_2, u16 VAR_3)
{
 u16 VAR_4 = VAR_2->next_active_frame;
 u16 VAR_5 = FUNC_0(VAR_3, 1);
 int VAR_6 = 0;
 u16 VAR_7;







 if (VAR_4 == VAR_2->start_active_frame &&
     !(VAR_2->ep_type == VAR_0 && !VAR_2->ep_is_in))
  VAR_7 = 2;
 else
  VAR_7 = 1;

 VAR_2->next_active_frame = FUNC_2(VAR_4, VAR_7);
 if (FUNC_1(VAR_5, VAR_2->next_active_frame)) {




  VAR_6 = FUNC_0(VAR_5,
         VAR_2->next_active_frame);
  VAR_2->next_active_frame = VAR_3;
 }

 return VAR_6;
}

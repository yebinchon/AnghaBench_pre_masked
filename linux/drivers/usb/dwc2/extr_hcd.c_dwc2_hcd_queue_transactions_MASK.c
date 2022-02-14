
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {int non_periodic_sched_active; int dev; } ;
typedef enum dwc2_transaction_type { ____Placeholder_dwc2_transaction_type } dwc2_transaction_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dwc2_hsotg*) ;
 int FUNC_2 (struct dwc2_hsotg*) ;
 int FUNC_3 (struct dwc2_hsotg*,int ) ;
 int FUNC_4 (struct dwc2_hsotg*,int ,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct dwc2_hsotg *VAR_5,
     enum dwc2_transaction_type VAR_6)
{




 if (VAR_6 == VAR_2 ||
     VAR_6 == VAR_0)
  FUNC_2(VAR_5);


 if (VAR_6 == VAR_1 ||
     VAR_6 == VAR_0) {
  if (!FUNC_5(&VAR_5->non_periodic_sched_active)) {
   FUNC_1(VAR_5);
  } else {




   u32 VAR_7 = FUNC_3(VAR_5, VAR_3);

   VAR_7 &= ~VAR_4;
   FUNC_4(VAR_5, VAR_7, VAR_3);
  }
 }
}

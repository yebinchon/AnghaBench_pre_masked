
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_qh {int ls_start_schedule_slice; int device_interval; int device_us; } ;
struct dwc2_hsotg {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long* FUNC_1 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 int FUNC_2 (unsigned long*,int ,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct dwc2_hsotg *VAR_3,
        struct dwc2_qh *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4->device_us, VAR_2);
 unsigned long *VAR_6 = FUNC_1(VAR_3, VAR_4);


 if (!VAR_6)
  return;

 FUNC_2(VAR_6, VAR_0,
   VAR_1, VAR_5, VAR_4->device_interval,
   VAR_4->ls_start_schedule_slice);
}

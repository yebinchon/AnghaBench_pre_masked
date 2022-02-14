
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
 int VAR_3 ;
 unsigned long* FUNC_1 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 int FUNC_2 (unsigned long*,int ,int ,int,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct dwc2_hsotg *VAR_4, struct dwc2_qh *VAR_5,
     int VAR_6)
{
 int VAR_7 = FUNC_0(VAR_5->device_us, VAR_2);
 unsigned long *VAR_8 = FUNC_1(VAR_4, VAR_5);
 int VAR_9;

 if (!VAR_8)
  return -VAR_3;
 VAR_9 = FUNC_2(VAR_8, VAR_0,
         VAR_1, VAR_7,
         VAR_5->device_interval, VAR_6, 0);

 if (VAR_9 < 0)
  return VAR_9;

 VAR_5->ls_start_schedule_slice = VAR_9;
 return 0;
}

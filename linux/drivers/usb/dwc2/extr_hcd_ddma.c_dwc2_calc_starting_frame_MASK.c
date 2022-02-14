
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dwc2_qh {scalar_t__ dev_speed; } ;
struct dwc2_hsotg {int frame_number; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dwc2_hsotg*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u16 FUNC_4(struct dwc2_hsotg *VAR_1,
        struct dwc2_qh *VAR_2, u16 *VAR_3)
{
 u16 VAR_4;

 VAR_1->frame_number = FUNC_2(VAR_1);
 if (VAR_2->dev_speed == VAR_0) {







  if (FUNC_3(VAR_1->frame_number) >= 5) {
   *VAR_3 = 2 * 8;
   VAR_4 = FUNC_0(VAR_1->frame_number,
         *VAR_3);
  } else {
   *VAR_3 = 1 * 8;
   VAR_4 = FUNC_0(VAR_1->frame_number,
         *VAR_3);
  }

  VAR_4 = FUNC_1(VAR_4);
 } else {





  *VAR_3 = 1;
  VAR_4 = FUNC_0(VAR_1->frame_number, 2);
 }

 return VAR_4;
}

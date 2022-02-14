
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dwc2_hsotg {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dwc2_hsotg*) ;
 scalar_t__ FUNC_1 (struct dwc2_hsotg*,int ) ;

__attribute__((used)) static bool FUNC_2(struct dwc2_hsotg *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 if (!FUNC_0(VAR_6))
  return 0;


 VAR_8 = FUNC_1(VAR_6, VAR_1);
 if (!(VAR_8 & VAR_2))
  return 0;





 VAR_7 = FUNC_1(VAR_6, VAR_5);
 if (VAR_7 >= VAR_0) {
  u32 VAR_9 = FUNC_1(VAR_6, VAR_3);

  if (VAR_9 & VAR_4)
   return 0;
 }

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dwc2_hsotg*,int) ;
 int FUNC_1 (struct dwc2_hsotg*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dwc2_hsotg *VAR_3,
         u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5 & VAR_0)
  VAR_5 |= VAR_1;
 else
  VAR_5 |= VAR_2;
 FUNC_1(VAR_3, VAR_5, VAR_4);
}

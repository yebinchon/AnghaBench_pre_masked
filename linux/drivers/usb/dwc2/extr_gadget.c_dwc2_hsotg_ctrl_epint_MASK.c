
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dwc2_hsotg*,int ) ;
 int FUNC_1 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(struct dwc2_hsotg *VAR_1,
      unsigned int VAR_2, unsigned int VAR_3,
     unsigned int VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6 = 1 << VAR_2;
 u32 VAR_7;

 if (!VAR_3)
  VAR_6 <<= 16;

 FUNC_3(VAR_5);
 VAR_7 = FUNC_0(VAR_1, VAR_0);
 if (VAR_4)
  VAR_7 |= VAR_6;
 else
  VAR_7 &= ~VAR_6;
 FUNC_1(VAR_1, VAR_7, VAR_0);
 FUNC_2(VAR_5);
}

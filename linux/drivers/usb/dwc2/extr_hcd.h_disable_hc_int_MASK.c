
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dwc2_hsotg*,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct dwc2_hsotg *VAR_0, int VAR_1, u32 VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_0, FUNC_0(VAR_1));

 VAR_3 &= ~VAR_2;
 FUNC_2(VAR_0, VAR_3, FUNC_0(VAR_1));
}

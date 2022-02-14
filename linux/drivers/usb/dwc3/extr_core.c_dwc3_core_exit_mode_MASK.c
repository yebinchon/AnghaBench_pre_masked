
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3 {int dr_mode; } ;





 int FUNC_0 (struct dwc3*) ;
 int FUNC_1 (struct dwc3*) ;
 int FUNC_2 (struct dwc3*) ;

__attribute__((used)) static void FUNC_3(struct dwc3 *VAR_0)
{
 switch (VAR_0->dr_mode) {
 case 128:
  FUNC_1(VAR_0);
  break;
 case 130:
  FUNC_2(VAR_0);
  break;
 case 129:
  FUNC_0(VAR_0);
  break;
 default:

  break;
 }
}

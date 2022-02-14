
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (struct dwc2_hsotg*,int ) ;
 int FUNC_1 (struct dwc2_hsotg*,int,int ) ;

int FUNC_2(struct dwc2_hsotg *VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_0(VAR_4, VAR_0);

 VAR_6 &= ~VAR_1;
 switch (VAR_5) {
 case 131:
 case 130:
 case 128:
 case 129:
 case 132:
  VAR_6 |= VAR_5 << VAR_2;
  break;
 default:
  return -VAR_3;
 }
 FUNC_1(VAR_4, VAR_6, VAR_0);
 return 0;
}

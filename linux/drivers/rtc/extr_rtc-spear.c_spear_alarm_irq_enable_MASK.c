
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear_rtc_config {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct spear_rtc_config* FUNC_0 (struct device*) ;
 int FUNC_1 (struct spear_rtc_config*) ;
 int FUNC_2 (struct spear_rtc_config*) ;
 int FUNC_3 (struct spear_rtc_config*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, unsigned int VAR_2)
{
 struct spear_rtc_config *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = 0;

 FUNC_1(VAR_3);

 switch (VAR_2) {
 case 0:

  FUNC_2(VAR_3);
  break;
 case 1:

  FUNC_3(VAR_3);
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}

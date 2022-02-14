
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pinctrl_dev {int dummy; } ;
struct omap_rtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;


 unsigned long FUNC_2 (unsigned int,int ) ;
 unsigned int FUNC_3 (unsigned long) ;
 struct omap_rtc* FUNC_4 (struct pinctrl_dev*) ;
 int FUNC_5 (struct omap_rtc*,int ) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_3,
   unsigned int VAR_4, unsigned long *VAR_5)
{
 struct omap_rtc *VAR_6 = FUNC_4(VAR_3);
 unsigned int VAR_7 = FUNC_3(*VAR_5);
 u32 VAR_8;
 u16 VAR_9 = 0;

 VAR_8 = FUNC_5(VAR_6, VAR_2);

 switch (VAR_7) {
 case 128:
  if (!(VAR_8 & FUNC_0(VAR_4)))
   return -VAR_0;
  break;
 case 129:
  if (VAR_8 & FUNC_1(VAR_4))
   return -VAR_0;
  break;
 default:
  return -VAR_1;
 };

 *VAR_5 = FUNC_2(VAR_7, VAR_9);

 return 0;
}

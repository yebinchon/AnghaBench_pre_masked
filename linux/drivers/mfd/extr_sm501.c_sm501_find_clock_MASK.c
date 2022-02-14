
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501_devdata {int rev; } ;
struct sm501_clock {int dummy; } ;
struct device {int dummy; } ;






 struct sm501_devdata* FUNC_0 (struct device*) ;
 int FUNC_1 (int,struct sm501_clock*,int) ;
 int FUNC_2 (unsigned long,struct sm501_clock*,int) ;

unsigned long FUNC_3(struct device *VAR_0,
          int VAR_1,
          unsigned long VAR_2)
{
 struct sm501_devdata *VAR_3 = FUNC_0(VAR_0);
 unsigned long VAR_4;
 struct sm501_clock VAR_5;

 switch (VAR_1) {
 case 129:
  if (VAR_3->rev >= 0xC0) {

   VAR_4 = (FUNC_1(2 * VAR_2,
           &VAR_5, 5) / 2);
  } else {
   VAR_4 = (FUNC_2(2 * VAR_2,
        &VAR_5, 5) / 2);
  }
  break;

 case 128:
  VAR_4 = (FUNC_2(2 * VAR_2, &VAR_5, 3) / 2);
  break;

 case 130:
 case 131:
  VAR_4 = FUNC_2(VAR_2, &VAR_5, 3);
  break;

 default:
  VAR_4 = 0;
 }

 return VAR_4;
}

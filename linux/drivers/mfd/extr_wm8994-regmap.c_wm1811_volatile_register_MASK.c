
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994 {int cust_id; int revision; } ;
struct device {int dummy; } ;



 struct wm8994* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct device *VAR_0, unsigned int VAR_1)
{
 struct wm8994 *VAR_2 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 128:
  if (VAR_2->cust_id > 1 || VAR_2->revision > 1)
   return 1;
  else
   return 0;
 default:
  return FUNC_1(VAR_0, VAR_1);
 }
}

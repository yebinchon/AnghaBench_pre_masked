
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeonfb_info {int dummy; } ;
struct fb_info {scalar_t__ state; struct radeonfb_info* par; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

int FUNC_1(struct fb_info *VAR_1)
{
 struct radeonfb_info *VAR_2 = VAR_1->par;

 if (VAR_1->state != VAR_0)
  return 0;
 FUNC_0();

 return 0;
}

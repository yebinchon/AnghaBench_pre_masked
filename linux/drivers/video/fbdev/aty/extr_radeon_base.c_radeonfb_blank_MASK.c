
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeonfb_info {scalar_t__ asleep; } ;
struct fb_info {struct radeonfb_info* par; } ;


 int FUNC_0 (struct radeonfb_info*,int,int ) ;

__attribute__((used)) static int FUNC_1 (int VAR_0, struct fb_info *VAR_1)
{
        struct radeonfb_info *VAR_2 = VAR_1->par;

 if (VAR_2->asleep)
  return 0;

 return FUNC_0(VAR_2, VAR_0, 0);
}

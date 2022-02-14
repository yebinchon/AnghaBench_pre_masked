
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intelfb_info {scalar_t__ ring_lockup; } ;
struct fb_info {int dummy; } ;


 int FUNC_0 (char*) ;
 struct intelfb_info* FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct intelfb_info*) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_0)
{
        struct intelfb_info *VAR_1 = FUNC_1(VAR_0);





 if (VAR_1->ring_lockup)
  return 0;

 FUNC_2(VAR_1);
 return 0;
}

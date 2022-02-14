
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intelfb_info {int open; } ;
struct fb_info {int dummy; } ;


 struct intelfb_info* FUNC_0 (struct fb_info*) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_0, int VAR_1)
{
 struct intelfb_info *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1)
  VAR_2->open++;

 return 0;
}

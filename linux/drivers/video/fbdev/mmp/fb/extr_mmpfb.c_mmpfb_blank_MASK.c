
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmpfb_info {int dummy; } ;
struct fb_info {struct mmpfb_info* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmpfb_info*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_1, struct fb_info *VAR_2)
{
 struct mmpfb_info *VAR_3 = VAR_2->par;

 FUNC_0(VAR_3, (VAR_1 == VAR_0));

 return 0;
}

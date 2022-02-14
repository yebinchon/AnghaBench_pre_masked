
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct au1200fb_device* par; } ;
struct au1200fb_device {int dummy; } ;


 int FUNC_0 (struct au1200fb_device*) ;
 int FUNC_1 (struct fb_info*) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_0)
{
 struct au1200fb_device *VAR_1 = VAR_0->par;

 FUNC_1(VAR_0);
 FUNC_0(VAR_1);

 return 0;
}

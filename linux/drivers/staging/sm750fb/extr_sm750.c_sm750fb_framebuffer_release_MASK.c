
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm750_dev {int fb_count; struct fb_info** fbinfo; } ;
struct fb_info {int dummy; } ;


 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct fb_info*) ;

__attribute__((used)) static void FUNC_2(struct sm750_dev *VAR_0)
{
 struct fb_info *VAR_1;

 while (VAR_0->fb_count) {
  VAR_1 = VAR_0->fbinfo[VAR_0->fb_count - 1];
  FUNC_1(VAR_1);
  FUNC_0(VAR_1);
  VAR_0->fb_count--;
 }
}

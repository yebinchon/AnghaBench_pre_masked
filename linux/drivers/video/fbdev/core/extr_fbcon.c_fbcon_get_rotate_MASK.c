
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fbcon_ops {int rotate; } ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;



__attribute__((used)) static int FUNC_0(struct fb_info *VAR_0)
{
 struct fbcon_ops *VAR_1 = VAR_0->fbcon_par;

 return (VAR_1) ? VAR_1->rotate : 0;
}

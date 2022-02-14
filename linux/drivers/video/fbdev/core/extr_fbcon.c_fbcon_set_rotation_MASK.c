
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fbcon_ops {int rotate; } ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct fb_info *VAR_1)
{
 struct fbcon_ops *VAR_2 = VAR_1->fbcon_par;

 VAR_2->rotate = VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {scalar_t__ vc_mode; } ;
struct fbcon_ops {scalar_t__ graphics; } ;
struct fb_info {scalar_t__ state; struct fbcon_ops* fbcon_par; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct vc_data *VAR_2, struct fb_info *VAR_3)
{
 struct fbcon_ops *VAR_4 = VAR_3->fbcon_par;

 return (VAR_3->state != VAR_0 ||
  VAR_2->vc_mode != VAR_1 || VAR_4->graphics);
}

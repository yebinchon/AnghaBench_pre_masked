
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_channel {int lock; int mode_name; int color_name; int attr_groups; int attr_group; int attrs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct gb_channel *VAR_0)
{
 FUNC_0(VAR_0->attrs);
 FUNC_0(VAR_0->attr_group);
 FUNC_0(VAR_0->attr_groups);
 FUNC_0(VAR_0->color_name);
 FUNC_0(VAR_0->mode_name);
 FUNC_1(&VAR_0->lock);
}

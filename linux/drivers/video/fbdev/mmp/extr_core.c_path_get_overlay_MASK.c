
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_path {int overlay_num; struct mmp_overlay* overlays; } ;
struct mmp_overlay {int dummy; } ;



__attribute__((used)) static struct mmp_overlay *FUNC_0(struct mmp_path *VAR_0,
  int VAR_1)
{
 if (VAR_0 && VAR_1 < VAR_0->overlay_num)
  return &VAR_0->overlays[VAR_1];
 return ((void*)0);
}

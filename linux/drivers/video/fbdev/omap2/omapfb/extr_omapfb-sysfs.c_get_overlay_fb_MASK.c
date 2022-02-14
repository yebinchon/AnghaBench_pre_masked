
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_info {int num_overlays; struct omap_overlay** overlays; } ;
struct omapfb2_device {int num_fbs; int * fbs; } ;
struct omap_overlay {int dummy; } ;


 struct omapfb_info* FUNC_0 (int ) ;

__attribute__((used)) static struct omapfb_info *FUNC_1(struct omapfb2_device *VAR_0,
  struct omap_overlay *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_fbs; VAR_2++) {
  struct omapfb_info *VAR_4 = FUNC_0(VAR_0->fbs[VAR_2]);

  for (VAR_3 = 0; VAR_3 < VAR_4->num_overlays; VAR_3++) {
   if (VAR_4->overlays[VAR_3] == VAR_1)
    return VAR_4;
  }
 }

 return ((void*)0);
}

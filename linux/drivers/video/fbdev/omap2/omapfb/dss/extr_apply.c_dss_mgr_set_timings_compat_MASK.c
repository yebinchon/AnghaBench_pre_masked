
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_video_timings {int dummy; } ;
struct omap_overlay_manager {int name; } ;
struct mgr_priv_data {scalar_t__ updating; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct omap_overlay_manager*,struct omap_video_timings const*) ;
 struct mgr_priv_data* FUNC_2 (struct omap_overlay_manager*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct omap_overlay_manager *VAR_1,
  const struct omap_video_timings *VAR_2)
{
 unsigned long VAR_3;
 struct mgr_priv_data *VAR_4 = FUNC_2(VAR_1);

 FUNC_3(&VAR_0, VAR_3);

 if (VAR_4->updating) {
  FUNC_0("cannot set timings for %s: manager needs to be disabled\n",
   VAR_1->name);
  goto out;
 }

 FUNC_1(VAR_1, VAR_2);
out:
 FUNC_4(&VAR_0, VAR_3);
}

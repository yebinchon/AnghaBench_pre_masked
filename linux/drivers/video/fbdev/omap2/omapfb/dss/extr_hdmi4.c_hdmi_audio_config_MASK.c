
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_dss_audio {int dummy; } ;
struct TYPE_3__ {int pixelclock; } ;
struct TYPE_4__ {TYPE_1__ timings; } ;
struct omap_hdmi {int audio_configured; int lock; struct omap_dss_audio audio_config; TYPE_2__ cfg; int wp; int core; int display_enabled; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct omap_hdmi* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int *,struct omap_dss_audio*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1,
        struct omap_dss_audio *VAR_2)
{
 struct omap_hdmi *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 FUNC_3(&VAR_3->lock);

 if (!FUNC_2(&VAR_3->cfg) || !VAR_3->display_enabled) {
  VAR_4 = -VAR_0;
  goto out;
 }

 VAR_4 = FUNC_1(&VAR_3->core, &VAR_3->wp, VAR_2,
     VAR_3->cfg.timings.pixelclock);
 if (!VAR_4) {
  VAR_3->audio_configured = 1;
  VAR_3->audio_config = *VAR_2;
 }
out:
 FUNC_4(&VAR_3->lock);

 return VAR_4;
}

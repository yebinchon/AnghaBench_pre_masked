
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct omap_dss_device {int * manager; } ;
struct TYPE_6__ {int pixelclock; } ;
struct TYPE_7__ {TYPE_1__ timings; } ;
struct TYPE_9__ {int audio_configured; int display_enabled; int lock; int audio_playing_lock; scalar_t__ audio_playing; TYPE_3__* pdev; int (* audio_abort_cb ) (int *) ;TYPE_2__ cfg; int audio_config; int wp; int core; struct omap_dss_device output; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_2 (int *,int *,int *,int ) ;
 int FUNC_3 (struct omap_dss_device*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct omap_dss_device *VAR_2)
{
 struct omap_dss_device *VAR_3 = &VAR_1.output;
 unsigned long VAR_4;
 int VAR_5 = 0;

 FUNC_0("ENTER hdmi_display_enable\n");

 FUNC_5(&VAR_1.lock);

 if (VAR_3->manager == ((void*)0)) {
  FUNC_1("failed to enable display: no output/manager\n");
  VAR_5 = -VAR_0;
  goto err0;
 }

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5) {
  FUNC_1("failed to power on device\n");
  goto err0;
 }

 if (VAR_1.audio_configured) {
  VAR_5 = FUNC_2(&VAR_1.core, &VAR_1.wp, &VAR_1.audio_config,
           VAR_1.cfg.timings.pixelclock);
  if (VAR_5) {
   FUNC_1("Error restoring audio configuration: %d", VAR_5);
   VAR_1.audio_abort_cb(&VAR_1.pdev->dev);
   VAR_1.audio_configured = 0;
  }
 }

 FUNC_7(&VAR_1.audio_playing_lock, VAR_4);
 if (VAR_1.audio_configured && VAR_1.audio_playing)
  FUNC_4(&VAR_1);
 VAR_1.display_enabled = 1;
 FUNC_8(&VAR_1.audio_playing_lock, VAR_4);

 FUNC_6(&VAR_1.lock);
 return 0;

err0:
 FUNC_6(&VAR_1.lock);
 return VAR_5;
}

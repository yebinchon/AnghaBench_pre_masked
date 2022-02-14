
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct omap_dss_device {int dummy; } ;
struct TYPE_3__ {int display_enabled; int lock; int audio_playing_lock; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct omap_dss_device *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0("Enter hdmi_display_disable\n");

 FUNC_3(&VAR_0.lock);

 FUNC_5(&VAR_0.audio_playing_lock, VAR_2);
 FUNC_2(&VAR_0);
 VAR_0.display_enabled = 0;
 FUNC_6(&VAR_0.audio_playing_lock, VAR_2);

 FUNC_1(VAR_1);

 FUNC_4(&VAR_0.lock);
}

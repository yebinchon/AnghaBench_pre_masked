
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hdmi {void (* audio_abort_cb ) (struct device*) ;int lock; int display_enabled; int cfg; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct omap_hdmi* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1,
         void (*VAR_2)(struct device *VAR_3))
{
 struct omap_hdmi *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0;

 FUNC_2(&VAR_4->lock);

 if (!FUNC_1(&VAR_4->cfg) || !VAR_4->display_enabled) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_4->audio_abort_cb = VAR_2;

out:
 FUNC_3(&VAR_4->lock);

 return VAR_5;
}

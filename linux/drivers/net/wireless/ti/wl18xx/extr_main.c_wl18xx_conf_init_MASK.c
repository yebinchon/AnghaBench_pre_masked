
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlcore_platdev_data {TYPE_1__* family; } ;
struct wl18xx_priv {int conf; } ;
struct wl1271 {int conf; struct wl18xx_priv* priv; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int cfg_name; } ;


 struct wlcore_platdev_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct device*,int *,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct wl1271 *VAR_2, struct device *VAR_3)
{
 struct platform_device *VAR_4 = VAR_2->pdev;
 struct wlcore_platdev_data *VAR_5 = FUNC_0(&VAR_4->dev);
 struct wl18xx_priv *VAR_6 = VAR_2->priv;

 if (FUNC_3(VAR_3, &VAR_2->conf, &VAR_6->conf,
      VAR_5->family->cfg_name) < 0) {
  FUNC_2("falling back to default config");


  FUNC_1(&VAR_2->conf, &VAR_0, sizeof(VAR_2->conf));

  FUNC_1(&VAR_6->conf, &VAR_1,
         sizeof(VAR_6->conf));
 }

 return 0;
}

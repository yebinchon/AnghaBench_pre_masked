
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {int * manager; } ;
struct TYPE_2__ {int venc_lock; scalar_t__ wss_data; struct omap_dss_device output; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_5(struct omap_dss_device *VAR_2)
{
 struct omap_dss_device *VAR_3 = &VAR_1.output;
 int VAR_4;

 FUNC_0("venc_display_enable\n");

 FUNC_2(&VAR_1.venc_lock);

 if (VAR_3->manager == ((void*)0)) {
  FUNC_1("Failed to enable display: no output/manager\n");
  VAR_4 = -VAR_0;
  goto err0;
 }

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  goto err0;

 VAR_1.wss_data = 0;

 FUNC_3(&VAR_1.venc_lock);

 return 0;
err0:
 FUNC_3(&VAR_1.venc_lock);
 return VAR_4;
}

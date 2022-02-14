
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct venc_config {int bstamp_wss_data; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {int wss_data; int venc_lock; int timings; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct venc_config* FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct omap_dss_device *VAR_2, u32 VAR_3)
{
 const struct venc_config *VAR_4;
 int VAR_5;

 FUNC_0("venc_set_wss\n");

 FUNC_1(&VAR_1.venc_lock);

 VAR_4 = FUNC_5(&VAR_1.timings);


 VAR_1.wss_data = (VAR_3 ^ 0xfffff) << 8;

 VAR_5 = FUNC_3();
 if (VAR_5)
  goto err;

 FUNC_6(VAR_0, VAR_4->bstamp_wss_data |
   VAR_1.wss_data);

 FUNC_4();

err:
 FUNC_2(&VAR_1.venc_lock);

 return VAR_5;
}

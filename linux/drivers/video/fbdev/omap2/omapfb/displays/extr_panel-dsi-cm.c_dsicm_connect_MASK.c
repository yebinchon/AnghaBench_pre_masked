
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct panel_drv_data {int channel; struct omap_dss_device* in; TYPE_1__* pdev; } ;
struct TYPE_6__ {TYPE_2__* dsi; } ;
struct omap_dss_device {TYPE_3__ ops; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int (* connect ) (struct omap_dss_device*,struct omap_dss_device*) ;int (* request_vc ) (struct omap_dss_device*,int *) ;int (* set_vc_id ) (struct omap_dss_device*,int ,int ) ;int (* disconnect ) (struct omap_dss_device*,struct omap_dss_device*) ;int (* release_vc ) (struct omap_dss_device*,int ) ;} ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (struct omap_dss_device*,struct omap_dss_device*) ;
 int FUNC_3 (struct omap_dss_device*,int *) ;
 int FUNC_4 (struct omap_dss_device*,int ,int ) ;
 int FUNC_5 (struct omap_dss_device*,int ) ;
 int FUNC_6 (struct omap_dss_device*,struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_7 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_8(struct omap_dss_device *VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_7(VAR_1);
 struct omap_dss_device *VAR_3 = VAR_2->in;
 struct device *VAR_4 = &VAR_2->pdev->dev;
 int VAR_5;

 if (FUNC_1(VAR_1))
  return 0;

 VAR_5 = VAR_3->ops.dsi->connect(VAR_3, VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_4, "Failed to connect to video source\n");
  return VAR_5;
 }

 VAR_5 = VAR_3->ops.dsi->request_vc(VAR_2->in, &VAR_2->channel);
 if (VAR_5) {
  FUNC_0(VAR_4, "failed to get virtual channel\n");
  goto err_req_vc;
 }

 VAR_5 = VAR_3->ops.dsi->set_vc_id(VAR_2->in, VAR_2->channel, VAR_0);
 if (VAR_5) {
  FUNC_0(VAR_4, "failed to set VC_ID\n");
  goto err_vc_id;
 }

 return 0;

err_vc_id:
 VAR_3->ops.dsi->release_vc(VAR_2->in, VAR_2->channel);
err_req_vc:
 VAR_3->ops.dsi->disconnect(VAR_3, VAR_1);
 return VAR_5;
}

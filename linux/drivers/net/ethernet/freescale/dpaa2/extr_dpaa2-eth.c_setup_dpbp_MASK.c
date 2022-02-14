
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
struct fsl_mc_device {int mc_handle; TYPE_3__ obj_desc; } ;
struct dpbp_attr {int bpid; } ;
struct dpaa2_eth_priv {int mc_io; int bpid; struct fsl_mc_device* dpbp_dev; TYPE_2__* net_dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,struct dpbp_attr*) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,struct fsl_mc_device**) ;
 int FUNC_8 (struct fsl_mc_device*) ;
 int FUNC_9 (struct device*) ;

__attribute__((used)) static int FUNC_10(struct dpaa2_eth_priv *VAR_3)
{
 int VAR_4;
 struct fsl_mc_device *VAR_5;
 struct device *VAR_6 = VAR_3->net_dev->dev.parent;
 struct dpbp_attr VAR_7;

 VAR_4 = FUNC_7(FUNC_9(VAR_6), VAR_2,
         &VAR_5);
 if (VAR_4) {
  if (VAR_4 == -VAR_0)
   VAR_4 = -VAR_1;
  else
   FUNC_0(VAR_6, "DPBP device allocation failed\n");
  return VAR_4;
 }

 VAR_3->dpbp_dev = VAR_5;

 VAR_4 = FUNC_5(VAR_3->mc_io, 0, VAR_3->dpbp_dev->obj_desc.id,
   &VAR_5->mc_handle);
 if (VAR_4) {
  FUNC_0(VAR_6, "dpbp_open() failed\n");
  goto err_open;
 }

 VAR_4 = FUNC_6(VAR_3->mc_io, 0, VAR_5->mc_handle);
 if (VAR_4) {
  FUNC_0(VAR_6, "dpbp_reset() failed\n");
  goto err_reset;
 }

 VAR_4 = FUNC_3(VAR_3->mc_io, 0, VAR_5->mc_handle);
 if (VAR_4) {
  FUNC_0(VAR_6, "dpbp_enable() failed\n");
  goto err_enable;
 }

 VAR_4 = FUNC_4(VAR_3->mc_io, 0, VAR_5->mc_handle,
      &VAR_7);
 if (VAR_4) {
  FUNC_0(VAR_6, "dpbp_get_attributes() failed\n");
  goto err_get_attr;
 }
 VAR_3->bpid = VAR_7.bpid;

 return 0;

err_get_attr:
 FUNC_2(VAR_3->mc_io, 0, VAR_5->mc_handle);
err_enable:
err_reset:
 FUNC_1(VAR_3->mc_io, 0, VAR_5->mc_handle);
err_open:
 FUNC_8(VAR_5);

 return VAR_4;
}

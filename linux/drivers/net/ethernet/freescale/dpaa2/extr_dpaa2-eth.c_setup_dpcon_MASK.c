
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
struct fsl_mc_device {int mc_handle; TYPE_3__ obj_desc; } ;
struct dpcon_attr {int dummy; } ;
struct dpaa2_eth_priv {int mc_io; TYPE_2__* net_dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fsl_mc_device* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,struct dpcon_attr*) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,struct fsl_mc_device**) ;
 int FUNC_9 (struct fsl_mc_device*) ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static struct fsl_mc_device *FUNC_11(struct dpaa2_eth_priv *VAR_3)
{
 struct fsl_mc_device *VAR_4;
 struct device *VAR_5 = VAR_3->net_dev->dev.parent;
 struct dpcon_attr VAR_6;
 int VAR_7;

 VAR_7 = FUNC_8(FUNC_10(VAR_5),
         VAR_2, &VAR_4);
 if (VAR_7) {
  if (VAR_7 == -VAR_0)
   VAR_7 = -VAR_1;
  else
   FUNC_2(VAR_5, "Not enough DPCONs, will go on as-is\n");
  return FUNC_0(VAR_7);
 }

 VAR_7 = FUNC_6(VAR_3->mc_io, 0, VAR_4->obj_desc.id, &VAR_4->mc_handle);
 if (VAR_7) {
  FUNC_1(VAR_5, "dpcon_open() failed\n");
  goto free;
 }

 VAR_7 = FUNC_7(VAR_3->mc_io, 0, VAR_4->mc_handle);
 if (VAR_7) {
  FUNC_1(VAR_5, "dpcon_reset() failed\n");
  goto close;
 }

 VAR_7 = FUNC_5(VAR_3->mc_io, 0, VAR_4->mc_handle, &VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_5, "dpcon_get_attributes() failed\n");
  goto close;
 }

 VAR_7 = FUNC_4(VAR_3->mc_io, 0, VAR_4->mc_handle);
 if (VAR_7) {
  FUNC_1(VAR_5, "dpcon_enable() failed\n");
  goto close;
 }

 return VAR_4;

close:
 FUNC_3(VAR_3->mc_io, 0, VAR_4->mc_handle);
free:
 FUNC_9(VAR_4);

 return ((void*)0);
}

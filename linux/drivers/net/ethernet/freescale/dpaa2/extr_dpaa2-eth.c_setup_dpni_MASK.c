
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int id; } ;
struct device {int dummy; } ;
struct fsl_mc_device {int mc_handle; int mc_io; TYPE_1__ obj_desc; struct device dev; } ;
struct dpaa2_eth_priv {int mc_token; int mc_io; int cls_rules; int dpni_attrs; int dpni_ver_minor; int dpni_ver_major; } ;
struct dpaa2_eth_cls_rule {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct net_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int,int ) ;
 scalar_t__ FUNC_3 (struct dpaa2_eth_priv*,int ,int ) ;
 int FUNC_4 (struct dpaa2_eth_priv*) ;
 scalar_t__ FUNC_5 (struct dpaa2_eth_priv*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int *,int *) ;
 int FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (int ,int ,int ,int *) ;
 int FUNC_10 (int ,int ,int ) ;
 struct dpaa2_eth_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct dpaa2_eth_priv*) ;
 int FUNC_13 (struct dpaa2_eth_priv*) ;
 int FUNC_14 (struct dpaa2_eth_priv*) ;

__attribute__((used)) static int FUNC_15(struct fsl_mc_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct dpaa2_eth_priv *VAR_6;
 struct net_device *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_5);
 VAR_6 = FUNC_11(VAR_7);


 VAR_8 = FUNC_9(VAR_6->mc_io, 0, VAR_4->obj_desc.id, &VAR_6->mc_token);
 if (VAR_8) {
  FUNC_0(VAR_5, "dpni_open() failed\n");
  return VAR_8;
 }


 VAR_8 = FUNC_7(VAR_6->mc_io, 0, &VAR_6->dpni_ver_major,
       &VAR_6->dpni_ver_minor);
 if (VAR_8) {
  FUNC_0(VAR_5, "dpni_get_api_version() failed\n");
  goto close;
 }
 if (FUNC_3(VAR_6, VAR_0, VAR_1) < 0) {
  FUNC_0(VAR_5, "DPNI version %u.%u not supported, need >= %u.%u\n",
   VAR_6->dpni_ver_major, VAR_6->dpni_ver_minor,
   VAR_0, VAR_1);
  VAR_8 = -VAR_2;
  goto close;
 }

 VAR_4->mc_io = VAR_6->mc_io;
 VAR_4->mc_handle = VAR_6->mc_token;

 VAR_8 = FUNC_10(VAR_6->mc_io, 0, VAR_6->mc_token);
 if (VAR_8) {
  FUNC_0(VAR_5, "dpni_reset() failed\n");
  goto close;
 }

 VAR_8 = FUNC_8(VAR_6->mc_io, 0, VAR_6->mc_token,
      &VAR_6->dpni_attrs);
 if (VAR_8) {
  FUNC_0(VAR_5, "dpni_get_attributes() failed (err=%d)\n", VAR_8);
  goto close;
 }

 VAR_8 = FUNC_12(VAR_6);
 if (VAR_8)
  goto close;

 FUNC_13(VAR_6);


 if (FUNC_5(VAR_6)) {
  VAR_8 = FUNC_14(VAR_6);
  if (VAR_8)
   goto close;
 }

 VAR_6->cls_rules = FUNC_2(VAR_5, sizeof(struct dpaa2_eth_cls_rule) *
           FUNC_4(VAR_6), VAR_3);
 if (!VAR_6->cls_rules)
  goto close;

 return 0;

close:
 FUNC_6(VAR_6->mc_io, 0, VAR_6->mc_token);

 return VAR_8;
}

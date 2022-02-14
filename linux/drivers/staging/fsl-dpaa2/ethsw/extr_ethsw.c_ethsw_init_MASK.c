
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int id; } ;
struct device {int dummy; } ;
struct fsl_mc_device {TYPE_1__ obj_desc; struct device dev; } ;
struct TYPE_4__ {scalar_t__ num_ifs; } ;
struct ethsw_core {int dpsw_handle; int mc_io; TYPE_2__ sw_attr; int dev_id; } ;
struct dpsw_stp_cfg {int state; int vlan_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int,...) ;
 struct ethsw_core* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (int ,int ,int ,TYPE_2__*) ;
 int FUNC_8 (int ,int ,int ,scalar_t__,int) ;
 int FUNC_9 (int ,int ,int ,scalar_t__,struct dpsw_stp_cfg*) ;
 int FUNC_10 (int ,int ,int ,int *) ;
 int FUNC_11 (int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_12 (struct device*) ;

__attribute__((used)) static int FUNC_13(struct fsl_mc_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct ethsw_core *VAR_11 = FUNC_3(VAR_10);
 u16 VAR_12, VAR_13, VAR_14;
 struct dpsw_stp_cfg VAR_15;
 int VAR_16;

 VAR_11->dev_id = VAR_9->obj_desc.id;

 VAR_16 = FUNC_10(VAR_11->mc_io, 0, VAR_11->dev_id, &VAR_11->dpsw_handle);
 if (VAR_16) {
  FUNC_2(VAR_10, "dpsw_open err %d\n", VAR_16);
  return VAR_16;
 }

 VAR_16 = FUNC_7(VAR_11->mc_io, 0, VAR_11->dpsw_handle,
      &VAR_11->sw_attr);
 if (VAR_16) {
  FUNC_2(VAR_10, "dpsw_get_attributes err %d\n", VAR_16);
  goto err_close;
 }

 VAR_16 = FUNC_6(VAR_11->mc_io, 0,
       &VAR_12,
       &VAR_13);
 if (VAR_16) {
  FUNC_2(VAR_10, "dpsw_get_api_version err %d\n", VAR_16);
  goto err_close;
 }


 if (VAR_12 < VAR_2 ||
     (VAR_12 == VAR_2 &&
      VAR_13 < VAR_3)) {
  FUNC_2(VAR_10, "DPSW version %d:%d not supported. Use %d.%d or greater.\n",
   VAR_12,
   VAR_13,
   VAR_2, VAR_3);
  VAR_16 = -VAR_6;
  goto err_close;
 }

 VAR_16 = FUNC_11(VAR_11->mc_io, 0, VAR_11->dpsw_handle);
 if (VAR_16) {
  FUNC_2(VAR_10, "dpsw_reset err %d\n", VAR_16);
  goto err_close;
 }

 VAR_16 = FUNC_5(VAR_11->mc_io, 0, VAR_11->dpsw_handle, 0,
      VAR_1);
 if (VAR_16) {
  FUNC_2(VAR_10, "dpsw_fdb_set_learning_mode err %d\n", VAR_16);
  goto err_close;
 }

 VAR_15.vlan_id = VAR_0;
 VAR_15.state = VAR_4;

 for (VAR_14 = 0; VAR_14 < VAR_11->sw_attr.num_ifs; VAR_14++) {
  VAR_16 = FUNC_9(VAR_11->mc_io, 0, VAR_11->dpsw_handle, VAR_14,
          &VAR_15);
  if (VAR_16) {
   FUNC_2(VAR_10, "dpsw_if_set_stp err %d for port %d\n",
    VAR_16, VAR_14);
   goto err_close;
  }

  VAR_16 = FUNC_8(VAR_11->mc_io, 0,
         VAR_11->dpsw_handle, VAR_14, 1);
  if (VAR_16) {
   FUNC_2(VAR_10,
    "dpsw_if_set_broadcast err %d for port %d\n",
    VAR_16, VAR_14);
   goto err_close;
  }
 }

 VAR_8 = FUNC_0("%s_ordered", VAR_7,
         "ethsw");
 if (!VAR_8) {
  VAR_16 = -VAR_5;
  goto err_close;
 }

 VAR_16 = FUNC_12(VAR_10);
 if (VAR_16)
  goto err_destroy_ordered_workqueue;

 return 0;

err_destroy_ordered_workqueue:
 FUNC_1(VAR_8);

err_close:
 FUNC_4(VAR_11->mc_io, 0, VAR_11->dpsw_handle);
 return VAR_16;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int notifier_call; } ;
struct mlxsw_sp {scalar_t__ clock; TYPE_1__* ptp_ops; scalar_t__ ptp_state; TYPE_2__ netdevice_nb; struct mlxsw_bus_info const* bus_info; struct mlxsw_core* core; } ;
struct mlxsw_core {int dummy; } ;
struct mlxsw_bus_info {int dev; scalar_t__ read_frc_capable; } ;
struct TYPE_4__ {int (* clock_fini ) (scalar_t__) ;int (* fini ) (scalar_t__) ;scalar_t__ (* init ) (struct mlxsw_sp*) ;scalar_t__ (* clock_init ) (struct mlxsw_sp*,int ) ;} ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 struct mlxsw_sp* FUNC_3 (struct mlxsw_core*) ;
 int FUNC_4 (struct mlxsw_sp*) ;
 int FUNC_5 (struct mlxsw_sp*) ;
 int FUNC_6 (struct mlxsw_sp*) ;
 int FUNC_7 (struct mlxsw_sp*) ;
 int FUNC_8 (struct mlxsw_sp*) ;
 int FUNC_9 (struct mlxsw_sp*) ;
 int FUNC_10 (struct mlxsw_sp*) ;
 int FUNC_11 (struct mlxsw_sp*) ;
 int FUNC_12 (struct mlxsw_sp*) ;
 int FUNC_13 (struct mlxsw_sp*) ;
 int FUNC_14 (struct mlxsw_sp*) ;
 int FUNC_15 (struct mlxsw_sp*) ;
 int FUNC_16 (struct mlxsw_sp*) ;
 int FUNC_17 (struct mlxsw_sp*) ;
 int FUNC_18 (struct mlxsw_sp*) ;
 int FUNC_19 (struct mlxsw_sp*) ;
 int FUNC_20 (struct mlxsw_sp*) ;
 int FUNC_21 (struct mlxsw_sp*) ;
 int FUNC_22 (struct mlxsw_sp*) ;
 int FUNC_23 (struct mlxsw_sp*) ;
 int VAR_0 ;
 int FUNC_24 (struct mlxsw_sp*) ;
 int FUNC_25 (struct mlxsw_sp*) ;
 int FUNC_26 (struct mlxsw_sp*) ;
 int FUNC_27 (struct mlxsw_sp*) ;
 int FUNC_28 (struct mlxsw_sp*) ;
 int FUNC_29 (struct mlxsw_sp*) ;
 int FUNC_30 (struct mlxsw_sp*) ;
 int FUNC_31 (struct mlxsw_sp*) ;
 int FUNC_32 (struct mlxsw_sp*) ;
 int FUNC_33 (struct mlxsw_sp*) ;
 int FUNC_34 (struct mlxsw_sp*) ;
 int FUNC_35 (TYPE_2__*) ;
 scalar_t__ FUNC_36 (struct mlxsw_sp*,int ) ;
 scalar_t__ FUNC_37 (struct mlxsw_sp*) ;
 int FUNC_38 (scalar_t__) ;
 int FUNC_39 (scalar_t__) ;
 int FUNC_40 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_41(struct mlxsw_core *VAR_1,
    const struct mlxsw_bus_info *VAR_2)
{
 struct mlxsw_sp *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 VAR_3->core = VAR_1;
 VAR_3->bus_info = VAR_2;

 VAR_4 = FUNC_19(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to get base mac\n");
  return VAR_4;
 }

 VAR_4 = FUNC_21(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to initialize KVDL\n");
  return VAR_4;
 }

 VAR_4 = FUNC_18(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to initialize FIDs\n");
  goto err_fids_init;
 }

 VAR_4 = FUNC_34(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to set traps\n");
  goto err_traps_init;
 }

 VAR_4 = FUNC_14(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to initialize devlink traps\n");
  goto err_devlink_traps_init;
 }

 VAR_4 = FUNC_10(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to initialize buffers\n");
  goto err_buffers_init;
 }

 VAR_4 = FUNC_23(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to initialize LAG\n");
  goto err_lag_init;
 }




 VAR_4 = FUNC_30(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to init span system\n");
  goto err_span_init;
 }

 VAR_4 = FUNC_32(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to initialize switchdev\n");
  goto err_switchdev_init;
 }

 VAR_4 = FUNC_12(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to init counter pool\n");
  goto err_counter_pool_init;
 }

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to initialize ACL actions\n");
  goto err_afa_init;
 }

 VAR_4 = FUNC_25(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to initialize NVE\n");
  goto err_nve_init;
 }

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to initialize ACL\n");
  goto err_acl_init;
 }

 VAR_4 = FUNC_28(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to initialize router\n");
  goto err_router_init;
 }

 if (VAR_3->bus_info->read_frc_capable) {

  VAR_3->clock =
   VAR_3->ptp_ops->clock_init(VAR_3,
            VAR_3->bus_info->dev);
  if (FUNC_0(VAR_3->clock)) {
   VAR_4 = FUNC_1(VAR_3->clock);
   FUNC_2(VAR_3->bus_info->dev, "Failed to init ptp clock\n");
   goto err_ptp_clock_init;
  }
 }

 if (VAR_3->clock) {

  VAR_3->ptp_state = VAR_3->ptp_ops->init(VAR_3);
  if (FUNC_0(VAR_3->ptp_state)) {
   VAR_4 = FUNC_1(VAR_3->ptp_state);
   FUNC_2(VAR_3->bus_info->dev, "Failed to initialize PTP\n");
   goto err_ptp_init;
  }
 }





 VAR_3->netdevice_nb.notifier_call = VAR_0;
 VAR_4 = FUNC_35(&VAR_3->netdevice_nb);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to register netdev notifier\n");
  goto err_netdev_notifier;
 }

 VAR_4 = FUNC_16(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to init pipeline debug\n");
  goto err_dpipe_init;
 }

 VAR_4 = FUNC_26(VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3->bus_info->dev, "Failed to create ports\n");
  goto err_ports_create;
 }

 return 0;

err_ports_create:
 FUNC_15(VAR_3);
err_dpipe_init:
 FUNC_40(&VAR_3->netdevice_nb);
err_netdev_notifier:
 if (VAR_3->clock)
  VAR_3->ptp_ops->fini(VAR_3->ptp_state);
err_ptp_init:
 if (VAR_3->clock)
  VAR_3->ptp_ops->clock_fini(VAR_3->clock);
err_ptp_clock_init:
 FUNC_27(VAR_3);
err_router_init:
 FUNC_4(VAR_3);
err_acl_init:
 FUNC_24(VAR_3);
err_nve_init:
 FUNC_6(VAR_3);
err_afa_init:
 FUNC_11(VAR_3);
err_counter_pool_init:
 FUNC_31(VAR_3);
err_switchdev_init:
 FUNC_29(VAR_3);
err_span_init:
 FUNC_22(VAR_3);
err_lag_init:
 FUNC_9(VAR_3);
err_buffers_init:
 FUNC_13(VAR_3);
err_devlink_traps_init:
 FUNC_33(VAR_3);
err_traps_init:
 FUNC_17(VAR_3);
err_fids_init:
 FUNC_20(VAR_3);
 return VAR_4;
}

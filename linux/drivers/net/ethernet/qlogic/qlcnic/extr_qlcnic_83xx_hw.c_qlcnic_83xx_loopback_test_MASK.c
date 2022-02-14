
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct qlcnic_hardware_context {scalar_t__ op_mode; scalar_t__ has_link_events; scalar_t__ linkup; } ;
struct qlcnic_adapter {void* drv_tx_rings; void* drv_sds_rings; int state; struct qlcnic_hardware_context* ahw; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,char*,...) ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct qlcnic_adapter*,void*) ;
 int FUNC_5 (struct net_device*,int ,void*) ;
 int FUNC_6 (struct net_device*,void*) ;
 int FUNC_7 (struct qlcnic_adapter*,void*) ;
 int FUNC_8 (struct qlcnic_adapter*,void*) ;
 scalar_t__ FUNC_9 (struct qlcnic_adapter*) ;
 int FUNC_10 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_11 (int ,int *) ;

int FUNC_12(struct net_device *VAR_9, u8 VAR_10)
{
 struct qlcnic_adapter *VAR_11 = FUNC_2(VAR_9);
 struct qlcnic_hardware_context *VAR_12 = VAR_11->ahw;
 u8 VAR_13 = VAR_11->drv_sds_rings;
 u8 VAR_14 = VAR_11->drv_tx_rings;
 int VAR_15 = 0, VAR_16 = 0;

 if (VAR_12->op_mode == VAR_5) {
  FUNC_3(VAR_9,
       "Loopback test not supported in non privileged mode\n");
  return -VAR_1;
 }

 if (FUNC_11(VAR_8, &VAR_11->state)) {
  FUNC_1(VAR_9, "Device is resetting\n");
  return -VAR_0;
 }

 if (FUNC_9(VAR_11)) {
  FUNC_1(VAR_9, "Device is in diagnostics mode\n");
  return -VAR_0;
 }

 FUNC_1(VAR_9, "%s loopback test in progress\n",
      VAR_10 == VAR_3 ? "internal" : "external");

 VAR_15 = FUNC_5(VAR_9, VAR_4,
      VAR_13);
 if (VAR_15)
  goto fail_diag_alloc;

 VAR_15 = FUNC_7(VAR_11, VAR_10);
 if (VAR_15)
  goto free_diag_res;


 do {
  FUNC_0(VAR_6);

  if (FUNC_11(VAR_8, &VAR_11->state)) {
   FUNC_1(VAR_9,
        "Device is resetting, free LB test resources\n");
   VAR_15 = -VAR_0;
   goto free_diag_res;
  }
  if (VAR_16++ > VAR_7) {
   FUNC_1(VAR_9,
        "Firmware didn't sent link up event to loopback request\n");
   VAR_15 = -VAR_2;
   FUNC_4(VAR_11, VAR_10);
   goto free_diag_res;
  }
 } while ((VAR_11->ahw->linkup && VAR_12->has_link_events) != 1);

 VAR_15 = FUNC_8(VAR_11, VAR_10);

 FUNC_4(VAR_11, VAR_10);

free_diag_res:
 FUNC_6(VAR_9, VAR_13);

fail_diag_alloc:
 VAR_11->drv_sds_rings = VAR_13;
 VAR_11->drv_tx_rings = VAR_14;
 FUNC_10(VAR_11);
 return VAR_15;
}

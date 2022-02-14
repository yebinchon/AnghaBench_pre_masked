
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_hw {int port_info; } ;
struct ice_pf {int state; int flags; TYPE_1__* pdev; struct ice_hw hw; } ;
struct device {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_reset_req { ____Placeholder_ice_reset_req } ice_reset_req ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct ice_hw*) ;
 int FUNC_4 (struct ice_hw*) ;
 int FUNC_5 (struct ice_pf*) ;
 int FUNC_6 (struct ice_hw*) ;
 int FUNC_7 (struct ice_hw*) ;
 int FUNC_8 (struct ice_hw*) ;
 int FUNC_9 (struct ice_pf*) ;
 int FUNC_10 (int *,struct ice_pf*) ;
 int FUNC_11 (struct ice_hw*) ;
 int FUNC_12 (struct ice_pf*) ;
 int FUNC_13 (struct ice_hw*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct ice_pf*) ;
 int FUNC_16 (struct ice_hw*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct ice_pf*) ;
 int FUNC_19 (struct ice_pf*,int ) ;
 int FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 (int ,int ) ;

__attribute__((used)) static void FUNC_22(struct ice_pf *VAR_8, enum ice_reset_req VAR_9)
{
 struct device *VAR_10 = &VAR_8->pdev->dev;
 struct ice_hw *VAR_11 = &VAR_8->hw;
 enum ice_status VAR_12;
 int VAR_13;

 if (FUNC_21(VAR_5, VAR_8->state))
  goto clear_recovery;

 FUNC_1(VAR_10, "rebuilding PF after reset_type=%d\n", VAR_9);

 VAR_12 = FUNC_8(VAR_11);
 if (VAR_12) {
  FUNC_2(VAR_10, "control queues init failed %d\n", VAR_12);
  goto err_init_ctrlq;
 }


 if (!FUNC_9(VAR_8)) {

  if (VAR_9 == VAR_2)
   FUNC_6(VAR_11);
  else

   FUNC_10(((void*)0), VAR_8);
 }

 VAR_12 = FUNC_3(VAR_11);
 if (VAR_12) {
  FUNC_2(VAR_10, "clear PF configuration failed %d\n", VAR_12);
  goto err_init_ctrlq;
 }

 FUNC_4(VAR_11);

 VAR_12 = FUNC_7(VAR_11);
 if (VAR_12) {
  FUNC_2(VAR_10, "ice_get_caps failed %d\n", VAR_12);
  goto err_init_ctrlq;
 }

 VAR_13 = FUNC_14(VAR_11->port_info);
 if (VAR_13)
  goto err_sched_init_port;

 VAR_13 = FUNC_17(VAR_11->port_info);
 if (VAR_13)
  FUNC_2(&VAR_8->pdev->dev, "Get link status error %d\n", VAR_13);


 VAR_13 = FUNC_12(VAR_8);
 if (VAR_13) {
  FUNC_2(VAR_10, "misc vector setup failed: %d\n", VAR_13);
  goto err_sched_init_port;
 }

 if (FUNC_21(VAR_0, VAR_8->flags))
  FUNC_5(VAR_8);


 VAR_13 = FUNC_19(VAR_8, VAR_3);
 if (VAR_13) {
  FUNC_2(VAR_10, "PF VSI rebuild failed: %d\n", VAR_13);
  goto err_vsi_rebuild;
 }

 if (FUNC_21(VAR_1, VAR_8->flags)) {
  VAR_13 = FUNC_19(VAR_8, VAR_4);
  if (VAR_13) {
   FUNC_2(VAR_10, "VF VSI rebuild failed: %d\n", VAR_13);
   goto err_vsi_rebuild;
  }
 }

 FUNC_18(VAR_8);


 VAR_12 = FUNC_15(VAR_8);
 if (VAR_12) {
  FUNC_2(VAR_10,
   "Rebuild failed due to error sending driver version: %d\n",
   VAR_12);
  goto err_vsi_rebuild;
 }

 FUNC_11(VAR_11);


 FUNC_0(VAR_7, VAR_8->state);
 return;

err_vsi_rebuild:
err_sched_init_port:
 FUNC_13(VAR_11);
err_init_ctrlq:
 FUNC_16(VAR_11);
 FUNC_20(VAR_7, VAR_8->state);
clear_recovery:

 FUNC_20(VAR_6, VAR_8->state);
 FUNC_2(VAR_10, "Rebuild failed, unload and reload driver\n");
}

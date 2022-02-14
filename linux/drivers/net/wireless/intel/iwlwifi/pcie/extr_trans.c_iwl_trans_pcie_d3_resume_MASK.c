
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans_pcie {int sx_complete; int sx_waitq; int msix_enabled; } ;
struct iwl_trans {TYPE_2__* trans_cfg; } ;
typedef enum iwl_d3_status { ____Placeholder_iwl_d3_status } iwl_d3_status ;
struct TYPE_4__ {scalar_t__ device_family; TYPE_1__* csr; } ;
struct TYPE_3__ {int flag_mac_access_req; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct iwl_trans*,char*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_3 (struct iwl_trans*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct iwl_trans*,int ,int ) ;
 int FUNC_5 (struct iwl_trans*) ;
 int FUNC_6 (struct iwl_trans*,TYPE_2__*) ;
 int FUNC_7 (struct iwl_trans_pcie*) ;
 int FUNC_8 (struct iwl_trans*) ;
 int FUNC_9 (struct iwl_trans*) ;
 int FUNC_10 (struct iwl_trans*,int) ;
 int FUNC_11 (struct iwl_trans*,int ) ;
 int FUNC_12 (struct iwl_trans*,int ) ;
 int FUNC_13 (struct iwl_trans*,int ,int ) ;
 int FUNC_14 (struct iwl_trans*) ;
 int FUNC_15 (struct iwl_trans*,int ,int ) ;
 int FUNC_16 (int ,int,int) ;

__attribute__((used)) static int FUNC_17(struct iwl_trans *VAR_11,
        enum iwl_d3_status *VAR_12,
        bool VAR_13, bool VAR_14)
{
 struct iwl_trans_pcie *VAR_15 = FUNC_3(VAR_11);
 u32 VAR_16;
 int VAR_17;

 if (VAR_13) {
  FUNC_5(VAR_11);
  *VAR_12 = VAR_5;
  goto out;
 }

 FUNC_13(VAR_11, VAR_0,
      FUNC_0(VAR_11->trans_cfg->csr->flag_mac_access_req));

 VAR_17 = FUNC_6(VAR_11, VAR_11->trans_cfg);
 if (VAR_17)
  return VAR_17;
 FUNC_7(VAR_15);
 if (!VAR_15->msix_enabled)
  FUNC_8(VAR_11);
 FUNC_5(VAR_11);

 FUNC_10(VAR_11, 0);

 if (!VAR_14) {
  FUNC_4(VAR_11, VAR_0,
         FUNC_0(VAR_11->trans_cfg->csr->flag_mac_access_req));
 } else {
  FUNC_14(VAR_11);

  VAR_17 = FUNC_9(VAR_11);
  if (VAR_17) {
   FUNC_2(VAR_11,
    "Failed to resume the device (RX reset)\n");
   return VAR_17;
  }
 }

 FUNC_1(VAR_11, "WFPM value upon resume = 0x%08X\n",
   FUNC_12(VAR_11, VAR_10));

 VAR_16 = FUNC_11(VAR_11, VAR_1);
 if (VAR_16 & VAR_2)
  *VAR_12 = VAR_6;
 else
  *VAR_12 = VAR_5;

out:
 if (*VAR_12 == VAR_5 &&
     VAR_11->trans_cfg->device_family >= VAR_7) {
  VAR_15->sx_complete = 0;
  FUNC_15(VAR_11, VAR_8,
        VAR_9);

  VAR_17 = FUNC_16(VAR_15->sx_waitq,
      VAR_15->sx_complete, 2 * VAR_4);



  VAR_15->sx_complete = 0;

  if (!VAR_17) {
   FUNC_2(VAR_11, "Timeout exiting D3\n");
   return -VAR_3;
  }
 }
 return 0;
}

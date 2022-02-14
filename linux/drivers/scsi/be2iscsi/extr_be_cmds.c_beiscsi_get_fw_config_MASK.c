
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int phys_port; int eqid_count; int cqid_count; int* iscsi_icd_count; int dual_ulp_aware; int ulp_supported; int * iscsi_icd_start; int * iscsi_cid_start; int * iscsi_cid_count; int * iscsi_chain_count; int * iscsi_chain_start; } ;
struct beiscsi_hba {TYPE_3__ fw_config; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_fw_cfg {int phys_port; int eqid_count; int cqid_count; int function_mode; TYPE_2__* ulp; TYPE_1__* chain_icd; int hdr; } ;
struct be_ctrl_info {int mbox_lock; int mbox_mem; } ;
struct TYPE_5__ {int ulp_mode; int icd_count; int icd_base; int sq_count; int sq_base; } ;
struct TYPE_4__ {int chain_count; int chain_base; } ;


 int VAR_0 ;
 int FUNC_0 (struct beiscsi_hba*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct be_ctrl_info*) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int ) ;
 int FUNC_4 (struct beiscsi_hba*,int ,int ,char*,...) ;
 struct be_fw_cfg* FUNC_5 (struct be_mcc_wrb*) ;
 int FUNC_6 (struct beiscsi_hba*) ;
 int FUNC_7 (struct be_mcc_wrb*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (size_t,int *) ;
 scalar_t__ FUNC_11 (size_t,int *) ;
 struct be_mcc_wrb* FUNC_12 (int *) ;

int FUNC_13(struct be_ctrl_info *VAR_13,
     struct beiscsi_hba *VAR_14)
{
 struct be_mcc_wrb *VAR_15 = FUNC_12(&VAR_13->mbox_mem);
 struct be_fw_cfg *VAR_16 = FUNC_5(VAR_15);
 uint32_t VAR_17, VAR_18;
 int VAR_19 = -VAR_8;
 uint8_t VAR_20 = 0;

 FUNC_8(&VAR_13->mbox_lock);
 FUNC_7(VAR_15, 0, sizeof(*VAR_15));
 FUNC_3(VAR_15, sizeof(*VAR_16), 1, 0);

 FUNC_1(&VAR_16->hdr, VAR_7,
      VAR_12,
      VAR_9);

 if (FUNC_2(VAR_13)) {
  FUNC_4(VAR_14, VAR_10, VAR_1,
       "BG_%d : Failed in beiscsi_get_fw_config\n");
  goto fail_init;
 }


 VAR_14->fw_config.phys_port = VAR_16->phys_port;
 if (VAR_14->fw_config.phys_port >= VAR_2) {
  FUNC_4(VAR_14, VAR_10, VAR_1,
       "BG_%d : invalid physical port id %d\n",
       VAR_14->fw_config.phys_port);
  goto fail_init;
 }


 if (!FUNC_6(VAR_14)) {
  VAR_14->fw_config.eqid_count = VAR_16->eqid_count;
  VAR_14->fw_config.cqid_count = VAR_16->cqid_count;
  if (VAR_14->fw_config.eqid_count == 0 ||
      VAR_14->fw_config.eqid_count > 2048) {
   FUNC_4(VAR_14, VAR_10, VAR_1,
        "BG_%d : invalid EQ count %d\n",
        VAR_14->fw_config.eqid_count);
   goto fail_init;
  }
  if (VAR_14->fw_config.cqid_count == 0 ||
      VAR_14->fw_config.cqid_count > 4096) {
   FUNC_4(VAR_14, VAR_10, VAR_1,
        "BG_%d : invalid CQ count %d\n",
        VAR_14->fw_config.cqid_count);
   goto fail_init;
  }
  FUNC_4(VAR_14, VAR_11, VAR_1,
       "BG_%d : EQ_Count : %d CQ_Count : %d\n",
       VAR_14->fw_config.eqid_count,
       VAR_14->fw_config.cqid_count);
 }







 for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++) {
  if (VAR_16->ulp[VAR_20].ulp_mode &
      VAR_6) {
   FUNC_10(VAR_20, &VAR_14->fw_config.ulp_supported);


   VAR_14->fw_config.iscsi_cid_start[VAR_20] =
    VAR_16->ulp[VAR_20].sq_base;
   VAR_14->fw_config.iscsi_cid_count[VAR_20] =
    VAR_16->ulp[VAR_20].sq_count;

   VAR_14->fw_config.iscsi_icd_start[VAR_20] =
    VAR_16->ulp[VAR_20].icd_base;
   VAR_14->fw_config.iscsi_icd_count[VAR_20] =
    VAR_16->ulp[VAR_20].icd_count;

   VAR_14->fw_config.iscsi_chain_start[VAR_20] =
    VAR_16->chain_icd[VAR_20].chain_base;
   VAR_14->fw_config.iscsi_chain_count[VAR_20] =
    VAR_16->chain_icd[VAR_20].chain_count;

   FUNC_4(VAR_14, VAR_11, VAR_1,
        "BG_%d : Function loaded on ULP : %d\n"
        "\tiscsi_cid_count : %d\n"
        "\tiscsi_cid_start : %d\n"
        "\t iscsi_icd_count : %d\n"
        "\t iscsi_icd_start : %d\n",
        VAR_20,
        VAR_14->fw_config.
        iscsi_cid_count[VAR_20],
        VAR_14->fw_config.
        iscsi_cid_start[VAR_20],
        VAR_14->fw_config.
        iscsi_icd_count[VAR_20],
        VAR_14->fw_config.
        iscsi_icd_start[VAR_20]);
  }
 }

 if (VAR_14->fw_config.ulp_supported == 0) {
  FUNC_4(VAR_14, VAR_10, VAR_1,
       "BG_%d : iSCSI initiator mode not set: ULP0 %x ULP1 %x\n",
       VAR_16->ulp[VAR_3].ulp_mode,
       VAR_16->ulp[VAR_4].ulp_mode);
  goto fail_init;
 }




 for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++)
  if (FUNC_11(VAR_20, &VAR_14->fw_config.ulp_supported))
   break;
 VAR_18 = VAR_14->fw_config.iscsi_icd_count[VAR_20];
 if (VAR_18 == 0 || VAR_18 > 65536) {
  FUNC_4(VAR_14, VAR_10, VAR_1,
       "BG_%d: invalid ICD count %d\n", VAR_18);
  goto fail_init;
 }

 VAR_17 = FUNC_0(VAR_14, VAR_3) +
      FUNC_0(VAR_14, VAR_4);
 if (VAR_17 == 0 || VAR_17 > 4096) {
  FUNC_4(VAR_14, VAR_10, VAR_1,
       "BG_%d: invalid CID count %d\n", VAR_17);
  goto fail_init;
 }





 VAR_14->fw_config.dual_ulp_aware = (VAR_16->function_mode &
       VAR_0);

 FUNC_4(VAR_14, VAR_11, VAR_1,
      "BG_%d : DUA Mode : 0x%x\n",
      VAR_14->fw_config.dual_ulp_aware);


 VAR_19 = 0;
fail_init:
 FUNC_9(&VAR_13->mbox_lock);
 return VAR_19;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_4__ {int* param_val; } ;
struct dbg_tools_data {TYPE_2__ grc; } ;
struct qed_hwfn {struct dbg_tools_data dbg_info; } ;
struct TYPE_3__ {size_t engine_for_debug; } ;
struct qed_dev {int num_hwfns; TYPE_1__ dbg_params; struct qed_hwfn* hwfns; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_dev*,char*,int,...) ;
 int FUNC_1 (struct qed_dev*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,scalar_t__,int,scalar_t__) ;
 int FUNC_3 (struct qed_dev*,scalar_t__*,int*) ;
 int FUNC_4 (struct qed_dev*,scalar_t__*,int*) ;
 int FUNC_5 (struct qed_dev*,scalar_t__*,int*) ;
 int FUNC_6 (struct qed_dev*,scalar_t__*,int*) ;
 int FUNC_7 (struct qed_dev*,scalar_t__*,int*) ;
 int FUNC_8 (struct qed_dev*,scalar_t__*,int*,int ) ;
 int FUNC_9 (struct qed_dev*,scalar_t__*,int*) ;
 int FUNC_10 (struct qed_dev*,scalar_t__*,int*) ;
 scalar_t__ FUNC_11 (struct qed_dev*) ;
 int FUNC_12 (struct qed_dev*,scalar_t__) ;

int FUNC_13(struct qed_dev *VAR_17, void *VAR_18)
{
 u8 VAR_19, VAR_20 = 0, VAR_21;
 struct qed_hwfn *VAR_22 =
  &VAR_17->hwfns[VAR_17->dbg_params.engine_for_debug];
 struct dbg_tools_data *VAR_23 = &VAR_22->dbg_info;
 int VAR_24[VAR_6], VAR_25;
 u32 VAR_26 = 0, VAR_27;
 int VAR_28;

 for (VAR_25 = 0; VAR_25 < VAR_6; VAR_25++)
  VAR_24[VAR_25] = VAR_23->grc.param_val[VAR_25];

 if (VAR_17->num_hwfns == 1)
  VAR_20 = 1;

 VAR_21 = FUNC_11(VAR_17);
 for (VAR_19 = 0; VAR_19 < VAR_17->num_hwfns; VAR_19++) {

  FUNC_1(VAR_17, VAR_11,
      "obtaining idle_chk and grcdump for current engine\n");
  FUNC_12(VAR_17, VAR_19);


  VAR_28 = FUNC_5(VAR_17, (u8 *)VAR_18 + VAR_26 +
          VAR_15, &VAR_27);
  if (!VAR_28) {
   *(u32 *)((u8 *)VAR_18 + VAR_26) =
       FUNC_2(VAR_4, VAR_19,
          VAR_27, VAR_20);
   VAR_26 += (VAR_27 + VAR_15);
  } else {
   FUNC_0(VAR_17, "qed_dbg_idle_chk failed. rc = %d\n", VAR_28);
  }


  VAR_28 = FUNC_5(VAR_17, (u8 *)VAR_18 + VAR_26 +
          VAR_15, &VAR_27);
  if (!VAR_28) {
   *(u32 *)((u8 *)VAR_18 + VAR_26) =
       FUNC_2(VAR_4, VAR_19,
          VAR_27, VAR_20);
   VAR_26 += (VAR_27 + VAR_15);
  } else {
   FUNC_0(VAR_17, "qed_dbg_idle_chk failed. rc = %d\n", VAR_28);
  }


  VAR_28 = FUNC_10(VAR_17, (u8 *)VAR_18 + VAR_26 +
          VAR_15, &VAR_27);
  if (!VAR_28) {
   *(u32 *)((u8 *)VAR_18 + VAR_26) =
       FUNC_2(VAR_16, VAR_19,
          VAR_27, VAR_20);
   VAR_26 += (VAR_27 + VAR_15);
  } else {
   FUNC_0(VAR_17, "qed_dbg_reg_fifo failed. rc = %d\n", VAR_28);
  }


  VAR_28 = FUNC_6(VAR_17, (u8 *)VAR_18 + VAR_26 +
          VAR_15, &VAR_27);
  if (!VAR_28) {
   *(u32 *)((u8 *)VAR_18 + VAR_26) =
       FUNC_2(VAR_5, VAR_19,
          VAR_27, VAR_20);
   VAR_26 += (VAR_27 + VAR_15);
  } else {
   FUNC_0(VAR_17, "qed_dbg_igu_fifo failed. rc = %d", VAR_28);
  }


  VAR_28 = FUNC_9(VAR_17, (u8 *)VAR_18 + VAR_26 +
       VAR_15,
       &VAR_27);
  if (!VAR_28) {
   *(u32 *)((u8 *)VAR_18 + VAR_26) =
       FUNC_2(VAR_10,
          VAR_19,
          VAR_27, VAR_20);
   VAR_26 += (VAR_27 + VAR_15);
  } else {
   FUNC_0(VAR_17,
          "qed_dbg_protection_override failed. rc = %d\n",
          VAR_28);
  }


  VAR_28 = FUNC_3(VAR_17, (u8 *)VAR_18 + VAR_26 +
     VAR_15, &VAR_27);
  if (!VAR_28) {
   *(u32 *)((u8 *)VAR_18 + VAR_26) =
       FUNC_2(VAR_2, VAR_19,
          VAR_27, VAR_20);
   VAR_26 += (VAR_27 + VAR_15);
  } else {
   FUNC_0(VAR_17, "qed_dbg_fw_asserts failed. rc = %d\n",
          VAR_28);
  }

  for (VAR_25 = 0; VAR_25 < VAR_6; VAR_25++)
   VAR_23->grc.param_val[VAR_25] = VAR_24[VAR_25];




  VAR_28 = FUNC_4(VAR_17, (u8 *)VAR_18 + VAR_26 +
     VAR_15, &VAR_27);
  if (!VAR_28) {
   *(u32 *)((u8 *)VAR_18 + VAR_26) =
       FUNC_2(VAR_3, VAR_19,
          VAR_27, VAR_20);
   VAR_26 += (VAR_27 + VAR_15);
  } else {
   FUNC_0(VAR_17, "qed_dbg_grc failed. rc = %d", VAR_28);
  }
 }

 FUNC_12(VAR_17, VAR_21);

 VAR_28 = FUNC_7(VAR_17, (u8 *)VAR_18 + VAR_26 +
          VAR_15, &VAR_27);
 if (!VAR_28) {
  *(u32 *)((u8 *)VAR_18 + VAR_26) =
      FUNC_2(VAR_7, VAR_19,
         VAR_27, VAR_20);
  VAR_26 += (VAR_27 + VAR_15);
 } else {
  FUNC_0(VAR_17, "qed_dbg_mcp_trace failed. rc = %d\n", VAR_28);
 }


 VAR_28 = FUNC_8(VAR_17,
          (u8 *)VAR_18 + VAR_26 + VAR_15,
          &VAR_27, VAR_13);
 if (!VAR_28) {
  *(u32 *)((u8 *)VAR_18 + VAR_26) =
      FUNC_2(VAR_8, VAR_19,
         VAR_27, VAR_20);
  VAR_26 += (VAR_27 + VAR_15);
 } else if (VAR_28 != -VAR_1) {
  FUNC_0(VAR_17,
         "qed_dbg_nvm_image failed for image  %d (%s), rc = %d\n",
         VAR_13, "QED_NVM_IMAGE_NVM_CFG1", VAR_28);
 }


 VAR_28 = FUNC_8(VAR_17,
          (u8 *)VAR_18 + VAR_26 + VAR_15,
          &VAR_27, VAR_12);
 if (!VAR_28) {
  *(u32 *)((u8 *)VAR_18 + VAR_26) =
      FUNC_2(VAR_0, VAR_19,
         VAR_27, VAR_20);
  VAR_26 += (VAR_27 + VAR_15);
 } else if (VAR_28 != -VAR_1) {
  FUNC_0(VAR_17,
         "qed_dbg_nvm_image failed for image %d (%s), rc = %d\n",
         VAR_12, "QED_NVM_IMAGE_DEFAULT_CFG",
         VAR_28);
 }


 VAR_28 = FUNC_8(VAR_17,
          (u8 *)VAR_18 + VAR_26 + VAR_15,
          &VAR_27, VAR_14);
 if (!VAR_28) {
  *(u32 *)((u8 *)VAR_18 + VAR_26) =
      FUNC_2(VAR_9, VAR_19,
         VAR_27, VAR_20);
  VAR_26 += (VAR_27 + VAR_15);
 } else if (VAR_28 != -VAR_1) {
  FUNC_0(VAR_17,
         "qed_dbg_nvm_image failed for image %d (%s), rc = %d\n",
         VAR_14, "QED_NVM_IMAGE_NVM_META", VAR_28);
 }

 return 0;
}

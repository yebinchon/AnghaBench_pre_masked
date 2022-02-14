
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef int u16 ;
struct phys_addr {int dummy; } ;
struct hwi_controller {TYPE_4__* wrb_context; struct hwi_context_memory* phwi_ctxt; } ;
struct hwi_context_memory {TYPE_1__** pasync_ctx; } ;
struct hd_async_context {scalar_t__* cid_to_async_cri_map; } ;
struct TYPE_7__ {size_t cxns_per_ctrl; } ;
struct TYPE_6__ {int ulp_supported; } ;
struct be_ctrl_info {int dummy; } ;
struct beiscsi_hba {int optic_state; TYPE_3__ params; TYPE_2__ fw_config; struct hwi_controller* phwi_ctrlr; struct be_ctrl_info ctrl; } ;
struct TYPE_8__ {size_t cid; } ;
struct TYPE_5__ {int num_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hwi_controller*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 struct hd_async_context* FUNC_1 (struct hwi_controller*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct beiscsi_hba*,struct hwi_context_memory*) ;
 int FUNC_3 (struct be_ctrl_info*,struct beiscsi_hba*) ;
 int FUNC_4 (struct beiscsi_hba*,struct hwi_context_memory*) ;
 int FUNC_5 (struct beiscsi_hba*,struct hwi_context_memory*,struct hwi_controller*,unsigned int,int) ;
 int FUNC_6 (struct beiscsi_hba*,struct hwi_context_memory*,struct hwi_controller*,unsigned int,int) ;
 int FUNC_7 (struct beiscsi_hba*,struct hwi_context_memory*) ;
 int FUNC_8 (struct beiscsi_hba*,struct hwi_context_memory*,struct hwi_controller*) ;
 int FUNC_9 (struct beiscsi_hba*,int ,int,int) ;
 int FUNC_10 (struct beiscsi_hba*,int ,int ,char*,...) ;
 int FUNC_11 (struct beiscsi_hba*) ;
 int FUNC_12 (struct beiscsi_hba*) ;
 int FUNC_13 (struct beiscsi_hba*) ;
 scalar_t__ FUNC_14 (int,int *) ;

__attribute__((used)) static int FUNC_15(struct beiscsi_hba *VAR_6)
{
 struct hwi_controller *VAR_7;
 struct hwi_context_memory *VAR_8;
 unsigned int VAR_9;
 struct be_ctrl_info *VAR_10 = &VAR_6->ctrl;
 int VAR_11, VAR_12;
 u16 VAR_13;

 VAR_7 = VAR_6->phwi_ctrlr;
 VAR_8 = VAR_7->phwi_ctxt;

 VAR_6->optic_state = 0xff;

 VAR_11 = FUNC_7(VAR_6, VAR_8);
 if (VAR_11 != 0) {
  FUNC_10(VAR_6, VAR_4, VAR_2,
       "BM_%d : EQ not created\n");
  goto error;
 }

 VAR_11 = FUNC_2(VAR_6, VAR_8);
 if (VAR_11 != 0)
  goto error;

 VAR_11 = FUNC_3(VAR_10, VAR_6);
 if (VAR_11 != 0) {
  FUNC_10(VAR_6, VAR_4, VAR_2,
       "BM_%d : Unsupported fw version\n");
  goto error;
 }

 VAR_11 = FUNC_4(VAR_6, VAR_8);
 if (VAR_11 != 0) {
  FUNC_10(VAR_6, VAR_4, VAR_2,
       "BM_%d : CQ not created\n");
  goto error;
 }

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  if (FUNC_14(VAR_12, &VAR_6->fw_config.ulp_supported)) {
   VAR_13 = VAR_8->pasync_ctx[VAR_12]->num_entries;
   VAR_9 = VAR_13 * sizeof(struct phys_addr);

   VAR_11 = FUNC_6(VAR_6, VAR_8,
       VAR_7,
       VAR_9,
       VAR_12);
   if (VAR_11 != 0) {
    FUNC_10(VAR_6, VAR_4, VAR_2,
         "BM_%d : Default Header not created for ULP : %d\n",
         VAR_12);
    goto error;
   }

   VAR_11 = FUNC_5(VAR_6, VAR_8,
        VAR_7,
        VAR_9,
        VAR_12);
   if (VAR_11 != 0) {
    FUNC_10(VAR_6, VAR_4, VAR_2,
         "BM_%d : Default Data not created for ULP : %d\n",
         VAR_12);
    goto error;
   }




   FUNC_9(VAR_6, VAR_1,
       VAR_12, VAR_13);
   FUNC_9(VAR_6, VAR_0,
       VAR_12, VAR_13);
  }
 }

 VAR_11 = FUNC_11(VAR_6);
 if (VAR_11 != 0) {
  FUNC_10(VAR_6, VAR_4, VAR_2,
       "BM_%d : Post SGL Pages Failed\n");
  goto error;
 }

 VAR_11 = FUNC_12(VAR_6);
 if (VAR_11 != 0) {
  FUNC_10(VAR_6, VAR_4, VAR_2,
       "BM_%d : Template HDR Posting for CXN Failed\n");
 }

 VAR_11 = FUNC_8(VAR_6, VAR_8, VAR_7);
 if (VAR_11 != 0) {
  FUNC_10(VAR_6, VAR_4, VAR_2,
       "BM_%d : WRB Rings not created\n");
  goto error;
 }

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  uint16_t VAR_14 = 0;

  if (FUNC_14(VAR_12, &VAR_6->fw_config.ulp_supported)) {
   uint16_t VAR_15 = 0;
   struct hd_async_context *VAR_16;

   VAR_16 = FUNC_1(
         VAR_7, VAR_12);
   for (VAR_15 = 0; VAR_15 <
        VAR_6->params.cxns_per_ctrl; VAR_15++) {
    if (VAR_12 == FUNC_0
            (VAR_7, VAR_15))
     VAR_16->cid_to_async_cri_map[
     VAR_7->wrb_context[VAR_15].cid] =
     VAR_14++;
   }
  }
 }

 FUNC_10(VAR_6, VAR_5, VAR_2,
      "BM_%d : hwi_init_port success\n");
 return 0;

error:
 FUNC_10(VAR_6, VAR_4, VAR_2,
      "BM_%d : hwi_init_port failed");
 FUNC_13(VAR_6);
 return VAR_11;
}

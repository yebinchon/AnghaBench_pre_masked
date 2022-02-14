
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
struct ulp_cid_info {size_t avlbl_cids; struct ulp_cid_info* cid_array; scalar_t__ cid_free; scalar_t__ cid_alloc; } ;
struct iscsi_endpoint {int dummy; } ;
struct TYPE_8__ {int ulp_supported; } ;
struct TYPE_5__ {size_t cxns_per_ctrl; } ;
struct beiscsi_hba {struct ulp_cid_info** cid_array_info; TYPE_4__ fw_config; TYPE_3__* phwi_ctrlr; TYPE_1__ params; struct ulp_cid_info* ep_array; void* conn_table; } ;
struct beiscsi_conn {int dummy; } ;
struct TYPE_7__ {TYPE_2__* wrb_context; } ;
struct TYPE_6__ {size_t ulp_num; struct ulp_cid_info cid; } ;


 size_t FUNC_0 (struct beiscsi_hba*,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*,...) ;
 void* FUNC_2 (size_t,int,int ) ;
 int FUNC_3 (struct ulp_cid_info*) ;
 struct ulp_cid_info* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (size_t,void*) ;

__attribute__((used)) static int FUNC_6(struct beiscsi_hba *VAR_5)
{
 int VAR_6;
 uint16_t VAR_7, VAR_8;
 struct ulp_cid_info *VAR_9 = ((void*)0);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (FUNC_5(VAR_8, (void *)&VAR_5->fw_config.ulp_supported)) {
   VAR_9 = FUNC_4(sizeof(struct ulp_cid_info),
            VAR_3);

   if (!VAR_9) {
    FUNC_1(VAR_5, VAR_4, VAR_0,
         "BM_%d : Failed to allocate memory"
         "for ULP_CID_INFO for ULP : %d\n",
         VAR_8);
    VAR_6 = -VAR_2;
    goto free_memory;

   }


   VAR_9->cid_array =
    FUNC_2(FUNC_0(VAR_5, VAR_8),
     sizeof(*VAR_9->cid_array),
     VAR_3);
   if (!VAR_9->cid_array) {
    FUNC_1(VAR_5, VAR_4, VAR_0,
         "BM_%d : Failed to allocate memory"
         "for CID_ARRAY for ULP : %d\n",
         VAR_8);
    FUNC_3(VAR_9);
    VAR_9 = ((void*)0);
    VAR_6 = -VAR_2;

    goto free_memory;
   }
   VAR_9->avlbl_cids = FUNC_0(
         VAR_5, VAR_8);


   VAR_5->cid_array_info[VAR_8] = VAR_9;
  }
 }
 VAR_5->ep_array = FUNC_2(VAR_5->params.cxns_per_ctrl,
     sizeof(struct iscsi_endpoint *),
     VAR_3);
 if (!VAR_5->ep_array) {
  FUNC_1(VAR_5, VAR_4, VAR_0,
       "BM_%d : Failed to allocate memory in "
       "hba_setup_cid_tbls\n");
  VAR_6 = -VAR_2;

  goto free_memory;
 }

 VAR_5->conn_table = FUNC_2(VAR_5->params.cxns_per_ctrl,
       sizeof(struct beiscsi_conn *),
       VAR_3);
 if (!VAR_5->conn_table) {
  FUNC_1(VAR_5, VAR_4, VAR_0,
       "BM_%d : Failed to allocate memory in"
       "hba_setup_cid_tbls\n");

  FUNC_3(VAR_5->ep_array);
  VAR_5->ep_array = ((void*)0);
  VAR_6 = -VAR_2;

  goto free_memory;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->params.cxns_per_ctrl; VAR_7++) {
  VAR_8 = VAR_5->phwi_ctrlr->wrb_context[VAR_7].ulp_num;

  VAR_9 = VAR_5->cid_array_info[VAR_8];
  VAR_9->cid_array[VAR_9->cid_alloc++] =
   VAR_5->phwi_ctrlr->wrb_context[VAR_7].cid;

 }

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (FUNC_5(VAR_8, (void *)&VAR_5->fw_config.ulp_supported)) {
   VAR_9 = VAR_5->cid_array_info[VAR_8];

   VAR_9->cid_alloc = 0;
   VAR_9->cid_free = 0;
  }
 }
 return 0;

free_memory:
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (FUNC_5(VAR_8, (void *)&VAR_5->fw_config.ulp_supported)) {
   VAR_9 = VAR_5->cid_array_info[VAR_8];

   if (VAR_9) {
    FUNC_3(VAR_9->cid_array);
    FUNC_3(VAR_9);
    VAR_5->cid_array_info[VAR_8] = ((void*)0);
   }
  }
 }

 return VAR_6;
}

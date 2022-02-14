
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union devlink_param_value {int dummy; } devlink_param_value ;
typedef union bnxt_nvm_data {int dummy; } bnxt_nvm_data ;
typedef scalar_t__ u32 ;
struct hwrm_nvm_get_variable_input {void* req_type; void* dimensions; void* index_0; void* option_num; void* data_len; int dest_data_addr; } ;
struct bnxt_dl_nvm_param {scalar_t__ id; scalar_t__ dir_type; int nvm_num_bits; int offset; int dl_num_bytes; } ;
struct TYPE_3__ {int port_id; int fw_fid; } ;
struct bnxt {int dev; TYPE_2__* pdev; TYPE_1__ pf; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct bnxt_dl_nvm_param*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct bnxt*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (union devlink_param_value*,union bnxt_nvm_data*,int,int ) ;
 int FUNC_3 (union bnxt_nvm_data*,union devlink_param_value*,int,int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 union bnxt_nvm_data* FUNC_6 (int *,int,int *,int ) ;
 int FUNC_7 (int *,int,union bnxt_nvm_data*,int ) ;
 int FUNC_8 (struct bnxt*,void*,int,int ) ;
 int FUNC_9 (struct bnxt*,void*,int,int ) ;
 int FUNC_10 (int ,char*) ;
 struct bnxt_dl_nvm_param* VAR_10 ;

__attribute__((used)) static int FUNC_11(struct bnxt *VAR_11, u32 VAR_12, void *VAR_13,
        int VAR_14, union devlink_param_value *VAR_15)
{
 struct hwrm_nvm_get_variable_input *VAR_16 = VAR_13;
 struct bnxt_dl_nvm_param VAR_17;
 union bnxt_nvm_data *VAR_18;
 dma_addr_t VAR_19;
 int VAR_20 = 0, VAR_21, VAR_22;


 if (FUNC_1(VAR_11))
  return -VAR_6;

 for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_10); VAR_22++) {
  if (VAR_10[VAR_22].id == VAR_12) {
   VAR_17 = VAR_10[VAR_22];
   break;
  }
 }

 if (VAR_22 == FUNC_0(VAR_10))
  return -VAR_5;

 if (VAR_17.dir_type == VAR_2)
  VAR_20 = VAR_11->pf.port_id;
 else if (VAR_17.dir_type == VAR_1)
  VAR_20 = VAR_11->pf.fw_fid - VAR_0;

 VAR_18 = FUNC_6(&VAR_11->pdev->dev, sizeof(*VAR_18),
      &VAR_19, VAR_7);
 if (!VAR_18)
  return -VAR_4;

 VAR_16->dest_data_addr = FUNC_5(VAR_19);
 VAR_16->data_len = FUNC_4(VAR_17.nvm_num_bits);
 VAR_16->option_num = FUNC_4(VAR_17.offset);
 VAR_16->index_0 = FUNC_4(VAR_20);
 if (VAR_20)
  VAR_16->dimensions = FUNC_4(1);

 if (VAR_16->req_type == FUNC_4(VAR_9)) {
  FUNC_3(VAR_18, VAR_15, VAR_17.nvm_num_bits,
          VAR_17.dl_num_bytes);
  VAR_21 = FUNC_8(VAR_11, VAR_13, VAR_14, VAR_8);
 } else {
  VAR_21 = FUNC_9(VAR_11, VAR_13, VAR_14,
           VAR_8);
  if (!VAR_21)
   FUNC_2(VAR_15, VAR_18,
      VAR_17.nvm_num_bits,
      VAR_17.dl_num_bytes);
 }
 FUNC_7(&VAR_11->pdev->dev, sizeof(*VAR_18), VAR_18, VAR_19);
 if (VAR_21 == -VAR_3)
  FUNC_10(VAR_11->dev, "PF does not have admin privileges to modify NVM config\n");
 return VAR_21;
}

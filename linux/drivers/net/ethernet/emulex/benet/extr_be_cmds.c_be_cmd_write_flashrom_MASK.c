
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; struct be_cmd_write_flashrom* va; } ;
struct TYPE_2__ {void* data_buf_size; void* op_code; void* offset; void* op_type; } ;
struct be_cmd_write_flashrom {TYPE_1__ params; int hdr; } ;
struct be_adapter {int flash_status; int mcc_lock; int et_cmd_compl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int ,struct be_mcc_wrb*,struct be_dma_mem*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 struct be_mcc_wrb* FUNC_7 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_8(struct be_adapter *VAR_5,
     struct be_dma_mem *VAR_6, u32 VAR_7,
     u32 VAR_8, u32 VAR_9, u32 VAR_10)
{
 struct be_mcc_wrb *VAR_11;
 struct be_cmd_write_flashrom *VAR_12;
 int VAR_13;

 FUNC_4(&VAR_5->mcc_lock);
 VAR_5->flash_status = 0;

 VAR_11 = FUNC_7(VAR_5);
 if (!VAR_11) {
  VAR_13 = -VAR_1;
  goto err_unlock;
 }
 VAR_12 = VAR_6->va;

 FUNC_1(&VAR_12->hdr, VAR_0,
          VAR_3, VAR_6->size, VAR_11,
          VAR_6);

 VAR_12->params.op_type = FUNC_2(VAR_7);
 if (VAR_7 == VAR_4)
  VAR_12->params.offset = FUNC_2(VAR_9);

 VAR_12->params.op_code = FUNC_2(VAR_8);
 VAR_12->params.data_buf_size = FUNC_2(VAR_10);

 VAR_13 = FUNC_0(VAR_5);
 if (VAR_13)
  goto err_unlock;

 FUNC_5(&VAR_5->mcc_lock);

 if (!FUNC_6(&VAR_5->et_cmd_compl,
      FUNC_3(40000)))
  VAR_13 = -VAR_2;
 else
  VAR_13 = VAR_5->flash_status;

 return VAR_13;

err_unlock:
 FUNC_5(&VAR_5->mcc_lock);
 return VAR_13;
}

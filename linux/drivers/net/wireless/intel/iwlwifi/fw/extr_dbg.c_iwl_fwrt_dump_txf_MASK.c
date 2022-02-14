
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_fw_runtime {int trans; } ;
struct iwl_fw_error_dump_fifo {void* fence_mode; void* fence_ptr; void* rd_ptr; void* wr_ptr; void* available_bytes; void* fifo_num; scalar_t__ data; } ;
struct iwl_fw_error_dump_data {void* len; void* type; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 struct iwl_fw_error_dump_data* FUNC_1 (struct iwl_fw_error_dump_data*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct iwl_fw_runtime *VAR_8,
         struct iwl_fw_error_dump_data **VAR_9,
         int VAR_10, u32 VAR_11, int VAR_12)
{
 struct iwl_fw_error_dump_fifo *VAR_13;
 u32 *VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_13 = (void *)(*VAR_9)->data;
 VAR_14 = (void *)VAR_13->data;
 VAR_15 = VAR_10;


 if (VAR_15 == 0)
  return;


 (*VAR_9)->type = FUNC_0(VAR_0);
 (*VAR_9)->len = FUNC_0(VAR_15 + sizeof(*VAR_13));

 VAR_13->fifo_num = FUNC_0(VAR_12);
 VAR_13->available_bytes =
  FUNC_0(FUNC_2(VAR_8->trans,
      VAR_2 + VAR_11));
 VAR_13->wr_ptr =
  FUNC_0(FUNC_2(VAR_8->trans,
      VAR_7 + VAR_11));
 VAR_13->rd_ptr =
  FUNC_0(FUNC_2(VAR_8->trans,
      VAR_4 + VAR_11));
 VAR_13->fence_ptr =
  FUNC_0(FUNC_2(VAR_8->trans,
      VAR_1 + VAR_11));
 VAR_13->fence_mode =
  FUNC_0(FUNC_2(VAR_8->trans,
      VAR_3 + VAR_11));


 FUNC_3(VAR_8->trans, VAR_5 + VAR_11,
        VAR_7 + VAR_11);


 FUNC_2(VAR_8->trans, VAR_6 + VAR_11);


 VAR_15 /= sizeof(u32);
 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++)
  VAR_14[VAR_16] = FUNC_2(VAR_8->trans,
        VAR_6 +
        VAR_11);
 *VAR_9 = FUNC_1(*VAR_9);
}

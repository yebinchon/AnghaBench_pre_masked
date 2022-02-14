
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
 int VAR_8 ;
 void* FUNC_0 (int) ;
 struct iwl_fw_error_dump_data* FUNC_1 (struct iwl_fw_error_dump_data*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct iwl_fw_runtime *VAR_9,
         struct iwl_fw_error_dump_data **VAR_10,
         int VAR_11, u32 VAR_12, int VAR_13)
{
 struct iwl_fw_error_dump_fifo *VAR_14;
 u32 *VAR_15;
 u32 VAR_16;
 int VAR_17;

 VAR_14 = (void *)(*VAR_10)->data;
 VAR_15 = (void *)VAR_14->data;
 VAR_16 = VAR_11;


 if (VAR_16 == 0)
  return;


 (*VAR_10)->type = FUNC_0(VAR_0);
 (*VAR_10)->len = FUNC_0(VAR_16 + sizeof(*VAR_14));

 VAR_14->fifo_num = FUNC_0(VAR_13);
 VAR_14->available_bytes =
  FUNC_0(FUNC_2(VAR_9->trans,
      VAR_4 + VAR_12));
 VAR_14->wr_ptr =
  FUNC_0(FUNC_2(VAR_9->trans,
      VAR_7 + VAR_12));
 VAR_14->rd_ptr =
  FUNC_0(FUNC_2(VAR_9->trans,
      VAR_6 + VAR_12));
 VAR_14->fence_ptr =
  FUNC_0(FUNC_2(VAR_9->trans,
      VAR_5 + VAR_12));
 VAR_14->fence_mode =
  FUNC_0(FUNC_2(VAR_9->trans,
      VAR_8 + VAR_12));


 FUNC_3(VAR_9->trans, VAR_8 + VAR_12, 0x1);

 FUNC_3(VAR_9->trans, VAR_3 + VAR_12, 0x1);

 FUNC_3(VAR_9->trans,
        VAR_2 + VAR_12, 0x0);


 VAR_16 /= sizeof(u32);
 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
  VAR_15[VAR_17] = FUNC_2(VAR_9->trans,
       VAR_1 +
       VAR_12);
 *VAR_10 = FUNC_1(*VAR_10);
}

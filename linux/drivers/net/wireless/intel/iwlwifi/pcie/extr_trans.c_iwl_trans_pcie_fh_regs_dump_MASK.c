
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct iwl_fw_error_dump_data {scalar_t__ data; void* len; void* type; } ;
typedef int __le32 ;
struct TYPE_2__ {int gen2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 struct iwl_fw_error_dump_data* FUNC_1 (struct iwl_fw_error_dump_data*) ;
 int FUNC_2 (struct iwl_trans*,unsigned long*) ;
 int FUNC_3 (struct iwl_trans*,int) ;
 int FUNC_4 (struct iwl_trans*,int) ;
 int FUNC_5 (struct iwl_trans*,unsigned long*) ;
 int FUNC_6 (struct iwl_trans*,int ) ;

__attribute__((used)) static u32 FUNC_7(struct iwl_trans *VAR_5,
           struct iwl_fw_error_dump_data **VAR_6)
{
 u32 VAR_7 = VAR_2 - VAR_0;
 unsigned long VAR_8;
 __le32 *VAR_9;
 int VAR_10;

 if (!FUNC_2(VAR_5, &VAR_8))
  return 0;

 (*VAR_6)->type = FUNC_0(VAR_4);
 (*VAR_6)->len = FUNC_0(VAR_7);
 VAR_9 = (void *)(*VAR_6)->data;

 if (!VAR_5->trans_cfg->gen2)
  for (VAR_10 = VAR_0; VAR_10 < VAR_2;
       VAR_10 += sizeof(u32))
   *VAR_9++ = FUNC_0(FUNC_3(VAR_5, VAR_10));
 else
  for (VAR_10 = FUNC_6(VAR_5, VAR_1);
       VAR_10 < FUNC_6(VAR_5, VAR_3);
       VAR_10 += sizeof(u32))
   *VAR_9++ = FUNC_0(FUNC_4(VAR_5,
              VAR_10));

 FUNC_5(VAR_5, &VAR_8);

 *VAR_6 = FUNC_1(*VAR_6);

 return sizeof(**VAR_6) + VAR_7;
}

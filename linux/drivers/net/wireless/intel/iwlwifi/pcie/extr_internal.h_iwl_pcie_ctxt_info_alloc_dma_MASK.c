
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {int dev; } ;
struct iwl_dram_data {int block; int size; int physical; } ;
struct fw_desc {int len; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct iwl_trans *VAR_2,
            const struct fw_desc *VAR_3,
            struct iwl_dram_data *VAR_4)
{
 VAR_4->block = FUNC_0(VAR_2->dev, VAR_3->len,
      &VAR_4->physical,
      VAR_1);
 if (!VAR_4->block)
  return -VAR_0;

 VAR_4->size = VAR_3->len;
 FUNC_1(VAR_4->block, VAR_3->data, VAR_3->len);

 return 0;
}

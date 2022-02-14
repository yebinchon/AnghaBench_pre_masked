
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_sas_hw {struct hisi_sas_debugfs_reg** debugfs_reg_array; } ;
struct hisi_sas_debugfs_reg {int count; scalar_t__ base_off; int (* read_global_reg ) (struct hisi_hba*,scalar_t__) ;} ;
struct hisi_hba {struct hisi_sas_hw* hw; int ** debugfs_regs; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct hisi_hba*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hisi_hba *VAR_1)
{
 u32 *VAR_2 = VAR_1->debugfs_regs[VAR_0];
 const struct hisi_sas_hw *VAR_3 = VAR_1->hw;
 const struct hisi_sas_debugfs_reg *VAR_4 =
   VAR_3->debugfs_reg_array[VAR_0];
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->count; VAR_5++, VAR_2++)
  *VAR_2 = VAR_4->read_global_reg(VAR_1,
      4 * VAR_5 + VAR_4->base_off);
}

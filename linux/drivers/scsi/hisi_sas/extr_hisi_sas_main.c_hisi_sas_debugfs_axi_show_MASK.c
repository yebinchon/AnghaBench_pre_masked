
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct hisi_hba* private; } ;
struct hisi_sas_hw {void** debugfs_reg_array; } ;
struct hisi_hba {int * debugfs_regs; struct hisi_sas_hw* hw; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,void const*,struct seq_file*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct hisi_hba *VAR_3 = VAR_1->private;
 const struct hisi_sas_hw *VAR_4 = VAR_3->hw;
 const void *VAR_5 = VAR_4->debugfs_reg_array[VAR_0];

 FUNC_0(VAR_3->debugfs_regs[VAR_0],
       VAR_5, VAR_1);

 return 0;
}

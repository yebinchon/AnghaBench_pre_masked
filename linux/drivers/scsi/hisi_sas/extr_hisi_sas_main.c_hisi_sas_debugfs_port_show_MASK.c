
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {struct hisi_sas_phy* private; } ;
struct TYPE_2__ {size_t id; } ;
struct hisi_sas_phy {TYPE_1__ sas_phy; struct hisi_hba* hisi_hba; } ;
struct hisi_sas_hw {struct hisi_sas_debugfs_reg* debugfs_reg_port; } ;
struct hisi_sas_debugfs_reg {int dummy; } ;
struct hisi_hba {int ** debugfs_port_reg; struct hisi_sas_hw* hw; } ;


 int FUNC_0 (int *,struct hisi_sas_debugfs_reg const*,struct seq_file*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct hisi_sas_phy *VAR_2 = VAR_0->private;
 struct hisi_hba *VAR_3 = VAR_2->hisi_hba;
 const struct hisi_sas_hw *VAR_4 = VAR_3->hw;
 const struct hisi_sas_debugfs_reg *VAR_5 = VAR_4->debugfs_reg_port;
 u32 *VAR_6 = VAR_3->debugfs_port_reg[VAR_2->sas_phy.id];

 FUNC_0(VAR_6, VAR_5, VAR_0);

 return 0;
}

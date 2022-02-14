
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct hisi_hba* private; } ;
struct hisi_hba {int debugfs_bist_phy_no; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct hisi_hba *VAR_2 = VAR_0->private;

 FUNC_0(VAR_0, "%d\n", VAR_2->debugfs_bist_phy_no);

 return 0;
}

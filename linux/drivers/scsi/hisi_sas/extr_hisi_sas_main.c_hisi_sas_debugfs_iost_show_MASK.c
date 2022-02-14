
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct hisi_hba* private; } ;
struct hisi_sas_iost {int qw0; } ;
struct hisi_hba {struct hisi_sas_iost* debugfs_iost; } ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,int,int,int *) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct hisi_hba *VAR_3 = VAR_1->private;
 struct hisi_sas_iost *VAR_4 = VAR_3->debugfs_iost;
 int VAR_5, VAR_6 = VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++, VAR_4++) {
  __le64 *VAR_7 = &VAR_4->qw0;

  FUNC_0(VAR_1, VAR_5, sizeof(*VAR_4), VAR_7);
 }

 return 0;
}

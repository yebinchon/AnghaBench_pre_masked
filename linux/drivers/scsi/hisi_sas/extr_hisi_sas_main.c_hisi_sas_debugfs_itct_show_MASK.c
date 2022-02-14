
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct hisi_hba* private; } ;
struct hisi_sas_itct {int qw0; } ;
struct hisi_hba {struct hisi_sas_itct* debugfs_itct; } ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,int,int,int *) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 int VAR_3;
 struct hisi_hba *VAR_4 = VAR_1->private;
 struct hisi_sas_itct *VAR_5 = VAR_4->debugfs_itct;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++, VAR_5++) {
  __le64 *VAR_6 = &VAR_5->qw0;

  FUNC_0(VAR_1, VAR_3, sizeof(*VAR_5), VAR_6);
 }

 return 0;
}

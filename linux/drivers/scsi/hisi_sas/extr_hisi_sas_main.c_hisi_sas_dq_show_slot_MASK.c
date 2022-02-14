
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct hisi_sas_dq {size_t id; struct hisi_hba* hisi_hba; } ;
struct hisi_sas_cmd_hdr {int dummy; } ;
struct hisi_hba {void** debugfs_cmd_hdr; } ;
typedef int __le32 ;


 int FUNC_0 (struct seq_file*,int,int,int *) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, int VAR_1, void *VAR_2)
{
 struct hisi_sas_dq *VAR_3 = VAR_2;
 struct hisi_hba *VAR_4 = VAR_3->hisi_hba;
 void *VAR_5 = VAR_4->debugfs_cmd_hdr[VAR_3->id];
 __le32 *VAR_6 = VAR_5 +
  sizeof(struct hisi_sas_cmd_hdr) * VAR_1;

 FUNC_0(VAR_0, VAR_1, sizeof(struct hisi_sas_cmd_hdr), VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct hisi_sas_cq {size_t id; struct hisi_hba* hisi_hba; } ;
struct hisi_hba {TYPE_1__* hw; void** debugfs_complete_hdr; } ;
typedef int __le32 ;
struct TYPE_2__ {int complete_hdr_size; } ;


 int FUNC_0 (struct seq_file*,int,int,int *) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, int VAR_1, void *VAR_2)
{
 struct hisi_sas_cq *VAR_3 = VAR_2;
 struct hisi_hba *VAR_4 = VAR_3->hisi_hba;
 void *VAR_5 = VAR_4->debugfs_complete_hdr[VAR_3->id];
 __le32 *VAR_6 = VAR_5 +
   (VAR_4->hw->complete_hdr_size * VAR_1);

 FUNC_0(VAR_0, VAR_1,
        VAR_4->hw->complete_hdr_size,
        VAR_6);
}

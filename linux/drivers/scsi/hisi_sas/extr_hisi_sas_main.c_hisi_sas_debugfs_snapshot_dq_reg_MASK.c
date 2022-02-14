
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_sas_cmd_hdr {int dummy; } ;
struct hisi_hba {int queue_count; struct hisi_sas_cmd_hdr** cmd_hdr; struct hisi_sas_cmd_hdr** debugfs_cmd_hdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct hisi_sas_cmd_hdr*,struct hisi_sas_cmd_hdr*,int) ;

__attribute__((used)) static void FUNC_1(struct hisi_hba *VAR_1)
{
 int VAR_2 = sizeof(struct hisi_sas_cmd_hdr);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->queue_count; VAR_3++) {
  struct hisi_sas_cmd_hdr *VAR_4, *VAR_5;
  int VAR_6;

  VAR_4 = VAR_1->debugfs_cmd_hdr[VAR_3];
  VAR_5 = VAR_1->cmd_hdr[VAR_3];

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
   FUNC_0(&VAR_4[VAR_6], &VAR_5[VAR_6],
          VAR_2);
 }
}

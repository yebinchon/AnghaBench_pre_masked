
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_dif_task_params {int dif_block_size_log; scalar_t__ dif_on_host; scalar_t__ dif_on_network; } ;
struct iscsi_dif_flags {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct iscsi_dif_flags *VAR_3,
         struct scsi_dif_task_params *VAR_4)
{
 if (!VAR_4)
  return;

 FUNC_0(VAR_3->flags, VAR_2,
    VAR_4->dif_block_size_log);
 FUNC_0(VAR_3->flags, VAR_0,
    VAR_4->dif_on_network ? 1 : 0);
 FUNC_0(VAR_3->flags, VAR_1,
    VAR_4->dif_on_host ? 1 : 0);
}

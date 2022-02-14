
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_sge {int dummy; } ;
struct qedi_ctx {TYPE_2__* pdev; } ;
struct TYPE_3__ {int sge_tbl_dma; scalar_t__ sge_tbl; } ;
struct qedi_cmd {int sense_buffer_dma; scalar_t__ sense_buffer; TYPE_1__ io_tbl; } ;
struct iscsi_task {struct qedi_cmd* dd_data; } ;
struct iscsi_session {int cmds_max; struct iscsi_task** cmds; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct qedi_ctx *VAR_2,
      struct iscsi_session *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->cmds_max; VAR_4++) {
  struct iscsi_task *VAR_5 = VAR_3->cmds[VAR_4];
  struct qedi_cmd *VAR_6 = VAR_5->dd_data;

  if (VAR_6->io_tbl.sge_tbl)
   FUNC_0(&VAR_2->pdev->dev,
       VAR_0 *
       sizeof(struct scsi_sge),
       VAR_6->io_tbl.sge_tbl,
       VAR_6->io_tbl.sge_tbl_dma);

  if (VAR_6->sense_buffer)
   FUNC_0(&VAR_2->pdev->dev,
       VAR_1,
       VAR_6->sense_buffer,
       VAR_6->sense_buffer_dma);
 }
}

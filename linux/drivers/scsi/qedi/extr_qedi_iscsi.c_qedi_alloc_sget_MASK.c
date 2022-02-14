
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_sge {int dummy; } ;
struct qedi_io_bdt {scalar_t__ sge_valid; int sge_tbl; int sge_tbl_dma; } ;
struct qedi_ctx {TYPE_1__* pdev; } ;
struct qedi_cmd {struct qedi_io_bdt io_tbl; } ;
struct iscsi_session {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int ,struct iscsi_session*,char*) ;

__attribute__((used)) static int FUNC_2(struct qedi_ctx *VAR_4, struct iscsi_session *VAR_5,
      struct qedi_cmd *VAR_6)
{
 struct qedi_io_bdt *VAR_7 = &VAR_6->io_tbl;
 struct scsi_sge *VAR_8;

 VAR_7->sge_tbl = FUNC_0(&VAR_4->pdev->dev,
      VAR_3 *
      sizeof(*VAR_8),
      &VAR_7->sge_tbl_dma, VAR_1);
 if (!VAR_7->sge_tbl) {
  FUNC_1(VAR_2, VAR_5,
         "Could not allocate BD table.\n");
  return -VAR_0;
 }

 VAR_7->sge_valid = 0;
 return 0;
}

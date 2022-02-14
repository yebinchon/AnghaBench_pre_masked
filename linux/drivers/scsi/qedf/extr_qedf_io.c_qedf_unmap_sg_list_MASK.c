
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int sc_data_direction; } ;
struct qedf_ioreq {TYPE_2__* bd_tbl; struct scsi_cmnd* sc_cmd; } ;
struct qedf_ctx {TYPE_1__* pdev; } ;
struct TYPE_4__ {scalar_t__ bd_valid; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_3(struct qedf_ctx *VAR_0, struct qedf_ioreq *VAR_1)
{
 struct scsi_cmnd *VAR_2 = VAR_1->sc_cmd;

 if (VAR_1->bd_tbl->bd_valid && VAR_2 && FUNC_1(VAR_2)) {
  FUNC_0(&VAR_0->pdev->dev, FUNC_2(VAR_2),
      FUNC_1(VAR_2), VAR_2->sc_data_direction);
  VAR_1->bd_tbl->bd_valid = 0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {int sc_data_direction; } ;
struct bnx2fc_interface {struct bnx2fc_hba* hba; } ;
struct bnx2fc_hba {TYPE_1__* pcidev; } ;
struct bnx2fc_cmd {TYPE_3__* bd_tbl; TYPE_2__* port; struct scsi_cmnd* sc_cmd; } ;
struct TYPE_6__ {scalar_t__ bd_valid; } ;
struct TYPE_5__ {struct bnx2fc_interface* priv; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_3(struct bnx2fc_cmd *VAR_0)
{
 struct scsi_cmnd *VAR_1 = VAR_0->sc_cmd;
 struct bnx2fc_interface *VAR_2 = VAR_0->port->priv;
 struct bnx2fc_hba *VAR_3 = VAR_2->hba;





 if (VAR_0->bd_tbl->bd_valid && VAR_1 && FUNC_1(VAR_1)) {
  FUNC_0(&VAR_3->pcidev->dev, FUNC_2(VAR_1),
      FUNC_1(VAR_1), VAR_1->sc_data_direction);
  VAR_0->bd_tbl->bd_valid = 0;
 }
}

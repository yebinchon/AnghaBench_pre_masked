
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_task {struct bnx2i_cmd* dd_data; } ;
struct iscsi_session {int cmds_max; struct iscsi_task** cmds; } ;
struct iscsi_bd {int dummy; } ;
struct bnx2i_hba {TYPE_1__* pcidev; } ;
struct TYPE_4__ {int bd_tbl_dma; scalar_t__ bd_tbl; } ;
struct bnx2i_cmd {TYPE_2__ io_tbl; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct bnx2i_hba *VAR_1,
       struct iscsi_session *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->cmds_max; VAR_3++) {
  struct iscsi_task *VAR_4 = VAR_2->cmds[VAR_3];
  struct bnx2i_cmd *VAR_5 = VAR_4->dd_data;

  if (VAR_5->io_tbl.bd_tbl)
   FUNC_0(&VAR_1->pcidev->dev,
       VAR_0 *
       sizeof(struct iscsi_bd),
       VAR_5->io_tbl.bd_tbl,
       VAR_5->io_tbl.bd_tbl_dma);
 }

}

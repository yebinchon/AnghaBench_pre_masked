
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_session {int dummy; } ;
struct iscsi_bd {int dummy; } ;
struct io_bdt {scalar_t__ bd_valid; int bd_tbl; int bd_tbl_dma; } ;
struct bnx2i_hba {TYPE_1__* pcidev; } ;
struct bnx2i_cmd {struct io_bdt io_tbl; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int ,struct iscsi_session*,char*) ;

__attribute__((used)) static int FUNC_2(struct bnx2i_hba *VAR_4, struct iscsi_session *VAR_5,
      struct bnx2i_cmd *VAR_6)
{
 struct io_bdt *VAR_7 = &VAR_6->io_tbl;
 struct iscsi_bd *VAR_8;

 VAR_7->bd_tbl = FUNC_0(&VAR_4->pcidev->dev,
     VAR_2 * sizeof(*VAR_8),
     &VAR_7->bd_tbl_dma, VAR_1);
 if (!VAR_7->bd_tbl) {
  FUNC_1(VAR_3, VAR_5, "Could not "
         "allocate bdt.\n");
  return -VAR_0;
 }
 VAR_7->bd_valid = 0;
 return 0;
}

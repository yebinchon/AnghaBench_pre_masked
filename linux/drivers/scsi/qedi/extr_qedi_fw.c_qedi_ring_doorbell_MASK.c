
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qedi_conn {int iscsi_conn_id; TYPE_2__* ep; TYPE_1__* qedi; } ;
struct iscsi_db_data {int params; int sq_prod; scalar_t__ agg_flags; int member_0; } ;
struct TYPE_4__ {int fw_sq_prod_idx; int sq_prod_idx; int p_doorbell; } ;
struct TYPE_3__ {int dbg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,char*,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct qedi_conn *VAR_7)
{
 struct iscsi_db_data VAR_8 = { 0 };

 VAR_8.agg_flags = 0;

 VAR_8.params |= VAR_1 << VAR_5;
 VAR_8.params |= VAR_0 << VAR_3;
 VAR_8.params |=
     VAR_2 << VAR_4;

 VAR_8.sq_prod = VAR_7->ep->fw_sq_prod_idx;
 FUNC_2(*(u32 *)&VAR_8, VAR_7->ep->p_doorbell);





 FUNC_1();
 FUNC_0(&VAR_7->qedi->dbg_ctx, VAR_6,
    "prod_idx=0x%x, fw_prod_idx=0x%x, cid=0x%x\n",
    VAR_7->ep->sq_prod_idx, VAR_7->ep->fw_sq_prod_idx,
    VAR_7->iscsi_conn_id);
}

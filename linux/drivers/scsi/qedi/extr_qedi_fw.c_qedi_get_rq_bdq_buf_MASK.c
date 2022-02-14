
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qedi_ctx {int bdq_prod_idx; int rq_num_entries; TYPE_1__* bdq; int dbg_ctx; } ;
struct iscsi_cqe_unsolicited {int rqe_opaque; int unsol_cqe_type; } ;
struct TYPE_2__ {scalar_t__ buf_addr; } ;






 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int,...) ;
 int VAR_1 ;
 int FUNC_1 (char*,void*,int) ;

__attribute__((used)) static void FUNC_2(struct qedi_ctx *VAR_2,
    struct iscsi_cqe_unsolicited *VAR_3,
    char *VAR_4, int VAR_5)
{
 u16 VAR_6 = 0;

 FUNC_0(&VAR_2->dbg_ctx, VAR_1,
    "pld_len [%d], bdq_prod_idx [%d], idx [%d]\n",
    VAR_5, VAR_2->bdq_prod_idx,
    (VAR_2->bdq_prod_idx % VAR_2->rq_num_entries));


 VAR_6 = VAR_3->rqe_opaque;
 if (VAR_6 > (VAR_0 - 1)) {
  FUNC_0(&VAR_2->dbg_ctx, VAR_1,
     "wrong idx %d returned by FW, dropping the unsolicited pkt\n",
     VAR_6);
  return;
 }

 FUNC_0(&VAR_2->dbg_ctx, VAR_1,
    "rqe_opaque [0x%p], idx [%d]\n", VAR_3->rqe_opaque, VAR_6);

 FUNC_0(&VAR_2->dbg_ctx, VAR_1,
    "unsol_cqe_type = %d\n", VAR_3->unsol_cqe_type);
 switch (VAR_3->unsol_cqe_type) {
 case 128:
 case 131:
  if (VAR_5)
   FUNC_1(VAR_4, (void *)VAR_2->bdq[VAR_6].buf_addr, VAR_5);
  break;
 case 129:
 case 130:
  break;
 default:
  break;
 }
}

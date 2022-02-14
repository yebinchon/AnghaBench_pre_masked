
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rx_ring {scalar_t__ cnsmr_idx; int prod_idx_sh_reg; struct ql_net_rsp_iocb* curr_entry; int cq_id; struct ql_adapter* qdev; } ;
struct ql_net_rsp_iocb {int opcode; } ;
struct ql_adapter {int ndev; } ;
struct ib_mac_iocb_rsp {int dummy; } ;
struct ib_ae_iocb_rsp {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct ql_adapter*,int ,int ,int ,char*,int,...) ;
 int FUNC_1 (struct ql_adapter*,struct ib_ae_iocb_rsp*) ;
 int FUNC_2 (struct ql_adapter*,struct rx_ring*,struct ib_mac_iocb_rsp*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ql_adapter*,struct rx_ring*) ;
 int FUNC_5 (struct rx_ring*) ;
 int FUNC_6 (struct rx_ring*) ;
 int FUNC_7 () ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8(struct rx_ring *VAR_2, int VAR_3)
{
 struct ql_adapter *VAR_4 = VAR_2->qdev;
 u32 VAR_5 = FUNC_3(VAR_2->prod_idx_sh_reg);
 struct ql_net_rsp_iocb *VAR_6;
 int VAR_7 = 0;


 while (VAR_5 != VAR_2->cnsmr_idx) {

  FUNC_0(VAR_4, VAR_1, VAR_0, VAR_4->ndev,
        "cq_id = %d, prod = %d, cnsmr = %d\n",
        VAR_2->cq_id, VAR_5, VAR_2->cnsmr_idx);

  VAR_6 = VAR_2->curr_entry;
  FUNC_7();
  switch (VAR_6->opcode) {
  case 128:
   FUNC_2(VAR_4, VAR_2,
            (struct ib_mac_iocb_rsp *)
            VAR_6);
   break;

  case 129:
   FUNC_1(VAR_4, (struct ib_ae_iocb_rsp *)
      VAR_6);
   break;
  default:
   FUNC_0(VAR_4, VAR_1, VAR_0, VAR_4->ndev,
         "Hit default case, not handled! dropping the packet, opcode = %x.\n",
         VAR_6->opcode);
   break;
  }
  VAR_7++;
  FUNC_5(VAR_2);
  VAR_5 = FUNC_3(VAR_2->prod_idx_sh_reg);
  if (VAR_7 == VAR_3)
   break;
 }
 FUNC_4(VAR_4, VAR_2);
 FUNC_6(VAR_2);
 return VAR_7;
}

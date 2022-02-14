
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tx_ring {int wq_len; int wq_id; int tx_count; } ;
struct rx_ring {scalar_t__ cnsmr_idx; int prod_idx_sh_reg; scalar_t__ curr_entry; int cq_id; struct ql_adapter* qdev; } ;
struct ql_adapter {int ndev; struct tx_ring* tx_ring; } ;
struct ob_mac_iocb_rsp {int opcode; size_t txq_idx; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ql_adapter*,int ,int ,int ,char*,int,...) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ql_adapter*,struct ob_mac_iocb_rsp*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct rx_ring*) ;
 int FUNC_7 (struct rx_ring*) ;
 int FUNC_8 () ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9(struct rx_ring *VAR_2)
{
 struct ql_adapter *VAR_3 = VAR_2->qdev;
 u32 VAR_4 = FUNC_5(VAR_2->prod_idx_sh_reg);
 struct ob_mac_iocb_rsp *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 struct tx_ring *VAR_7;

 while (VAR_4 != VAR_2->cnsmr_idx) {

  FUNC_2(VAR_3, VAR_1, VAR_0, VAR_3->ndev,
        "cq_id = %d, prod = %d, cnsmr = %d\n",
        VAR_2->cq_id, VAR_4, VAR_2->cnsmr_idx);

  VAR_5 = (struct ob_mac_iocb_rsp *)VAR_2->curr_entry;
  FUNC_8();
  switch (VAR_5->opcode) {

  case 128:
  case 129:
   FUNC_4(VAR_3, VAR_5);
   break;
  default:
   FUNC_2(VAR_3, VAR_1, VAR_0, VAR_3->ndev,
         "Hit default case, not handled! dropping the packet, opcode = %x.\n",
         VAR_5->opcode);
  }
  VAR_6++;
  FUNC_6(VAR_2);
  VAR_4 = FUNC_5(VAR_2->prod_idx_sh_reg);
 }
 if (!VAR_5)
  return 0;
 FUNC_7(VAR_2);
 VAR_7 = &VAR_3->tx_ring[VAR_5->txq_idx];
 if (FUNC_0(VAR_3->ndev, VAR_7->wq_id)) {
  if ((FUNC_1(&VAR_7->tx_count) > (VAR_7->wq_len / 4)))




   FUNC_3(VAR_3->ndev, VAR_7->wq_id);
 }

 return VAR_6;
}

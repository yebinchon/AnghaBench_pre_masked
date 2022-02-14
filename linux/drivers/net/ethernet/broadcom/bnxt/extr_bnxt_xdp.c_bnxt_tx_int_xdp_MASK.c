
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct pci_dev {int dev; } ;
struct bnxt_tx_ring_info {size_t tx_cons; struct bnxt_sw_tx_bd* tx_buf_ring; } ;
struct bnxt_sw_tx_bd {scalar_t__ action; int rx_prod; int * xdpf; } ;
struct bnxt_rx_ring_info {int rx_db; } ;
struct bnxt_napi {struct bnxt_rx_ring_info* rx_ring; struct bnxt_tx_ring_info* tx_ring; } ;
struct bnxt {struct pci_dev* pdev; } ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bnxt*,int *,int ) ;
 int FUNC_2 (struct bnxt_sw_tx_bd*,int ) ;
 int FUNC_3 (struct bnxt_sw_tx_bd*,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;

void FUNC_6(struct bnxt *VAR_5, struct bnxt_napi *VAR_6, int VAR_7)
{
 struct bnxt_tx_ring_info *VAR_8 = VAR_6->tx_ring;
 struct bnxt_rx_ring_info *VAR_9 = VAR_6->rx_ring;
 bool VAR_10 = 0;
 struct bnxt_sw_tx_bd *VAR_11;
 u16 VAR_12 = VAR_8->tx_cons;
 u16 VAR_13 = VAR_12;
 int VAR_14;

 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  VAR_11 = &VAR_8->tx_buf_ring[VAR_12];

  if (VAR_11->action == VAR_1) {
   struct pci_dev *VAR_15 = VAR_5->pdev;

   FUNC_4(&VAR_15->dev,
      FUNC_2(VAR_11, VAR_4),
      FUNC_3(VAR_11, VAR_3),
      VAR_0);
   FUNC_5(VAR_11->xdpf);
   VAR_11->action = 0;
   VAR_11->xdpf = ((void*)0);
  } else if (VAR_11->action == VAR_2) {
   VAR_10 = 1;
   VAR_13 = VAR_12;
  }
  VAR_12 = FUNC_0(VAR_12);
 }
 VAR_8->tx_cons = VAR_12;
 if (VAR_10) {
  VAR_11 = &VAR_8->tx_buf_ring[VAR_13];
  FUNC_1(VAR_5, &VAR_9->rx_db, VAR_11->rx_prod);
 }
}

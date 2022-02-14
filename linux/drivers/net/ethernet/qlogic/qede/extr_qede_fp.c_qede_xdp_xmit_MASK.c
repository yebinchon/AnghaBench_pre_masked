
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u16 ;
struct sw_rx_data {size_t mapping; int data; } ;
struct TYPE_10__ {TYPE_4__* xdp; } ;
struct qede_tx_queue {size_t sw_tx_prod; int num_tx_buffers; TYPE_5__ sw_tx_ring; int tx_pbl; int stopped_cnt; } ;
struct qede_fastpath {int xdp_xmit; struct qede_tx_queue* xdp_tx; } ;
struct qede_dev {TYPE_3__* pdev; } ;
struct TYPE_6__ {int bitfields; } ;
struct TYPE_7__ {int nbds; int bitfields; TYPE_1__ bd_flags; } ;
struct eth_tx_1st_bd {TYPE_2__ data; } ;
struct TYPE_9__ {size_t mapping; int page; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (struct eth_tx_1st_bd*,size_t,size_t) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int *,size_t,size_t,int ) ;
 int FUNC_4 (struct eth_tx_1st_bd*,int ,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct qede_dev *VAR_5, struct qede_fastpath *VAR_6,
    struct sw_rx_data *VAR_7, u16 VAR_8, u16 VAR_9)
{
 struct qede_tx_queue *VAR_10 = VAR_6->xdp_tx;
 struct eth_tx_1st_bd *VAR_11;
 u16 VAR_12 = VAR_10->sw_tx_prod;
 u16 VAR_13;

 if (!FUNC_5(&VAR_10->tx_pbl)) {
  VAR_10->stopped_cnt++;
  return -VAR_0;
 }

 VAR_11 = (struct eth_tx_1st_bd *)FUNC_6(&VAR_10->tx_pbl);

 FUNC_4(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->data.bd_flags.bitfields =
     FUNC_1(VAR_1);

 VAR_13 = (VAR_9 & VAR_2) <<
        VAR_3;

 VAR_11->data.bitfields |= FUNC_2(VAR_13);
 VAR_11->data.nbds = 1;


 FUNC_0(VAR_11, VAR_7->mapping + VAR_8, VAR_9);




 FUNC_3(&VAR_5->pdev->dev,
       VAR_7->mapping + VAR_8,
       VAR_9, VAR_4);

 VAR_10->sw_tx_ring.xdp[VAR_12].page = VAR_7->data;
 VAR_10->sw_tx_ring.xdp[VAR_12].mapping = VAR_7->mapping;
 VAR_10->sw_tx_prod = (VAR_10->sw_tx_prod + 1) % VAR_10->num_tx_buffers;


 VAR_6->xdp_xmit = 1;

 return 0;
}

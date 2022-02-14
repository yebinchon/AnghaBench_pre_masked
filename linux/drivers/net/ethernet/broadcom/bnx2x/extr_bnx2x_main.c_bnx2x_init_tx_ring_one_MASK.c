
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct eth_tx_next_bd {void* addr_lo; void* addr_hi; } ;
struct TYPE_6__ {int header; } ;
struct TYPE_7__ {scalar_t__ prod; scalar_t__ zero_fill1; TYPE_2__ header; } ;
struct TYPE_8__ {TYPE_3__ data; } ;
struct bnx2x_fp_txdata {scalar_t__ tx_pkt; scalar_t__ tx_bd_cons; scalar_t__ tx_bd_prod; scalar_t__ tx_pkt_cons; scalar_t__ tx_pkt_prod; TYPE_4__ tx_db; int * tx_cons_sb; scalar_t__ tx_desc_mapping; TYPE_1__* tx_desc_ring; } ;
struct TYPE_5__ {struct eth_tx_next_bd next_bd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct bnx2x_fp_txdata *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 1; VAR_5 <= VAR_2; VAR_5++) {
  struct eth_tx_next_bd *VAR_6 =
   &VAR_4->tx_desc_ring[VAR_3 * VAR_5 - 1].next_bd;

  VAR_6->addr_hi =
   FUNC_4(FUNC_1(VAR_4->tx_desc_mapping +
        VAR_0*(VAR_5 % VAR_2)));
  VAR_6->addr_lo =
   FUNC_4(FUNC_2(VAR_4->tx_desc_mapping +
        VAR_0*(VAR_5 % VAR_2)));
 }

 *VAR_4->tx_cons_sb = FUNC_3(0);

 FUNC_0(VAR_4->tx_db.data.header.header, VAR_1, 1);
 VAR_4->tx_db.data.zero_fill1 = 0;
 VAR_4->tx_db.data.prod = 0;

 VAR_4->tx_pkt_prod = 0;
 VAR_4->tx_pkt_cons = 0;
 VAR_4->tx_bd_prod = 0;
 VAR_4->tx_bd_cons = 0;
 VAR_4->tx_pkt = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x_fp_txdata {int txq_index; int cid; int tx_ring_size; struct bnx2x_fastpath* parent_fp; int * tx_cons_sb; } ;
struct bnx2x_fastpath {int dummy; } ;
struct bnx2x {int tx_ring_size; } ;
typedef int __le16 ;


 int FUNC_0 (int ,char*,int ,int) ;
 scalar_t__ FUNC_1 (struct bnx2x_fastpath*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_2(struct bnx2x *VAR_2,
         struct bnx2x_fp_txdata *VAR_3, u32 VAR_4,
         int VAR_5, __le16 *VAR_6,
         struct bnx2x_fastpath *VAR_7)
{
 VAR_3->cid = VAR_4;
 VAR_3->txq_index = VAR_5;
 VAR_3->tx_cons_sb = VAR_6;
 VAR_3->parent_fp = VAR_7;
 VAR_3->tx_ring_size = FUNC_1(VAR_7) ? VAR_0 : VAR_2->tx_ring_size;

 FUNC_0(VAR_1, "created tx data cid %d, txq %d\n",
    VAR_3->cid, VAR_3->txq_index);
}

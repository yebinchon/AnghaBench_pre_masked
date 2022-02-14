
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnxt_tx_ring_info {int tx_prod; int tx_cons; } ;
struct bnxt {int tx_ring_mask; scalar_t__ tx_ring_size; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline u32 FUNC_1(struct bnxt *VAR_0, struct bnxt_tx_ring_info *VAR_1)
{

 FUNC_0();

 return VAR_0->tx_ring_size -
  ((VAR_1->tx_prod - VAR_1->tx_cons) & VAR_0->tx_ring_mask);
}

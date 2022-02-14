
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_fp_txdata {scalar_t__ tx_pkt_prod; scalar_t__ tx_pkt_cons; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline int FUNC_1(struct bnx2x_fp_txdata *VAR_0)
{

 FUNC_0();
 return VAR_0->tx_pkt_prod != VAR_0->tx_pkt_cons;
}

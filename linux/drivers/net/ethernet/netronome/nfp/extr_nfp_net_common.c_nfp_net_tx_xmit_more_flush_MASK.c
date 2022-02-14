
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_tx_ring {scalar_t__ wr_ptr_add; int qcp_q; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct nfp_net_tx_ring *VAR_0)
{
 FUNC_1();
 FUNC_0(VAR_0->qcp_q, VAR_0->wr_ptr_add);
 VAR_0->wr_ptr_add = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_tx_ring {int wr_p; int rd_p; int cnt; } ;



__attribute__((used)) static int FUNC_0(struct nfp_net_tx_ring *VAR_0, int VAR_1)
{
 return (VAR_0->wr_p - VAR_0->rd_p) >= (VAR_0->cnt - VAR_1);
}

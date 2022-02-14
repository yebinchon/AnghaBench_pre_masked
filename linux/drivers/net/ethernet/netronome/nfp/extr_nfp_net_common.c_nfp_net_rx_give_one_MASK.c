
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfp_net_rx_ring {int wr_p; int qcp_fl; TYPE_2__* rxds; TYPE_1__* rxbufs; } ;
struct nfp_net_dp {scalar_t__ rx_dma_off; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_6__ {scalar_t__ meta_len_dd; scalar_t__ reserved; } ;
struct TYPE_5__ {TYPE_3__ fld; } ;
struct TYPE_4__ {scalar_t__ dma_addr; void* frag; } ;


 unsigned int FUNC_0 (struct nfp_net_rx_ring*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 (struct nfp_net_dp const*,scalar_t__) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(const struct nfp_net_dp *VAR_1,
    struct nfp_net_rx_ring *VAR_2,
    void *VAR_3, dma_addr_t VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_2->wr_p);

 FUNC_2(VAR_1, VAR_4);


 VAR_2->rxbufs[VAR_5].frag = VAR_3;
 VAR_2->rxbufs[VAR_5].dma_addr = VAR_4;


 VAR_2->rxds[VAR_5].fld.reserved = 0;
 VAR_2->rxds[VAR_5].fld.meta_len_dd = 0;
 FUNC_1(&VAR_2->rxds[VAR_5].fld,
         VAR_4 + VAR_1->rx_dma_off);

 VAR_2->wr_p++;
 if (!(VAR_2->wr_p % VAR_0)) {



  FUNC_4();
  FUNC_3(VAR_2->qcp_fl, VAR_0);
 }
}

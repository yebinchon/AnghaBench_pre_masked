
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net_tx_ring {TYPE_1__* r_vec; int cnt; int dma; } ;
struct nfp_net {int dummy; } ;
struct TYPE_2__ {int irq_entry; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nfp_net*,int ,int ) ;
 int FUNC_5 (struct nfp_net*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct nfp_net *VAR_0,
        struct nfp_net_tx_ring *VAR_1, unsigned int VAR_2)
{
 FUNC_5(VAR_0, FUNC_0(VAR_2), VAR_1->dma);
 FUNC_4(VAR_0, FUNC_1(VAR_2), FUNC_3(VAR_1->cnt));
 FUNC_4(VAR_0, FUNC_2(VAR_2), VAR_1->r_vec->irq_entry);
}

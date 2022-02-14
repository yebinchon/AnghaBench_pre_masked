
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_dp {scalar_t__ num_r_vecs; scalar_t__ num_rx_rings; scalar_t__ num_tx_rings; scalar_t__ num_stack_tx_rings; int dev; } ;
struct nfp_net {scalar_t__ max_r_vecs; struct nfp_net_dp dp; int irq_entries; } ;
struct msix_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,struct msix_entry*,int) ;
 void* FUNC_2 (scalar_t__,scalar_t__) ;

void
FUNC_3(struct nfp_net *VAR_1, struct msix_entry *VAR_2,
      unsigned int VAR_3)
{
 struct nfp_net_dp *VAR_4 = &VAR_1->dp;

 VAR_1->max_r_vecs = VAR_3 - VAR_0;
 VAR_4->num_r_vecs = VAR_1->max_r_vecs;

 FUNC_1(VAR_1->irq_entries, VAR_2, sizeof(*VAR_2) * VAR_3);

 if (VAR_4->num_rx_rings > VAR_4->num_r_vecs ||
     VAR_4->num_tx_rings > VAR_4->num_r_vecs)
  FUNC_0(VAR_1->dp.dev, "More rings (%d,%d) than vectors (%d).\n",
    VAR_4->num_rx_rings, VAR_4->num_tx_rings,
    VAR_4->num_r_vecs);

 VAR_4->num_rx_rings = FUNC_2(VAR_4->num_r_vecs, VAR_4->num_rx_rings);
 VAR_4->num_tx_rings = FUNC_2(VAR_4->num_r_vecs, VAR_4->num_tx_rings);
 VAR_4->num_stack_tx_rings = VAR_4->num_tx_rings;
}

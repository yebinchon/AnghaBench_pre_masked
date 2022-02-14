
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_wldev {int dfq_valid; int mac_suspended; int noisecalc; int irq_mask; int * dma_reason; scalar_t__ irq_reason; int phy; int stats; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct b43legacy_wldev*,int *) ;

__attribute__((used)) static void FUNC_2(struct b43legacy_wldev *VAR_1)
{

 VAR_1->dfq_valid = 0;


 FUNC_0(&VAR_1->stats, 0, sizeof(VAR_1->stats));

 FUNC_1(VAR_1, &VAR_1->phy);


 VAR_1->irq_reason = 0;
 FUNC_0(VAR_1->dma_reason, 0, sizeof(VAR_1->dma_reason));
 VAR_1->irq_mask = VAR_0;

 VAR_1->mac_suspended = 1;


 FUNC_0(&VAR_1->noisecalc, 0, sizeof(VAR_1->noisecalc));
}

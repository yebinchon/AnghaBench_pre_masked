
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmc_host {int caps2; int cqe_on; } ;
struct cqhci_host {int caps; int rca; int activated; TYPE_1__* ops; int desc_dma_base; struct mmc_host* mmc; } ;
struct TYPE_2__ {int (* enable ) (struct mmc_host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct cqhci_host*,int ) ;
 int FUNC_1 (struct cqhci_host*,int ) ;
 int FUNC_2 (struct cqhci_host*,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct cqhci_host *VAR_10)
{
 struct mmc_host *VAR_11 = VAR_10->mmc;
 u32 VAR_12;

 VAR_12 = FUNC_0(VAR_10, VAR_0);


 if (VAR_12 & VAR_2) {
  VAR_12 &= ~VAR_2;
  FUNC_2(VAR_10, VAR_12, VAR_0);
 }

 VAR_12 &= ~(VAR_1 | VAR_5);

 if (VAR_11->caps2 & VAR_9)
  VAR_12 |= VAR_1;

 if (VAR_10->caps & VAR_6)
  VAR_12 |= VAR_5;

 FUNC_2(VAR_10, VAR_12, VAR_0);

 FUNC_2(VAR_10, FUNC_3(VAR_10->desc_dma_base),
       VAR_7);
 FUNC_2(VAR_10, FUNC_5(VAR_10->desc_dma_base),
       VAR_8);

 FUNC_2(VAR_10, VAR_10->rca, VAR_4);

 FUNC_1(VAR_10, 0);

 VAR_12 |= VAR_2;

 FUNC_2(VAR_10, VAR_12, VAR_0);

 VAR_11->cqe_on = 1;

 if (VAR_10->ops->enable)
  VAR_10->ops->enable(VAR_11);


 FUNC_6();

 FUNC_1(VAR_10, VAR_3);

 VAR_10->activated = 1;
}

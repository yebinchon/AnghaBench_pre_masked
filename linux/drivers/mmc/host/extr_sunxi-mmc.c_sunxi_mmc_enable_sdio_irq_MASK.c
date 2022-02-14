
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sunxi_mmc_host {TYPE_1__* mmc; int lock; scalar_t__ sdio_imask; int dev; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sunxi_mmc_host* FUNC_0 (struct mmc_host*) ;
 scalar_t__ FUNC_1 (struct sunxi_mmc_host*,int ) ;
 int FUNC_2 (struct sunxi_mmc_host*,int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct mmc_host *VAR_2, int VAR_3)
{
 struct sunxi_mmc_host *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;
 u32 VAR_6;

 if (VAR_3)
  FUNC_3(VAR_4->dev);

 FUNC_5(&VAR_4->lock, VAR_5);

 VAR_6 = FUNC_1(VAR_4, VAR_0);
 if (VAR_3) {
  VAR_4->sdio_imask = VAR_1;
  VAR_6 |= VAR_1;
 } else {
  VAR_4->sdio_imask = 0;
  VAR_6 &= ~VAR_1;
 }
 FUNC_2(VAR_4, VAR_0, VAR_6);
 FUNC_6(&VAR_4->lock, VAR_5);

 if (!VAR_3)
  FUNC_4(VAR_4->mmc->parent);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmci_host {int lock; TYPE_1__* variant; scalar_t__ base; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int busy_detect_flag; } ;


 scalar_t__ VAR_0 ;
 struct mmci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_1)
{
 struct mmci_host *VAR_2 = FUNC_0(VAR_1);
 unsigned long VAR_3;
 int VAR_4 = 0;

 FUNC_2(&VAR_2->lock, VAR_3);
 if (FUNC_1(VAR_2->base + VAR_0) & VAR_2->variant->busy_detect_flag)
  VAR_4 = 1;
 FUNC_3(&VAR_2->lock, VAR_3);

 return VAR_4;
}

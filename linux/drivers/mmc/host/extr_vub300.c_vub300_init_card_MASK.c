
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vub300_mmc_host {TYPE_1__* udev; } ;
struct mmc_host {int dummy; } ;
struct mmc_card {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct vub300_mmc_host* FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_0, struct mmc_card *VAR_1)
{
 struct vub300_mmc_host *VAR_2 = FUNC_1(VAR_0);
 FUNC_0(&VAR_2->udev->dev, "NO host QUIRKS for this card\n");
}

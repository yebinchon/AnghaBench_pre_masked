
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pxamci_host {TYPE_2__* pdata; struct mmc_host* mmc; } ;
struct TYPE_3__ {int vmmc; } ;
struct mmc_host {int ocr_avail; TYPE_1__ supply; } ;
struct TYPE_4__ {int ocr_mask; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_2(struct pxamci_host *VAR_2)
{
 struct mmc_host *VAR_3 = VAR_2->mmc;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 if (FUNC_0(VAR_3->supply.vmmc)) {

  VAR_3->ocr_avail = VAR_2->pdata ?
   VAR_2->pdata->ocr_mask :
   VAR_0 | VAR_1;
 }

 return 0;
}

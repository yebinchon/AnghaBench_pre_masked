
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator {int dummy; } ;
struct pxamci_host {struct mmc_host* mmc; TYPE_1__* pdata; scalar_t__ power; } ;
struct TYPE_4__ {struct regulator* vmmc; } ;
struct mmc_host {TYPE_2__ supply; } ;
struct TYPE_3__ {int ocr_mask; int (* setpower ) (int ,unsigned int) ;} ;


 int FUNC_0 (struct regulator*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,struct regulator*,unsigned int) ;
 int FUNC_4 (int ,unsigned int) ;

__attribute__((used)) static inline int FUNC_5(struct pxamci_host *VAR_0,
        unsigned char VAR_1,
        unsigned int VAR_2)
{
 struct mmc_host *VAR_3 = VAR_0->mmc;
 struct regulator *VAR_4 = VAR_3->supply.vmmc;

 if (!FUNC_0(VAR_4))
  return FUNC_3(VAR_3, VAR_4, VAR_2);

 if (VAR_0->power) {
  bool VAR_5 = !!((1 << VAR_2) & VAR_0->pdata->ocr_mask);
  FUNC_1(VAR_0->power, VAR_5);
 }

 if (VAR_0->pdata && VAR_0->pdata->setpower)
  return VAR_0->pdata->setpower(FUNC_2(VAR_0->mmc), VAR_2);

 return 0;
}

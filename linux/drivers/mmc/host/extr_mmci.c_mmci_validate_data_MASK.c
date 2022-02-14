
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmci_host {TYPE_1__* ops; int mmc; } ;
struct mmc_data {int blksz; } ;
struct TYPE_2__ {int (* validate_data ) (struct mmci_host*,struct mmc_data*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mmci_host*,struct mmc_data*) ;

__attribute__((used)) static int FUNC_4(struct mmci_host *VAR_1,
         struct mmc_data *VAR_2)
{
 if (!VAR_2)
  return 0;

 if (!FUNC_1(VAR_2->blksz)) {
  FUNC_0(FUNC_2(VAR_1->mmc),
   "unsupported block size (%d bytes)\n", VAR_2->blksz);
  return -VAR_0;
 }

 if (VAR_1->ops && VAR_1->ops->validate_data)
  return VAR_1->ops->validate_data(VAR_1, VAR_2);

 return 0;
}

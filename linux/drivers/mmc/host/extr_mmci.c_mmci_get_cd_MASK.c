
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmci_platform_data {unsigned int (* status ) (int ) ;} ;
struct mmci_host {int mmc; struct mmci_platform_data* plat; } ;
struct mmc_host {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct mmc_host*) ;
 struct mmci_host* FUNC_2 (struct mmc_host*) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_1)
{
 struct mmci_host *VAR_2 = FUNC_2(VAR_1);
 struct mmci_platform_data *VAR_3 = VAR_2->plat;
 unsigned int VAR_4 = FUNC_1(VAR_1);

 if (VAR_4 == -VAR_0) {
  if (!VAR_3->status)
   return 1;

  VAR_4 = VAR_3->status(FUNC_0(VAR_2->mmc));
 }
 return VAR_4;
}

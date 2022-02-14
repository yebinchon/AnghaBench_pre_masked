
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmci_host {unsigned int pwr_reg_add; scalar_t__ base; TYPE_1__* variant; int rst; TYPE_2__* mmc; } ;
struct mmc_ios {scalar_t__ power_mode; } ;
struct TYPE_4__ {struct mmc_ios ios; } ;
struct TYPE_3__ {int start_err; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mmci_host*,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct mmci_host *VAR_7, unsigned int VAR_8)
{
 struct mmc_ios VAR_9 = VAR_7->mmc->ios;

 VAR_8 = VAR_7->pwr_reg_add;

 if (VAR_9.power_mode == VAR_5) {

  FUNC_2(VAR_7->rst);
  FUNC_4(2);
  FUNC_3(VAR_7->rst);







  FUNC_1(VAR_7, VAR_3 | VAR_8);
 } else if (VAR_9.power_mode == VAR_6) {





  FUNC_5(VAR_0 | VAR_7->variant->start_err,
         VAR_7->base + VAR_4);






  FUNC_1(VAR_7, VAR_1 | VAR_8);
  FUNC_0(1);
  FUNC_1(VAR_7, VAR_2 | VAR_8);
 }
}

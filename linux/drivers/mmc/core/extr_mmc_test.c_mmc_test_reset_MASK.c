
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_test_card {struct mmc_card* card; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {scalar_t__ cmdq_en; } ;
struct mmc_card {TYPE_1__ ext_csd; struct mmc_host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mmc_card*) ;
 int FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_2(struct mmc_test_card *VAR_4)
{
 struct mmc_card *VAR_5 = VAR_4->card;
 struct mmc_host *VAR_6 = VAR_5->host;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6);
 if (!VAR_7) {




  if (VAR_5->ext_csd.cmdq_en)
   FUNC_0(VAR_5);
  return VAR_2;
 } else if (VAR_7 == -VAR_0) {
  return VAR_3;
 }

 return VAR_1;
}

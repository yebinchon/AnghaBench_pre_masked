
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int dummy; } ;
struct mmc_test_transfer_result {unsigned int count; unsigned int sectors; unsigned int rate; unsigned int iops; int link; struct timespec64 ts; } ;
struct mmc_test_card {TYPE_1__* gr; } ;
struct TYPE_2__ {int tr_lst; } ;


 int VAR_0 ;
 struct mmc_test_transfer_result* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct mmc_test_card *VAR_1,
 unsigned int VAR_2, unsigned int VAR_3, struct timespec64 VAR_4,
 unsigned int VAR_5, unsigned int VAR_6)
{
 struct mmc_test_transfer_result *VAR_7;

 if (!VAR_1->gr)
  return;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return;

 VAR_7->count = VAR_2;
 VAR_7->sectors = VAR_3;
 VAR_7->ts = VAR_4;
 VAR_7->rate = VAR_5;
 VAR_7->iops = VAR_6;

 FUNC_1(&VAR_7->link, &VAR_1->gr->tr_lst);
}

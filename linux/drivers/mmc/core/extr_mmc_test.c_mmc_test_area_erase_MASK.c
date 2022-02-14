
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_test_area {int max_sz; int dev_addr; } ;
struct mmc_test_card {int card; struct mmc_test_area area; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mmc_test_card *VAR_1)
{
 struct mmc_test_area *VAR_2 = &VAR_1->area;

 if (!FUNC_0(VAR_1->card))
  return 0;

 return FUNC_1(VAR_1->card, VAR_2->dev_addr, VAR_2->max_sz >> 9,
    VAR_0);
}

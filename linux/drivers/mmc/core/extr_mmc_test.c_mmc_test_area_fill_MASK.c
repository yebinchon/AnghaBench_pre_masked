
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_test_area {int dev_addr; int max_tfr; } ;
struct mmc_test_card {struct mmc_test_area area; } ;


 int FUNC_0 (struct mmc_test_card*,int ,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mmc_test_card *VAR_0)
{
 struct mmc_test_area *VAR_1 = &VAR_0->area;

 return FUNC_0(VAR_0, VAR_1->max_tfr, VAR_1->dev_addr, 1, 0, 0);
}

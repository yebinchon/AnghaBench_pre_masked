
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_test_area {int dev_addr; int max_tfr; } ;
struct mmc_test_card {struct mmc_test_area area; } ;


 int FUNC_0 (struct mmc_test_card*,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct mmc_test_card *VAR_0, int VAR_1,
         int VAR_2)
{
 struct mmc_test_area *VAR_3 = &VAR_0->area;

 return FUNC_0(VAR_0, VAR_3->max_tfr, VAR_3->dev_addr, VAR_1,
    VAR_2, 1);
}

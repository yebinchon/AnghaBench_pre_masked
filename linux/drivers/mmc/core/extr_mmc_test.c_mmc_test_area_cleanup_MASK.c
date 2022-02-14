
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_test_area {int mem; int sg; } ;
struct mmc_test_card {struct mmc_test_area area; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mmc_test_card *VAR_0)
{
 struct mmc_test_area *VAR_1 = &VAR_0->area;

 FUNC_0(VAR_1->sg);
 FUNC_1(VAR_1->mem);

 return 0;
}

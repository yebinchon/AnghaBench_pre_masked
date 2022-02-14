
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_test_mem {size_t cnt; struct mmc_test_mem* arr; int order; int page; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mmc_test_mem*) ;

__attribute__((used)) static void FUNC_2(struct mmc_test_mem *VAR_0)
{
 if (!VAR_0)
  return;
 while (VAR_0->cnt--)
  FUNC_0(VAR_0->arr[VAR_0->cnt].page,
        VAR_0->arr[VAR_0->cnt].order);
 FUNC_1(VAR_0->arr);
 FUNC_1(VAR_0);
}

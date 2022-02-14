
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct be_dma_mem {int size; int dma; int va; } ;
struct be_cmd_req_ddrdma_test {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct be_adapter*,int const,int,struct be_dma_mem*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (int *,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct be_adapter *VAR_2)
{
 int VAR_3, VAR_4;
 struct be_dma_mem VAR_5;
 static const u64 VAR_6[2] = {
  0x5a5a5a5a5a5a5a5aULL, 0xa5a5a5a5a5a5a5a5ULL
 };

 VAR_5.size = sizeof(struct be_cmd_req_ddrdma_test);
 VAR_5.va = FUNC_2(&VAR_2->pdev->dev,
        VAR_5.size, &VAR_5.dma,
        VAR_1);
 if (!VAR_5.va)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  VAR_3 = FUNC_0(VAR_2, VAR_6[VAR_4],
       4096, &VAR_5);
  if (VAR_3 != 0)
   goto err;
 }

err:
 FUNC_3(&VAR_2->pdev->dev, VAR_5.size, VAR_5.va,
     VAR_5.dma);
 return FUNC_1(VAR_3);
}

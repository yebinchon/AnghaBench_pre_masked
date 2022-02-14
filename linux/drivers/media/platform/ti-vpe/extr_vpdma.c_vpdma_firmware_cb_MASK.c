
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vpdma_data {TYPE_1__* pdev; int (* cb ) (TYPE_1__*) ;} ;
struct vpdma_buf {scalar_t__ dma_addr; int addr; } ;
struct firmware {int size; int data; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct vpdma_data*,int ,int ,int ) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct vpdma_buf*,int ) ;
 int FUNC_9 (struct vpdma_buf*) ;
 int FUNC_10 (struct vpdma_data*,struct vpdma_buf*) ;
 int FUNC_11 (struct vpdma_data*,struct vpdma_buf*) ;
 int FUNC_12 (struct vpdma_data*,int ,int ) ;

__attribute__((used)) static void FUNC_13(const struct firmware *VAR_4, void *VAR_5)
{
 struct vpdma_data *VAR_6 = VAR_5;
 struct vpdma_buf VAR_7;
 int VAR_8, VAR_9;

 FUNC_0(&VAR_6->pdev->dev, "firmware callback\n");

 if (!VAR_4 || !VAR_4->data) {
  FUNC_1(&VAR_6->pdev->dev, "couldn't get firmware\n");
  return;
 }


 if (FUNC_4(VAR_6, VAR_1, VAR_2,
   VAR_3)) {
  VAR_6->cb(VAR_6->pdev);
  return;
 }

 VAR_9 = FUNC_8(&VAR_7, VAR_4->size);
 if (VAR_9) {
  FUNC_1(&VAR_6->pdev->dev,
   "failed to allocate dma buffer for firmware\n");
  goto rel_fw;
 }

 FUNC_2(VAR_7.addr, VAR_4->data, VAR_4->size);

 FUNC_10(VAR_6, &VAR_7);

 FUNC_12(VAR_6, VAR_0, (u32) VAR_7.dma_addr);

 for (VAR_8 = 0; VAR_8 < 100; VAR_8++) {
  FUNC_3(10);

  if (FUNC_4(VAR_6, VAR_1, VAR_2,
    VAR_3))
   break;
 }

 if (VAR_8 == 100) {
  FUNC_1(&VAR_6->pdev->dev, "firmware upload failed\n");
  goto free_buf;
 }

 VAR_6->cb(VAR_6->pdev);

free_buf:
 FUNC_11(VAR_6, &VAR_7);

 FUNC_9(&VAR_7);
rel_fw:
 FUNC_5(VAR_4);
}

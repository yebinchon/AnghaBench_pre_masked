
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knav_pool {int num_desc; int queue; TYPE_1__* kdev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (struct knav_pool*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int*) ;

__attribute__((used)) static void FUNC_5(struct knav_pool *VAR_0)
{
 dma_addr_t VAR_1;
 unsigned VAR_2;
 void *VAR_3;
 int VAR_4;

 if (!VAR_0->queue)
  return;

 for (VAR_4 = 0;; VAR_4++) {
  VAR_1 = FUNC_4(VAR_0->queue, &VAR_2);
  if (!VAR_1)
   break;
  VAR_3 = FUNC_2(VAR_0, VAR_1);
  if (!VAR_3) {
   FUNC_1(VAR_0->kdev->dev,
    "couldn't unmap desc, continuing\n");
   continue;
  }
 }
 FUNC_0(VAR_4 != VAR_0->num_desc);
 FUNC_3(VAR_0->queue);
}

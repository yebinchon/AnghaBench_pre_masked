
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aspeed_video_addr {unsigned long long dma; int * virt; scalar_t__ size; } ;
struct aspeed_video {int dev; } ;


 int FUNC_0 (int ,scalar_t__,int *,unsigned long long) ;

__attribute__((used)) static void FUNC_1(struct aspeed_video *VAR_0,
      struct aspeed_video_addr *VAR_1)
{
 FUNC_0(VAR_0->dev, VAR_1->size, VAR_1->virt, VAR_1->dma);
 VAR_1->size = 0;
 VAR_1->dma = 0ULL;
 VAR_1->virt = ((void*)0);
}

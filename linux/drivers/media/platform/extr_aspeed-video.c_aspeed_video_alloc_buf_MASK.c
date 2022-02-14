
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aspeed_video_addr {unsigned int size; int virt; int dma; } ;
struct aspeed_video {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,int *,int ) ;

__attribute__((used)) static bool FUNC_1(struct aspeed_video *VAR_1,
       struct aspeed_video_addr *VAR_2,
       unsigned int VAR_3)
{
 VAR_2->virt = FUNC_0(VAR_1->dev, VAR_3, &VAR_2->dma,
     VAR_0);
 if (!VAR_2->virt)
  return 0;

 VAR_2->size = VAR_3;
 return 1;
}

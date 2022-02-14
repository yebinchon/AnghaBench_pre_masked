
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_virtqueue {int use_dma_api; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct vring_virtqueue const*) ;

__attribute__((used)) static int FUNC_2(const struct vring_virtqueue *VAR_0,
          dma_addr_t VAR_1)
{
 if (!VAR_0->use_dma_api)
  return 0;

 return FUNC_0(FUNC_1(VAR_0), VAR_1);
}

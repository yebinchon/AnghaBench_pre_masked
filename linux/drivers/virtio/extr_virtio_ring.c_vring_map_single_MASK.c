
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_virtqueue {int use_dma_api; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,void*,size_t,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct vring_virtqueue const*) ;

__attribute__((used)) static dma_addr_t FUNC_3(const struct vring_virtqueue *VAR_0,
       void *VAR_1, size_t VAR_2,
       enum dma_data_direction VAR_3)
{
 if (!VAR_0->use_dma_api)
  return (dma_addr_t)FUNC_1(VAR_1);

 return FUNC_0(FUNC_2(VAR_0),
         VAR_1, VAR_2, VAR_3);
}

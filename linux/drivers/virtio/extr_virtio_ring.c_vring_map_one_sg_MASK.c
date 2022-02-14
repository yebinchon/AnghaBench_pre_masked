
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_virtqueue {int use_dma_api; } ;
struct scatterlist {int length; int offset; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct vring_virtqueue const*) ;

__attribute__((used)) static dma_addr_t FUNC_4(const struct vring_virtqueue *VAR_0,
       struct scatterlist *VAR_1,
       enum dma_data_direction VAR_2)
{
 if (!VAR_0->use_dma_api)
  return (dma_addr_t)FUNC_2(VAR_1);






 return FUNC_0(FUNC_3(VAR_0),
       FUNC_1(VAR_1), VAR_1->offset, VAR_1->length,
       VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rocker_dma_ring_info {size_t head; scalar_t__ tail; struct rocker_desc_info* desc_info; int size; } ;
struct rocker_desc_info {scalar_t__ tlv_size; } ;


 scalar_t__ FUNC_0 (size_t,int ) ;

__attribute__((used)) static struct rocker_desc_info *
FUNC_1(const struct rocker_dma_ring_info *VAR_0)
{
 struct rocker_desc_info *VAR_1;
 u32 VAR_2 = FUNC_0(VAR_0->head, VAR_0->size);

 VAR_1 = &VAR_0->desc_info[VAR_0->head];
 if (VAR_2 == VAR_0->tail)
  return ((void*)0);
 VAR_1->tlv_size = 0;
 return VAR_1;
}

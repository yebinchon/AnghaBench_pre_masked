
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_dma_ring_info {size_t tail; size_t head; int size; struct rocker_desc_info* desc_info; } ;
struct rocker_desc_info {TYPE_1__* desc; int tlv_size; } ;
struct TYPE_2__ {int tlv_size; } ;


 size_t FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct rocker_desc_info*) ;

__attribute__((used)) static struct rocker_desc_info *
FUNC_2(struct rocker_dma_ring_info *VAR_0)
{
 struct rocker_desc_info *VAR_1;

 if (VAR_0->tail == VAR_0->head)
  return ((void*)0);
 VAR_1 = &VAR_0->desc_info[VAR_0->tail];
 if (!FUNC_1(VAR_1))
  return ((void*)0);
 VAR_0->tail = FUNC_0(VAR_0->tail, VAR_0->size);
 VAR_1->tlv_size = VAR_1->desc->tlv_size;
 return VAR_1;
}

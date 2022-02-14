
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knav_region {int desc_size; scalar_t__ dma_start; } ;
struct knav_pool {int desc_size; int num_desc; int region_offset; int queue; int dev; struct knav_region* region; } ;
typedef scalar_t__ dma_addr_t ;


 unsigned int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__,unsigned int,int ) ;
 int FUNC_2 (int ,scalar_t__,unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct knav_pool *VAR_2)
{
 struct knav_region *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->region;
 VAR_2->desc_size = VAR_3->desc_size;
 for (VAR_4 = 0; VAR_4 < VAR_2->num_desc; VAR_4++) {
  int VAR_5 = VAR_2->region_offset + VAR_4;
  dma_addr_t VAR_6;
  unsigned VAR_7;
  VAR_6 = VAR_3->dma_start + (VAR_3->desc_size * VAR_5);
  VAR_7 = FUNC_0(VAR_2->desc_size, VAR_1);
  FUNC_1(VAR_2->dev, VAR_6, VAR_7,
        VAR_0);
  FUNC_2(VAR_2->queue, VAR_6, VAR_7, 0);
 }
}

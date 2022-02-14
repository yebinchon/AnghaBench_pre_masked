
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_pagelist_info {unsigned int num_pages; int dma_addr; int pagelist; int pagelist_buffer_size; int * pages; scalar_t__ pages_need_release; int dma_dir; int scatterlist; scalar_t__ scatterlist_mapped; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,unsigned int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct vchiq_pagelist_info *VAR_1)
{
 if (VAR_1->scatterlist_mapped) {
  FUNC_1(VAR_0, VAR_1->scatterlist,
        VAR_1->num_pages, VAR_1->dma_dir);
 }

 if (VAR_1->pages_need_release) {
  unsigned int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1->num_pages; VAR_2++)
   FUNC_2(VAR_1->pages[VAR_2]);
 }

 FUNC_0(VAR_0, VAR_1->pagelist_buffer_size,
     VAR_1->pagelist, VAR_1->dma_addr);
}

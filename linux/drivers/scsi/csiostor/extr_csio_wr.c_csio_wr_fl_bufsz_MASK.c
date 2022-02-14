
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct csio_sge {int * sge_fl_buf_size; } ;
struct csio_dma_buf {int paddr; } ;



__attribute__((used)) static inline uint32_t
FUNC_0(struct csio_sge *VAR_0, struct csio_dma_buf *VAR_1)
{
 return VAR_0->sge_fl_buf_size[VAR_1->paddr & 0xF];
}

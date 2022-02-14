
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int mv_col_buf_dma; unsigned int mv_col_buf_field_size; } ;
struct TYPE_4__ {TYPE_1__ h264; } ;
struct cedrus_ctx {TYPE_2__ codec; } ;
typedef unsigned int dma_addr_t ;



__attribute__((used)) static dma_addr_t FUNC_0(struct cedrus_ctx *VAR_0,
           unsigned int VAR_1,
           unsigned int VAR_2)
{
 dma_addr_t VAR_3 = VAR_0->codec.h264.mv_col_buf_dma;


 VAR_3 += VAR_1 * VAR_0->codec.h264.mv_col_buf_field_size * 2;


 VAR_3 += VAR_2 * VAR_0->codec.h264.mv_col_buf_field_size;

 return VAR_3;
}

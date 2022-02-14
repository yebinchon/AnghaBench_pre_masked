
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_rx_queue {TYPE_2__* efx; } ;
struct efx_rx_buffer {int dma_addr; scalar_t__ len; } ;
typedef int efx_qword_t ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {scalar_t__ rx_buffer_padding; } ;


 int FUNC_0 (int ,int ,scalar_t__,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct efx_rx_buffer* FUNC_1 (struct efx_rx_queue*,unsigned int) ;
 int * FUNC_2 (struct efx_rx_queue*,unsigned int) ;

__attribute__((used)) static inline void
FUNC_3(struct efx_rx_queue *VAR_3, unsigned VAR_4)
{
 struct efx_rx_buffer *VAR_5;
 efx_qword_t *VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 VAR_5 = FUNC_1(VAR_3, VAR_4);
 FUNC_0(*VAR_6,
        VAR_2,
        VAR_5->len -
        VAR_3->efx->type->rx_buffer_padding,
        VAR_1, 0,
        VAR_0, VAR_5->dma_addr);
}

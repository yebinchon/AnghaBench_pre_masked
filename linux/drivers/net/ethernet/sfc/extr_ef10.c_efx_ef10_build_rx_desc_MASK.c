
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_queue {int dummy; } ;
struct efx_rx_buffer {int dma_addr; int len; } ;
typedef int efx_qword_t ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct efx_rx_buffer* FUNC_1 (struct efx_rx_queue*,unsigned int) ;
 int * FUNC_2 (struct efx_rx_queue*,unsigned int) ;

__attribute__((used)) static inline void
FUNC_3(struct efx_rx_queue *VAR_2, unsigned int VAR_3)
{
 struct efx_rx_buffer *VAR_4;
 efx_qword_t *VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 FUNC_0(*VAR_5,
        VAR_1, VAR_4->len,
        VAR_0, VAR_4->dma_addr);
}

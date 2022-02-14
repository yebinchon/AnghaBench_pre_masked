
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_tx_queue {int efx; struct efx_buffer* cb_page; } ;
struct efx_tx_buffer {scalar_t__ unmap_len; scalar_t__ dma_addr; } ;
struct efx_buffer {scalar_t__ addr; scalar_t__ dma_addr; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,struct efx_buffer*,int,int ) ;
 unsigned int FUNC_1 (struct efx_tx_queue*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline u8 *FUNC_3(struct efx_tx_queue *VAR_5,
      struct efx_tx_buffer *VAR_6)
{
 unsigned int VAR_7 = FUNC_1(VAR_5);
 struct efx_buffer *VAR_8 =
  &VAR_5->cb_page[VAR_7 >> (VAR_3 - VAR_0)];
 unsigned int VAR_9 =
  ((VAR_7 << VAR_0) + VAR_2) & (VAR_4 - 1);

 if (FUNC_2(!VAR_8->addr) &&
     FUNC_0(VAR_5->efx, VAR_8, VAR_4,
     VAR_1))
  return ((void*)0);
 VAR_6->dma_addr = VAR_8->dma_addr + VAR_9;
 VAR_6->unmap_len = 0;
 return (u8 *)VAR_8->addr + VAR_9;
}

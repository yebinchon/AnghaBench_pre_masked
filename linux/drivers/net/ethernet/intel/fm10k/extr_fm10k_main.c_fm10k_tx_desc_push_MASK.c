
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct fm10k_tx_desc {int flags; int buflen; int buffer_addr; } ;
struct fm10k_ring {int count; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct fm10k_ring *VAR_3,
          struct fm10k_tx_desc *VAR_4, u16 VAR_5,
          dma_addr_t VAR_6, unsigned int VAR_7, u8 VAR_8)
{

 if ((++VAR_5 & (VAR_2 - 1)) == 0)
  VAR_8 |= VAR_1 | VAR_0;


 VAR_4->buffer_addr = FUNC_1(VAR_6);
 VAR_4->flags = VAR_8;
 VAR_4->buflen = FUNC_0(VAR_7);


 return VAR_5 == VAR_3->count;
}

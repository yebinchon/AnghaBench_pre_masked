
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xge_raw_desc {void* m1; void* m0; } ;
struct xge_desc_ring {int dma_addr; struct xge_raw_desc* raw_desc; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct xge_desc_ring *VAR_7)
{
 struct xge_raw_desc *VAR_8;
 dma_addr_t VAR_9, VAR_10;
 u16 VAR_11;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_8 = &VAR_7->raw_desc[VAR_12];

  VAR_11 = (VAR_12 + 1) & (VAR_6 - 1);
  VAR_10 = VAR_7->dma_addr + (VAR_11 * VAR_5);

  VAR_8->m0 = FUNC_1(FUNC_0(VAR_0, 1) |
        FUNC_0(VAR_3, VAR_4));
  VAR_9 = FUNC_2(VAR_10);
  VAR_8->m1 = FUNC_1(FUNC_0(VAR_2, VAR_10) |
        FUNC_0(VAR_1, VAR_9));
 }
}

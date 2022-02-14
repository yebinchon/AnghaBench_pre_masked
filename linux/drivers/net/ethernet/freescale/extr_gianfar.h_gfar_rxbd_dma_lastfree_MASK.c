
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rxbd8 {int dummy; } ;
struct gfar_priv_rx_q {int next_to_use; int rx_ring_size; struct rxbd8* rx_bd_base; int rx_bd_dma_base; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct gfar_priv_rx_q *VAR_0)
{
 struct rxbd8 *VAR_1;
 u32 VAR_2;
 int VAR_3;

 VAR_3 = VAR_0->next_to_use ? VAR_0->next_to_use - 1 : VAR_0->rx_ring_size - 1;
 VAR_1 = &VAR_0->rx_bd_base[VAR_3];
 VAR_2 = FUNC_0(VAR_0->rx_bd_dma_base);
 VAR_2 += (uintptr_t)VAR_1 - (uintptr_t)VAR_0->rx_bd_base;

 return VAR_2;
}

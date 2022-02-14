
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct gve_rx_ring {size_t ntfy_id; } ;
struct gve_priv {struct gve_rx_ring* rx; struct gve_notify_block* ntfy_blocks; } ;
struct gve_notify_block {struct gve_rx_ring* rx; } ;


 size_t FUNC_0 (struct gve_priv*,int) ;

__attribute__((used)) static void FUNC_1(struct gve_priv *VAR_0, int VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0, VAR_1);
 struct gve_notify_block *VAR_3 = &VAR_0->ntfy_blocks[VAR_2];
 struct gve_rx_ring *VAR_4 = &VAR_0->rx[VAR_1];

 VAR_3->rx = VAR_4;
 VAR_4->ntfy_id = VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gve_tx_ring {int ntfy_id; } ;
struct gve_priv {struct gve_tx_ring* tx; struct gve_notify_block* ntfy_blocks; } ;
struct gve_notify_block {struct gve_tx_ring* tx; } ;


 int FUNC_0 (struct gve_priv*,int) ;

__attribute__((used)) static void FUNC_1(struct gve_priv *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1);
 struct gve_notify_block *VAR_3 = &VAR_0->ntfy_blocks[VAR_2];
 struct gve_tx_ring *VAR_4 = &VAR_0->tx[VAR_1];

 VAR_3->tx = VAR_4;
 VAR_4->ntfy_id = VAR_2;
}

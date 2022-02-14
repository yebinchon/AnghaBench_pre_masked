
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gve_priv {struct gve_notify_block* ntfy_blocks; } ;
struct gve_notify_block {int * tx; } ;


 size_t FUNC_0 (struct gve_priv*,int) ;

__attribute__((used)) static void FUNC_1(struct gve_priv *VAR_0, int VAR_1)
{
 struct gve_notify_block *VAR_2 =
   &VAR_0->ntfy_blocks[FUNC_0(VAR_0, VAR_1)];

 VAR_2->tx = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gve_priv {struct gve_notify_block* ntfy_blocks; } ;
struct gve_notify_block {int napi; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct gve_priv *VAR_0, int VAR_1)
{
 struct gve_notify_block *VAR_2 = &VAR_0->ntfy_blocks[VAR_1];

 FUNC_0(&VAR_2->napi);
}

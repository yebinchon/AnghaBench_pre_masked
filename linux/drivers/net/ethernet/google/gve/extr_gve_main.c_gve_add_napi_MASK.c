
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gve_priv {int dev; struct gve_notify_block* ntfy_blocks; } ;
struct gve_notify_block {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct gve_priv *VAR_2, int VAR_3)
{
 struct gve_notify_block *VAR_4 = &VAR_2->ntfy_blocks[VAR_3];

 FUNC_0(VAR_2->dev, &VAR_4->napi, VAR_1,
         VAR_0);
}

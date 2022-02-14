
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gve_priv {int dummy; } ;
struct gve_notify_block {int napi; struct gve_priv* priv; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gve_priv*,struct gve_notify_block*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct gve_notify_block *VAR_4 = VAR_3;
 struct gve_priv *VAR_5 = VAR_4->priv;

 FUNC_1(VAR_0, FUNC_0(VAR_5, VAR_4));
 FUNC_2(&VAR_4->napi);
 return VAR_1;
}

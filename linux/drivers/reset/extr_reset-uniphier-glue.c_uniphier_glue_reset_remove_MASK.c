
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_glue_reset_priv {int clk; TYPE_1__* data; int * rst; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int nrsts; int nclks; } ;


 int FUNC_0 (int ,int ) ;
 struct uniphier_glue_reset_priv* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct uniphier_glue_reset_priv *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->data->nrsts; VAR_2++)
  FUNC_2(VAR_1->rst[VAR_2]);

 FUNC_0(VAR_1->data->nclks, VAR_1->clk);

 return 0;
}

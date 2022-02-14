
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gve_priv {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct gve_priv*) ;
 int FUNC_2 (struct gve_priv*) ;
 int FUNC_3 (struct gve_priv*) ;
 int FUNC_4 (struct gve_priv*) ;
 scalar_t__ FUNC_5 (struct gve_priv*) ;
 int FUNC_6 (struct gve_priv*) ;

__attribute__((used)) static void FUNC_7(struct gve_priv *VAR_0)
{
 int VAR_1;


 if (FUNC_5(VAR_0)) {
  VAR_1 = FUNC_1(VAR_0);
  if (VAR_1) {
   FUNC_0(&VAR_0->pdev->dev,
    "Could not deconfigure device resources: err=%d\n",
    VAR_1);
   FUNC_6(VAR_0);
  }
 }
 FUNC_3(VAR_0);
 FUNC_4(VAR_0);
 FUNC_2(VAR_0);
}

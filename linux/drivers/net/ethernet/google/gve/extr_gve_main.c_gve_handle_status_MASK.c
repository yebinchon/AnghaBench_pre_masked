
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gve_priv {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gve_priv*) ;

__attribute__((used)) static void FUNC_2(struct gve_priv *VAR_1, u32 VAR_2)
{
 if (VAR_0 & VAR_2) {
  FUNC_0(&VAR_1->pdev->dev, "Device requested reset.\n");
  FUNC_1(VAR_1);
 }
}

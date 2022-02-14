
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gve_priv {int dev; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gve_priv*) ;
 int FUNC_2 (struct gve_priv*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct gve_priv*,int) ;
 int FUNC_5 (struct gve_priv*,int) ;
 int FUNC_6 (struct gve_priv*) ;
 int FUNC_7 (struct gve_priv*) ;
 int FUNC_8 (struct gve_priv*) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct gve_priv *VAR_0, bool VAR_1)
{
 bool VAR_2 = FUNC_9(VAR_0->dev);
 int VAR_3;

 FUNC_0(&VAR_0->pdev->dev, "Performing reset\n");
 FUNC_1(VAR_0);
 FUNC_6(VAR_0);



 if (!VAR_1) {
  FUNC_8(VAR_0);
  FUNC_4(VAR_0, VAR_2);
 } else {

  if (VAR_2) {
   VAR_3 = FUNC_3(VAR_0->dev);

   if (VAR_3)
    FUNC_4(VAR_0, VAR_2);
  }

  FUNC_7(VAR_0);
 }


 VAR_3 = FUNC_5(VAR_0, VAR_2);
 FUNC_2(VAR_0);
 return VAR_3;
}

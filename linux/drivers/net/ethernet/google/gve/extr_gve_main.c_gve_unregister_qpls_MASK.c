
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gve_priv {TYPE_1__* qpls; int dev; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct gve_priv*,int ) ;
 int FUNC_1 (struct gve_priv*) ;
 int FUNC_2 (struct gve_priv*) ;
 int FUNC_3 (struct gve_priv*,int ,int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct gve_priv *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1) + FUNC_1(VAR_1);
 int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_0(VAR_1, VAR_1->qpls[VAR_4].id);

  if (VAR_3) {
   FUNC_3(VAR_1, VAR_0, VAR_1->dev,
      "Failed to unregister queue page list %d\n",
      VAR_1->qpls[VAR_4].id);
   return VAR_3;
  }
 }
 return 0;
}

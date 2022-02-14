
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_info {scalar_t__ uV; scalar_t__ uA; int reg; } ;
struct q6v5 {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct q6v5 *VAR_1,
     struct reg_info *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_2[VAR_5].uV > 0) {
   VAR_4 = FUNC_4(VAR_2[VAR_5].reg,
     VAR_2[VAR_5].uV, VAR_0);
   if (VAR_4) {
    FUNC_0(VAR_1->dev,
     "Failed to request voltage for %d.\n",
      VAR_5);
    goto err;
   }
  }

  if (VAR_2[VAR_5].uA > 0) {
   VAR_4 = FUNC_3(VAR_2[VAR_5].reg,
       VAR_2[VAR_5].uA);
   if (VAR_4 < 0) {
    FUNC_0(VAR_1->dev,
     "Failed to set regulator mode\n");
    goto err;
   }
  }

  VAR_4 = FUNC_2(VAR_2[VAR_5].reg);
  if (VAR_4) {
   FUNC_0(VAR_1->dev, "Regulator enable failed\n");
   goto err;
  }
 }

 return 0;
err:
 for (; VAR_5 >= 0; VAR_5--) {
  if (VAR_2[VAR_5].uV > 0)
   FUNC_4(VAR_2[VAR_5].reg, 0, VAR_0);

  if (VAR_2[VAR_5].uA > 0)
   FUNC_3(VAR_2[VAR_5].reg, 0);

  FUNC_1(VAR_2[VAR_5].reg);
 }

 return VAR_4;
}

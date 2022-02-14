
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ci_hdrc_cable {int nb; int edev; struct ci_hdrc* ci; } ;
struct ci_hdrc {int dev; TYPE_1__* platdata; } ;
struct TYPE_2__ {struct ci_hdrc_cable vbus_extcon; struct ci_hdrc_cable id_extcon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct ci_hdrc *VAR_2)
{
 struct ci_hdrc_cable *VAR_3, *VAR_4;
 int VAR_5;

 VAR_3 = &VAR_2->platdata->id_extcon;
 VAR_3->ci = VAR_2;
 if (!FUNC_0(VAR_3->edev)) {
  VAR_5 = FUNC_2(VAR_2->dev, VAR_3->edev,
      VAR_1, &VAR_3->nb);
  if (VAR_5 < 0) {
   FUNC_1(VAR_2->dev, "register ID failed\n");
   return VAR_5;
  }
 }

 VAR_4 = &VAR_2->platdata->vbus_extcon;
 VAR_4->ci = VAR_2;
 if (!FUNC_0(VAR_4->edev)) {
  VAR_5 = FUNC_2(VAR_2->dev, VAR_4->edev,
      VAR_0, &VAR_4->nb);
  if (VAR_5 < 0) {
   FUNC_1(VAR_2->dev, "register VBUS failed\n");
   return VAR_5;
  }
 }

 return 0;
}

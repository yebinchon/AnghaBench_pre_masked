
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_berlin_priv {scalar_t__ nphys; TYPE_1__** phys; } ;
struct phy {int dummy; } ;
struct of_phandle_args {scalar_t__* args; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ index; struct phy* phy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct phy_berlin_priv* FUNC_2 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_3(struct device *VAR_1,
          struct of_phandle_args *VAR_2)
{
 struct phy_berlin_priv *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 if (FUNC_1(VAR_2->args[0] >= VAR_3->nphys))
  return FUNC_0(-VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_3->nphys; VAR_4++) {
  if (VAR_3->phys[VAR_4]->index == VAR_2->args[0])
   break;
 }

 if (VAR_4 == VAR_3->nphys)
  return FUNC_0(-VAR_0);

 return VAR_3->phys[VAR_4]->phy;
}

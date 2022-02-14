
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {int dev; TYPE_1__* ops; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int owner; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct phy*) ;
 struct phy* FUNC_2 (struct device_node*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device_node*,char*,char const*) ;
 int FUNC_5 (int ) ;

struct phy *FUNC_6(struct device_node *VAR_1, const char *VAR_2)
{
 struct phy *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 if (VAR_2)
  VAR_4 = FUNC_4(VAR_1, "phy-names", VAR_2);

 VAR_3 = FUNC_2(VAR_1, VAR_4);
 if (FUNC_1(VAR_3))
  return VAR_3;

 if (!FUNC_5(VAR_3->ops->owner))
  return FUNC_0(-VAR_0);

 FUNC_3(&VAR_3->dev);

 return VAR_3;
}

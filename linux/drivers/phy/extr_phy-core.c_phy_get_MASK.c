
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {int dev; TYPE_1__* ops; } ;
struct device {scalar_t__ of_node; } ;
struct TYPE_2__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct phy*) ;
 struct phy* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,char*,char const*) ;
 struct phy* FUNC_6 (struct device*,char const*) ;
 int FUNC_7 (int ) ;

struct phy *FUNC_8(struct device *VAR_2, const char *VAR_3)
{
 int VAR_4 = 0;
 struct phy *VAR_5;

 if (VAR_3 == ((void*)0)) {
  FUNC_3(VAR_2, "missing string\n");
  return FUNC_0(-VAR_0);
 }

 if (VAR_2->of_node) {
  VAR_4 = FUNC_5(VAR_2->of_node, "phy-names",
   VAR_3);
  VAR_5 = FUNC_2(VAR_2->of_node, VAR_4);
 } else {
  VAR_5 = FUNC_6(VAR_2, VAR_3);
 }
 if (FUNC_1(VAR_5))
  return VAR_5;

 if (!FUNC_7(VAR_5->ops->owner))
  return FUNC_0(-VAR_1);

 FUNC_4(&VAR_5->dev);

 return VAR_5;
}

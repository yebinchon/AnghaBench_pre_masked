
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {int dev; TYPE_1__* ops; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct phy*) ;
 struct phy* FUNC_2 (struct device_node*,int) ;
 int VAR_3 ;
 int FUNC_3 (struct device*,struct phy**) ;
 struct phy** FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct phy**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

struct phy *FUNC_8(struct device *VAR_4, struct device_node *VAR_5,
         int VAR_6)
{
 struct phy **VAR_7, *VAR_8;

 VAR_7 = FUNC_4(VAR_3, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_2(VAR_5, VAR_6);
 if (FUNC_1(VAR_8)) {
  FUNC_5(VAR_7);
  return VAR_8;
 }

 if (!FUNC_7(VAR_8->ops->owner)) {
  FUNC_5(VAR_7);
  return FUNC_0(-VAR_1);
 }

 FUNC_6(&VAR_8->dev);

 *VAR_7 = VAR_8;
 FUNC_3(VAR_4, VAR_7);

 return VAR_8;
}

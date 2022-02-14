
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int of_node; } ;


 int FUNC_0 (struct platform_device*,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 struct device_node* FUNC_3 (struct device_node*,char*) ;
 struct device_node* FUNC_4 (int ) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct device_node *VAR_1, *VAR_2;
 int VAR_3;
 u32 VAR_4 = 0;

 VAR_1 = FUNC_4(VAR_0->dev.parent->of_node);
 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_3(VAR_1, "regulators");
 if (!VAR_2) {
  FUNC_2(&VAR_0->dev, "regulators node not found\n");
 } else {
  FUNC_6(VAR_2, "x-powers,dcdc-freq", &VAR_4);
  VAR_3 = FUNC_0(VAR_0, VAR_4);
  if (VAR_3 < 0) {
   FUNC_1(&VAR_0->dev, "Error setting dcdc frequency: %d\n", VAR_3);
   return VAR_3;
  }

  FUNC_5(VAR_2);
 }

 return 0;
}

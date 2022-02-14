
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * ops; } ;
struct ravb_private {TYPE_1__* mii_bus; TYPE_4__ mdiobb; struct platform_device* pdev; } ;
struct device {int of_node; } ;
struct platform_device {char* name; int id; struct device dev; } ;
struct TYPE_5__ {char* name; int id; struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct ravb_private *VAR_3)
{
 struct platform_device *VAR_4 = VAR_3->pdev;
 struct device *VAR_5 = &VAR_4->dev;
 int VAR_6;


 VAR_3->mdiobb.ops = &VAR_2;


 VAR_3->mii_bus = FUNC_0(&VAR_3->mdiobb);
 if (!VAR_3->mii_bus)
  return -VAR_0;


 VAR_3->mii_bus->name = "ravb_mii";
 VAR_3->mii_bus->parent = VAR_5;
 FUNC_3(VAR_3->mii_bus->id, VAR_1, "%s-%x",
   VAR_4->name, VAR_4->id);


 VAR_6 = FUNC_2(VAR_3->mii_bus, VAR_5->of_node);
 if (VAR_6)
  goto out_free_bus;

 return 0;

out_free_bus:
 FUNC_1(VAR_3->mii_bus);
 return VAR_6;
}

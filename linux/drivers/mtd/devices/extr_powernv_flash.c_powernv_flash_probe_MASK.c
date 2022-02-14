
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct powernv_flash* priv; } ;
struct powernv_flash {TYPE_1__ mtd; int id; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,struct powernv_flash*) ;
 struct powernv_flash* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int ) ;
 int FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (struct device*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct powernv_flash *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_3, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->mtd.priv = VAR_4;

 VAR_5 = FUNC_4(VAR_3->of_node, "ibm,opal-id", &(VAR_4->id));
 if (VAR_5) {
  FUNC_0(VAR_3, "no device property 'ibm,opal-id'\n");
  return VAR_5;
 }

 VAR_5 = FUNC_5(VAR_3, &VAR_4->mtd);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_3, VAR_4);






 return FUNC_3(&VAR_4->mtd, ((void*)0), 0);
}

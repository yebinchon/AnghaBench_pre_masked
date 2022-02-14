
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nd_region {int ro; int dev; } ;
struct gendisk {int disk_name; } ;
struct device {int parent; } ;
struct TYPE_2__ {struct device* parent; } ;


 int FUNC_0 (struct device*,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct gendisk*) ;
 int FUNC_3 (struct gendisk*) ;
 int FUNC_4 (struct gendisk*,int) ;
 struct nd_region* FUNC_5 (int ) ;

int FUNC_6(struct gendisk *VAR_0)
{
 struct device *VAR_1 = FUNC_2(VAR_0)->parent;
 struct nd_region *VAR_2 = FUNC_5(VAR_1->parent);
 int VAR_3 = FUNC_3(VAR_0);





 if (VAR_3 || VAR_2->ro == VAR_3)
  return 0;

 FUNC_0(VAR_1, "%s read-only, marking %s read-only\n",
   FUNC_1(&VAR_2->dev), VAR_0->disk_name);
 FUNC_4(VAR_0, 1);

 return 0;

}

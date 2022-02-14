
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct viafb_subdev_info {TYPE_3__* platdev; int name; } ;
struct viafb_dev {TYPE_2__* pdev; } ;
struct TYPE_6__ {struct viafb_dev* platform_data; int * parent; } ;
struct TYPE_8__ {TYPE_1__ dev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct viafb_dev *VAR_1,
        struct viafb_subdev_info *VAR_2)
{
 int VAR_3;

 VAR_2->platdev = FUNC_2(VAR_2->name, -1);
 if (!VAR_2->platdev) {
  FUNC_0(&VAR_1->pdev->dev, "Unable to allocate pdev %s\n",
   VAR_2->name);
  return -VAR_0;
 }
 VAR_2->platdev->dev.parent = &VAR_1->pdev->dev;
 VAR_2->platdev->dev.platform_data = VAR_1;
 VAR_3 = FUNC_1(VAR_2->platdev);
 if (VAR_3) {
  FUNC_0(&VAR_1->pdev->dev, "Unable to add pdev %s\n",
    VAR_2->name);
  FUNC_3(VAR_2->platdev);
  VAR_2->platdev = ((void*)0);
 }
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int platform_data; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct da903x_subdev_info {int platform_data; int id; int name; } ;
struct da903x_platform_data {int num_subdevs; struct da903x_subdev_info* subdevs; } ;
struct da903x_chip {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct da903x_chip*) ;
 int FUNC_1 (struct platform_device*) ;
 struct platform_device* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct da903x_chip *VAR_1,
     struct da903x_platform_data *VAR_2)
{
 struct da903x_subdev_info *VAR_3;
 struct platform_device *VAR_4;
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_subdevs; VAR_5++) {
  VAR_3 = &VAR_2->subdevs[VAR_5];

  VAR_4 = FUNC_2(VAR_3->name, VAR_3->id);
  if (!VAR_4) {
   VAR_6 = -VAR_0;
   goto failed;
  }

  VAR_4->dev.parent = VAR_1->dev;
  VAR_4->dev.platform_data = VAR_3->platform_data;

  VAR_6 = FUNC_1(VAR_4);
  if (VAR_6) {
   FUNC_3(VAR_4);
   goto failed;
  }
 }
 return 0;

failed:
 FUNC_0(VAR_1);
 return VAR_6;
}

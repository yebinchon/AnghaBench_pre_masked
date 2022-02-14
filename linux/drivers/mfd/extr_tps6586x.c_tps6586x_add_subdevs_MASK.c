
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps6586x_subdev_info {int of_node; int platform_data; int id; int name; } ;
struct tps6586x_platform_data {int num_subdevs; struct tps6586x_subdev_info* subdevs; } ;
struct tps6586x {int dev; } ;
struct TYPE_2__ {int of_node; int platform_data; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*) ;
 struct platform_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct tps6586x*) ;

__attribute__((used)) static int FUNC_4(struct tps6586x *VAR_1,
       struct tps6586x_platform_data *VAR_2)
{
 struct tps6586x_subdev_info *VAR_3;
 struct platform_device *VAR_4;
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_subdevs; VAR_5++) {
  VAR_3 = &VAR_2->subdevs[VAR_5];

  VAR_4 = FUNC_1(VAR_3->name, VAR_3->id);
  if (!VAR_4) {
   VAR_6 = -VAR_0;
   goto failed;
  }

  VAR_4->dev.parent = VAR_1->dev;
  VAR_4->dev.platform_data = VAR_3->platform_data;
  VAR_4->dev.of_node = VAR_3->of_node;

  VAR_6 = FUNC_0(VAR_4);
  if (VAR_6) {
   FUNC_2(VAR_4);
   goto failed;
  }
 }
 return 0;

failed:
 FUNC_3(VAR_1);
 return VAR_6;
}

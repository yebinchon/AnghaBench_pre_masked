
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
typedef enum omap_display_type { ____Placeholder_omap_display_type } omap_display_type ;
struct TYPE_6__ {TYPE_1__* feat; } ;
struct TYPE_4__ {scalar_t__ num_ports; int* ports; } ;




 int FUNC_0 (struct platform_device*,struct device_node*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct device_node*,char*,size_t*) ;
 struct device_node* FUNC_3 (struct device_node*,struct device_node*) ;
 int FUNC_4 (struct platform_device*,struct device_node*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dev.of_node;
 struct device_node *VAR_3;
 int VAR_4, VAR_5 = 0;

 if (VAR_2 == ((void*)0))
  return 0;

 VAR_3 = FUNC_3(VAR_2, ((void*)0));
 if (!VAR_3)
  return 0;

 if (VAR_0.feat->num_ports == 0)
  return 0;

 do {
  enum omap_display_type VAR_6;
  u32 VAR_7;

  VAR_4 = FUNC_2(VAR_3, "reg", &VAR_7);
  if (VAR_4)
   VAR_7 = 0;

  if (VAR_7 >= VAR_0.feat->num_ports)
   continue;

  VAR_6 = VAR_0.feat->ports[VAR_7];

  switch (VAR_6) {
  case 129:
   VAR_5 = FUNC_0(VAR_1, VAR_3);
   break;
  case 128:
   VAR_5 = FUNC_4(VAR_1, VAR_3);
   break;
  default:
   break;
  }
 } while (!VAR_5 &&
   (VAR_3 = FUNC_3(VAR_2, VAR_3)) != ((void*)0));

 if (VAR_5)
  FUNC_1(VAR_1);

 return VAR_5;
}

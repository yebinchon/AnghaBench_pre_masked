
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
typedef enum omap_display_type { ____Placeholder_omap_display_type } omap_display_type ;
struct TYPE_6__ {TYPE_2__* feat; } ;
struct TYPE_5__ {scalar_t__ num_ports; int* ports; } ;




 int FUNC_0 (struct device_node*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (struct device_node*,char*,size_t*) ;
 struct device_node* FUNC_2 (struct device_node*,struct device_node*) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dev.of_node;
 struct device_node *VAR_3;

 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = FUNC_2(VAR_2, ((void*)0));
 if (!VAR_3)
  return;

 if (VAR_0.feat->num_ports == 0)
  return;

 do {
  enum omap_display_type VAR_4;
  u32 VAR_5;
  int VAR_6;

  VAR_6 = FUNC_1(VAR_3, "reg", &VAR_5);
  if (VAR_6)
   VAR_5 = 0;

  if (VAR_5 >= VAR_0.feat->num_ports)
   continue;

  VAR_4 = VAR_0.feat->ports[VAR_5];

  switch (VAR_4) {
  case 129:
   FUNC_0(VAR_3);
   break;
  case 128:
   FUNC_3(VAR_3);
   break;
  default:
   break;
  }
 } while ((VAR_3 = FUNC_2(VAR_2, VAR_3)) != ((void*)0));
}

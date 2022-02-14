
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bcma_hcd_device {int gpio_desc; struct bcma_device* core; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {scalar_t__ of_node; } ;
struct bcma_device {TYPE_1__ id; TYPE_2__ dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bcma_hcd_device*) ;
 int FUNC_2 (struct bcma_hcd_device*) ;
 int FUNC_3 (struct bcma_hcd_device*) ;
 int FUNC_4 (struct bcma_hcd_device*) ;
 int FUNC_5 (struct bcma_device*,struct bcma_hcd_device*) ;
 int FUNC_6 (TYPE_2__*,char*,int ) ;
 struct bcma_hcd_device* FUNC_7 (TYPE_2__*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct bcma_device *VAR_7)
{
 int VAR_8;
 struct bcma_hcd_device *VAR_9;



 VAR_9 = FUNC_7(&VAR_7->dev, sizeof(struct bcma_hcd_device),
          VAR_5);
 if (!VAR_9)
  return -VAR_3;
 VAR_9->core = VAR_7;

 if (VAR_7->dev.of_node)
  VAR_9->gpio_desc = FUNC_6(&VAR_7->dev, "vcc",
          VAR_6);

 switch (VAR_7->id.id) {
 case 128:
  if (FUNC_0(VAR_0))
   VAR_8 = FUNC_3(VAR_9);
  else if (FUNC_0(VAR_1))
   VAR_8 = FUNC_1(VAR_9);
  else
   VAR_8 = -VAR_4;
  break;
 case 130:
  VAR_8 = FUNC_2(VAR_9);
  break;
 case 129:
  VAR_8 = FUNC_4(VAR_9);
  break;
 default:
  return -VAR_2;
 }
 if (VAR_8)
  return VAR_8;

 FUNC_5(VAR_7, VAR_9);
 return 0;
}

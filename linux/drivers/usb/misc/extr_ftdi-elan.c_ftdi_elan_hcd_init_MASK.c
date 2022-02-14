
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * dma_mask; int release; int * parent; TYPE_1__* platform_data; } ;
struct TYPE_8__ {char* name; TYPE_2__ dev; int num_resources; int resource; int id; } ;
struct TYPE_5__ {int potpg; int * reset; } ;
struct usb_ftdi {char* device_name; TYPE_4__ platform_dev; TYPE_3__* udev; TYPE_1__ platform_data; int resources; int sequence_num; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (struct usb_ftdi*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*) ;

__attribute__((used)) static int FUNC_6(struct usb_ftdi *VAR_2)
{
 if (VAR_2->platform_dev.dev.parent)
  return -VAR_0;

 FUNC_2(VAR_2);
 VAR_2->platform_data.potpg = 100;
 VAR_2->platform_data.reset = ((void*)0);
 VAR_2->platform_dev.id = VAR_2->sequence_num;
 VAR_2->platform_dev.resource = VAR_2->resources;
 VAR_2->platform_dev.num_resources = FUNC_0(VAR_2->resources);
 VAR_2->platform_dev.dev.platform_data = &VAR_2->platform_data;
 VAR_2->platform_dev.dev.parent = ((void*)0);
 VAR_2->platform_dev.dev.release = VAR_1;
 VAR_2->platform_dev.dev.dma_mask = ((void*)0);
 FUNC_5(VAR_2->device_name, sizeof(VAR_2->device_name), "u132_hcd");
 VAR_2->platform_dev.name = VAR_2->device_name;
 FUNC_1(&VAR_2->udev->dev, "requesting module '%s'\n", "u132_hcd");
 FUNC_4("u132_hcd");
 FUNC_1(&VAR_2->udev->dev, "registering '%s'\n",
   VAR_2->platform_dev.name);

 return FUNC_3(&VAR_2->platform_dev);
}

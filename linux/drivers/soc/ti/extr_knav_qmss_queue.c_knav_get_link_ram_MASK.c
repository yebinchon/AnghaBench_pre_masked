
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct knav_link_ram_block {int size; int * virt; scalar_t__ dma; } ;
struct knav_device {int dev; } ;
struct device_node {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ,int,scalar_t__*,int ) ;
 int FUNC_2 (struct device_node*,char const*,void**,int) ;
 struct platform_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct knav_device *VAR_3,
           const char *VAR_4,
           struct knav_link_ram_block *VAR_5)
{
 struct platform_device *VAR_6 = FUNC_3(VAR_3->dev);
 struct device_node *VAR_7 = VAR_6->dev.of_node;
 u32 VAR_8[2];
 if (!FUNC_2(VAR_7, VAR_4 , VAR_8, 2)) {
  if (VAR_8[0]) {




   VAR_5->dma = (dma_addr_t)VAR_8[0];
   VAR_5->virt = ((void*)0);
   VAR_5->size = VAR_8[1];
  } else {
   VAR_5->size = VAR_8[1];

   VAR_5->virt = FUNC_1(VAR_3->dev,
        8 * VAR_5->size, &VAR_5->dma,
        VAR_2);
   if (!VAR_5->virt) {
    FUNC_0(VAR_3->dev, "failed to alloc linkram\n");
    return -VAR_1;
   }
  }
 } else {
  return -VAR_0;
 }
 return 0;
}

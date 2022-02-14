
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_chan {TYPE_2__* device; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int FUNC_0 (struct device_node*,char*) ;

__attribute__((used)) static bool FUNC_1(struct dma_chan *VAR_0, void *VAR_1)
{
 struct device_node *VAR_2 = VAR_0->device->dev->of_node;

 return FUNC_0(VAR_2, "nvidia,tegra20-apbdma");
}

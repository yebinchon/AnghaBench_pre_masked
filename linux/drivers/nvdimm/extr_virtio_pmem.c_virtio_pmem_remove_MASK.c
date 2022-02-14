
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_device {TYPE_1__* config; int dev; } ;
struct nvdimm_bus {int dummy; } ;
struct TYPE_2__ {int (* reset ) (struct virtio_device*) ;int (* del_vqs ) (struct virtio_device*) ;} ;


 struct nvdimm_bus* FUNC_0 (int *) ;
 int FUNC_1 (struct nvdimm_bus*) ;
 int FUNC_2 (struct virtio_device*) ;
 int FUNC_3 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_4(struct virtio_device *VAR_0)
{
 struct nvdimm_bus *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(VAR_1);
 VAR_0->config->del_vqs(VAR_0);
 VAR_0->config->reset(VAR_0);
}

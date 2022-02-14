
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct virtio_device {scalar_t__ features; } ;
struct rproc_vdev {int rsc_offset; TYPE_1__* rproc; } ;
struct fw_rsc_vdev {scalar_t__ gfeatures; } ;
struct TYPE_2__ {scalar_t__ table_ptr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct virtio_device*) ;
 struct rproc_vdev* FUNC_2 (struct virtio_device*) ;
 int FUNC_3 (struct virtio_device*) ;

__attribute__((used)) static int FUNC_4(struct virtio_device *VAR_0)
{
 struct rproc_vdev *VAR_1 = FUNC_2(VAR_0);
 struct fw_rsc_vdev *VAR_2;

 VAR_2 = (void *)VAR_1->rproc->table_ptr + VAR_1->rsc_offset;


 FUNC_3(VAR_0);


 FUNC_1(VAR_0);


 FUNC_0((u32)VAR_0->features != VAR_0->features);





 VAR_2->gfeatures = VAR_0->features;

 return 0;
}

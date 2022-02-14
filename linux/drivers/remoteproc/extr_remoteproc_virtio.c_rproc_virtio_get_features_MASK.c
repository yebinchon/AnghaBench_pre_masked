
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct virtio_device {int dummy; } ;
struct rproc_vdev {int rsc_offset; TYPE_1__* rproc; } ;
struct fw_rsc_vdev {int dfeatures; } ;
struct TYPE_2__ {scalar_t__ table_ptr; } ;


 struct rproc_vdev* FUNC_0 (struct virtio_device*) ;

__attribute__((used)) static u64 FUNC_1(struct virtio_device *VAR_0)
{
 struct rproc_vdev *VAR_1 = FUNC_0(VAR_0);
 struct fw_rsc_vdev *VAR_2;

 VAR_2 = (void *)VAR_1->rproc->table_ptr + VAR_1->rsc_offset;

 return VAR_2->dfeatures;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_device {int dev; } ;
struct rproc_vdev {int rsc_offset; TYPE_1__* rproc; } ;
struct fw_rsc_vdev {size_t num_of_vrings; unsigned int config_len; int * vring; } ;
struct TYPE_2__ {scalar_t__ table_ptr; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (void*,void const*,unsigned int) ;
 struct rproc_vdev* FUNC_2 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_3(struct virtio_device *VAR_0, unsigned int VAR_1,
        const void *VAR_2, unsigned int VAR_3)
{
 struct rproc_vdev *VAR_4 = FUNC_2(VAR_0);
 struct fw_rsc_vdev *VAR_5;
 void *VAR_6;

 VAR_5 = (void *)VAR_4->rproc->table_ptr + VAR_4->rsc_offset;
 VAR_6 = &VAR_5->vring[VAR_5->num_of_vrings];

 if (VAR_1 + VAR_3 > VAR_5->config_len || VAR_1 + VAR_3 < VAR_3) {
  FUNC_0(&VAR_0->dev, "rproc_virtio_set: access out of bounds\n");
  return;
 }

 FUNC_1(VAR_6 + VAR_1, VAR_2, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct virtio_device {int dev; } ;
struct rproc_vdev {int rsc_offset; TYPE_1__* rproc; } ;
struct fw_rsc_vdev {int status; } ;
struct TYPE_2__ {scalar_t__ table_ptr; } ;


 int FUNC_0 (int *,char*,int ) ;
 struct rproc_vdev* FUNC_1 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_2(struct virtio_device *VAR_0, u8 VAR_1)
{
 struct rproc_vdev *VAR_2 = FUNC_1(VAR_0);
 struct fw_rsc_vdev *VAR_3;

 VAR_3 = (void *)VAR_2->rproc->table_ptr + VAR_2->rsc_offset;

 VAR_3->status = VAR_1;
 FUNC_0(&VAR_0->dev, "status: %d\n", VAR_1);
}

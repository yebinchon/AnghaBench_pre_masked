
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_device {int dummy; } ;
struct rproc_vdev {int refcount; } ;
struct rproc {int dev; } ;
struct device {int dummy; } ;


 struct virtio_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct virtio_device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 struct rproc* FUNC_4 (struct virtio_device*) ;
 struct rproc_vdev* FUNC_5 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_1)
{
 struct virtio_device *VAR_2 = FUNC_0(VAR_1);
 struct rproc_vdev *VAR_3 = FUNC_5(VAR_2);
 struct rproc *VAR_4 = FUNC_4(VAR_2);

 FUNC_1(VAR_2);

 FUNC_2(&VAR_3->refcount, VAR_0);

 FUNC_3(&VAR_4->dev);
}

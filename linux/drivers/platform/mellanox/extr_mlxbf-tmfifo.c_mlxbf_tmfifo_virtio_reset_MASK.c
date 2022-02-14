
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_device {int dummy; } ;
struct mlxbf_tmfifo_vdev {scalar_t__ status; } ;


 struct mlxbf_tmfifo_vdev* FUNC_0 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_1(struct virtio_device *VAR_0)
{
 struct mlxbf_tmfifo_vdev *VAR_1 = FUNC_0(VAR_0);

 VAR_1->status = 0;
}

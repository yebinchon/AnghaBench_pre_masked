
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct virtio_device {int dummy; } ;
struct mlxbf_tmfifo_vdev {int config; } ;


 int FUNC_0 (void*,int *,unsigned int) ;
 struct mlxbf_tmfifo_vdev* FUNC_1 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_2(struct virtio_device *VAR_0,
        unsigned int VAR_1,
        void *VAR_2,
        unsigned int VAR_3)
{
 struct mlxbf_tmfifo_vdev *VAR_4 = FUNC_1(VAR_0);

 if ((u64)VAR_1 + VAR_3 > sizeof(VAR_4->config))
  return;

 FUNC_0(VAR_2, (u8 *)&VAR_4->config + VAR_1, VAR_3);
}

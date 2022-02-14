
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct virtio_device {int dummy; } ;
struct mlxbf_tmfifo_vring {struct virtqueue* vq; scalar_t__ desc; } ;
struct mlxbf_tmfifo_vdev {struct mlxbf_tmfifo_vring* vrings; } ;


 int FUNC_0 (struct mlxbf_tmfifo_vring*) ;
 int FUNC_1 (struct mlxbf_tmfifo_vring*) ;
 struct mlxbf_tmfifo_vdev* FUNC_2 (struct virtio_device*) ;
 int FUNC_3 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_4(struct virtio_device *VAR_0)
{
 struct mlxbf_tmfifo_vdev *VAR_1 = FUNC_2(VAR_0);
 struct mlxbf_tmfifo_vring *VAR_2;
 struct virtqueue *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1->vrings); VAR_4++) {
  VAR_2 = &VAR_1->vrings[VAR_4];


  if (VAR_2->desc)
   FUNC_1(VAR_2);
  VAR_3 = VAR_2->vq;
  if (VAR_3) {
   VAR_2->vq = ((void*)0);
   FUNC_3(VAR_3);
  }
 }
}

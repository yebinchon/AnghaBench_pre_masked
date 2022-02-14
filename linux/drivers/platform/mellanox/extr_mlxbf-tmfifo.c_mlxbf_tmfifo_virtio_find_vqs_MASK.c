
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vq_callback_t ;
struct virtqueue {struct mlxbf_tmfifo_vring* priv; } ;
struct virtio_device {int dev; } ;
struct mlxbf_tmfifo_vring {struct virtqueue* vq; int va; int align; int num; } ;
struct mlxbf_tmfifo_vdev {struct mlxbf_tmfifo_vring* vrings; } ;
struct irq_affinity {int dummy; } ;


 unsigned int FUNC_0 (struct mlxbf_tmfifo_vring*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct virtio_device*) ;
 int VAR_2 ;
 struct mlxbf_tmfifo_vdev* FUNC_4 (struct virtio_device*) ;
 struct virtqueue* FUNC_5 (int,int ,int ,struct virtio_device*,int,int,int ,int ,int *,char const* const) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct virtio_device *VAR_3,
     unsigned int VAR_4,
     struct virtqueue *VAR_5[],
     vq_callback_t *VAR_6[],
     const char * const VAR_7[],
     const bool *VAR_8,
     struct irq_affinity *VAR_9)
{
 struct mlxbf_tmfifo_vdev *VAR_10 = FUNC_4(VAR_3);
 struct mlxbf_tmfifo_vring *VAR_11;
 struct virtqueue *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 if (VAR_4 > FUNC_0(VAR_10->vrings))
  return -VAR_0;

 for (VAR_13 = 0; VAR_13 < VAR_4; ++VAR_13) {
  if (!VAR_7[VAR_13]) {
   VAR_14 = -VAR_0;
   goto error;
  }
  VAR_11 = &VAR_10->vrings[VAR_13];


  VAR_15 = FUNC_6(VAR_11->num, VAR_11->align);
  FUNC_2(VAR_11->va, 0, VAR_15);
  VAR_12 = FUNC_5(VAR_13, VAR_11->num, VAR_11->align, VAR_3,
      0, 0, VAR_11->va,
      VAR_2,
      VAR_6[VAR_13], VAR_7[VAR_13]);
  if (!VAR_12) {
   FUNC_1(&VAR_3->dev, "vring_new_virtqueue failed\n");
   VAR_14 = -VAR_1;
   goto error;
  }

  VAR_5[VAR_13] = VAR_12;
  VAR_11->vq = VAR_12;
  VAR_12->priv = VAR_11;
 }

 return 0;

error:
 FUNC_3(VAR_3);
 return VAR_14;
}

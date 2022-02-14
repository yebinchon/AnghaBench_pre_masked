
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vq_callback_t ;
struct virtqueue {int dummy; } ;
struct virtproc_info {int num_bufs; size_t buf_size; struct virtio_device* vdev; int bufs_dma; struct virtqueue* rvq; int ns_ept; struct virtqueue* svq; void* rbufs; void* sbufs; int sendq; int tx_lock; int endpoints_lock; int endpoints; } ;
struct TYPE_6__ {int parent; } ;
struct virtio_device {TYPE_1__* config; TYPE_2__ dev; struct virtproc_info* priv; } ;
struct scatterlist {int dummy; } ;
struct TYPE_5__ {int (* del_vqs ) (struct virtio_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct virtproc_info*,int *,int ,struct virtproc_info*,int ) ;
 int FUNC_2 (TYPE_2__*,char*,void*,int *) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 void* FUNC_5 (int ,size_t,int *,int ) ;
 int FUNC_6 (int ,size_t,void*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct virtproc_info*) ;
 struct virtproc_info* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_12 (struct scatterlist*,void*,int) ;
 int * VAR_8 ;
 int FUNC_13 (struct virtio_device*) ;
 int FUNC_14 (struct virtio_device*) ;
 int FUNC_15 (struct virtio_device*,int,struct virtqueue**,int **,char const* const*,int *) ;
 scalar_t__ FUNC_16 (struct virtio_device*,int ) ;
 int FUNC_17 (struct virtqueue*,struct scatterlist*,int,void*,int ) ;
 int FUNC_18 (struct virtqueue*) ;
 int FUNC_19 (struct virtqueue*) ;
 int FUNC_20 (struct virtqueue*) ;
 int FUNC_21 (struct virtqueue*) ;

__attribute__((used)) static int FUNC_22(struct virtio_device *VAR_9)
{
 vq_callback_t *VAR_10[] = { VAR_7, VAR_8 };
 static const char * const VAR_11[] = { "input", "output" };
 struct virtqueue *VAR_12[2];
 struct virtproc_info *VAR_13;
 void *VAR_14;
 int VAR_15 = 0, VAR_16;
 size_t VAR_17;
 bool VAR_18;

 VAR_13 = FUNC_10(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->vdev = VAR_9;

 FUNC_7(&VAR_13->endpoints);
 FUNC_11(&VAR_13->endpoints_lock);
 FUNC_11(&VAR_13->tx_lock);
 FUNC_8(&VAR_13->sendq);


 VAR_15 = FUNC_15(VAR_9, 2, VAR_12, VAR_10, VAR_11, ((void*)0));
 if (VAR_15)
  goto free_vrp;

 VAR_13->rvq = VAR_12[0];
 VAR_13->svq = VAR_12[1];


 FUNC_0(FUNC_19(VAR_13->rvq) !=
  FUNC_19(VAR_13->svq));


 if (FUNC_19(VAR_13->rvq) < VAR_3 / 2)
  VAR_13->num_bufs = FUNC_19(VAR_13->rvq) * 2;
 else
  VAR_13->num_bufs = VAR_3;

 VAR_13->buf_size = VAR_2;

 VAR_17 = VAR_13->num_bufs * VAR_13->buf_size;


 VAR_14 = FUNC_5(VAR_9->dev.parent,
         VAR_17, &VAR_13->bufs_dma,
         VAR_1);
 if (!VAR_14) {
  VAR_15 = -VAR_0;
  goto vqs_del;
 }

 FUNC_2(&VAR_9->dev, "buffers: va %pK, dma %pad\n",
  VAR_14, &VAR_13->bufs_dma);


 VAR_13->rbufs = VAR_14;


 VAR_13->sbufs = VAR_14 + VAR_17 / 2;


 for (VAR_16 = 0; VAR_16 < VAR_13->num_bufs / 2; VAR_16++) {
  struct scatterlist VAR_19;
  void *VAR_20 = VAR_13->rbufs + VAR_16 * VAR_13->buf_size;

  FUNC_12(&VAR_19, VAR_20, VAR_13->buf_size);

  VAR_15 = FUNC_17(VAR_13->rvq, &VAR_19, 1, VAR_20,
       VAR_1);
  FUNC_0(VAR_15);
 }


 FUNC_18(VAR_13->svq);

 VAR_9->priv = VAR_13;


 if (FUNC_16(VAR_9, VAR_5)) {

  VAR_13->ns_ept = FUNC_1(VAR_13, ((void*)0), VAR_6,
      VAR_13, VAR_4);
  if (!VAR_13->ns_ept) {
   FUNC_3(&VAR_9->dev, "failed to create the ns ept\n");
   VAR_15 = -VAR_0;
   goto free_coherent;
  }
 }





 VAR_18 = FUNC_20(VAR_13->rvq);


 FUNC_14(VAR_9);






 if (VAR_18)
  FUNC_21(VAR_13->rvq);

 FUNC_4(&VAR_9->dev, "rpmsg host is online\n");

 return 0;

free_coherent:
 FUNC_6(VAR_9->dev.parent, VAR_17,
     VAR_14, VAR_13->bufs_dma);
vqs_del:
 VAR_9->config->del_vqs(VAR_13->vdev);
free_vrp:
 FUNC_9(VAR_13);
 return VAR_15;
}

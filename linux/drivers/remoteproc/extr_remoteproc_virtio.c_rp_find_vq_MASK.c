
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {struct rproc_vring* priv; } ;
struct virtio_device {int dummy; } ;
struct rproc_vring {int len; struct virtqueue* vq; int align; int notifyid; } ;
struct rproc_vdev {int rsc_offset; struct rproc_vring* vring; int index; } ;
struct rproc_mem_entry {int da; void* va; } ;
struct device {int dummy; } ;
struct rproc {scalar_t__ table_ptr; struct device dev; } ;
struct fw_rsc_vdev {TYPE_1__* vring; } ;
struct TYPE_2__ {int da; } ;


 unsigned int FUNC_0 (struct rproc_vring*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct virtqueue* FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,unsigned int,void*,int,int ) ;
 int FUNC_3 (struct device*,char*,char const*) ;
 int FUNC_4 (void*,int ,int) ;
 struct rproc_mem_entry* FUNC_5 (struct rproc*,char*,int ,unsigned int) ;
 int FUNC_6 (struct rproc_vring*) ;
 int VAR_2 ;
 struct rproc* FUNC_7 (struct virtio_device*) ;
 struct rproc_vdev* FUNC_8 (struct virtio_device*) ;
 struct virtqueue* FUNC_9 (unsigned int,int,int ,struct virtio_device*,int,int,void*,int ,void (*) (struct virtqueue*),char const*) ;
 int FUNC_10 (int,int ) ;

__attribute__((used)) static struct virtqueue *FUNC_11(struct virtio_device *VAR_3,
        unsigned int VAR_4,
        void (*VAR_5)(struct virtqueue *VAR_6),
        const char *VAR_7, bool VAR_8)
{
 struct rproc_vdev *VAR_9 = FUNC_8(VAR_3);
 struct rproc *VAR_10 = FUNC_7(VAR_3);
 struct device *VAR_11 = &VAR_10->dev;
 struct rproc_mem_entry *VAR_12;
 struct rproc_vring *VAR_13;
 struct fw_rsc_vdev *VAR_14;
 struct virtqueue *VAR_15;
 void *VAR_16;
 int VAR_17, VAR_18;


 if (VAR_4 >= FUNC_0(VAR_9->vring))
  return FUNC_1(-VAR_0);

 if (!VAR_7)
  return ((void*)0);


 VAR_12 = FUNC_5(VAR_10, "vdev%dvring%d", VAR_9->index,
       VAR_4);
 if (!VAR_12 || !VAR_12->va)
  return FUNC_1(-VAR_1);

 VAR_13 = &VAR_9->vring[VAR_4];
 VAR_16 = VAR_12->va;
 VAR_17 = VAR_13->len;


 VAR_18 = FUNC_10(VAR_17, VAR_13->align);
 FUNC_4(VAR_16, 0, VAR_18);

 FUNC_2(VAR_11, "vring%d: va %pK qsz %d notifyid %d\n",
  VAR_4, VAR_16, VAR_17, VAR_13->notifyid);





 VAR_15 = FUNC_9(VAR_4, VAR_17, VAR_13->align, VAR_3, 0, VAR_8,
     VAR_16, VAR_2, VAR_5, VAR_7);
 if (!VAR_15) {
  FUNC_3(VAR_11, "vring_new_virtqueue %s failed\n", VAR_7);
  FUNC_6(VAR_13);
  return FUNC_1(-VAR_1);
 }

 VAR_13->vq = VAR_15;
 VAR_15->priv = VAR_13;


 VAR_14 = (void *)VAR_10->table_ptr + VAR_9->rsc_offset;
 VAR_14->vring[VAR_4].da = VAR_12->da;

 return VAR_15;
}

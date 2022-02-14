
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int release; struct device* parent; } ;
struct TYPE_7__ {int device; } ;
struct virtio_device {TYPE_3__ dev; int * config; TYPE_2__ id; } ;
struct device {int dummy; } ;
struct rproc_vdev {int refcount; int index; struct device dev; struct rproc* rproc; } ;
struct rproc_mem_entry {int of_resm_idx; int len; int da; scalar_t__ dma; scalar_t__ va; } ;
struct TYPE_9__ {TYPE_1__* parent; } ;
struct rproc {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_6__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int ,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *) ;
 struct virtio_device* FUNC_7 (int,int ) ;
 int FUNC_8 (struct device*,struct device_node*,int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (struct virtio_device*) ;
 struct rproc_mem_entry* FUNC_11 (struct rproc*,char*,int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_13(struct rproc_vdev *VAR_4, int VAR_5)
{
 struct rproc *VAR_6 = VAR_4->rproc;
 struct device *VAR_7 = &VAR_4->dev;
 struct virtio_device *VAR_8;
 struct rproc_mem_entry *VAR_9;
 int VAR_10;


 VAR_9 = FUNC_11(VAR_6, "vdev%dbuffer", VAR_4->index);
 if (VAR_9) {
  phys_addr_t VAR_11;

  if (VAR_9->of_resm_idx != -1) {
   struct device_node *VAR_12 = VAR_6->dev.parent->of_node;


   VAR_10 = FUNC_8(VAR_7, VAR_12,
         VAR_9->of_resm_idx);
   if (VAR_10) {
    FUNC_0(VAR_7, "Can't associate reserved memory\n");
    goto out;
   }
  } else {
   if (VAR_9->va) {
    FUNC_3(VAR_7, "vdev %d buffer already mapped\n",
      VAR_4->index);
    VAR_11 = FUNC_12(VAR_9->va);
   } else {

    VAR_11 = (phys_addr_t)VAR_9->dma;
   }


   VAR_10 = FUNC_4(VAR_7, VAR_11,
          VAR_9->da,
          VAR_9->len);
   if (VAR_10 < 0) {
    FUNC_0(VAR_7, "Failed to associate buffer\n");
    goto out;
   }
  }
 }


 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  VAR_10 = -VAR_0;
  goto out;
 }
 VAR_8->id.device = VAR_5,
 VAR_8->config = &VAR_2,
 VAR_8->dev.parent = VAR_7;
 VAR_8->dev.release = VAR_3;
 FUNC_5(&VAR_6->dev);


 FUNC_6(&VAR_4->refcount);

 VAR_10 = FUNC_10(VAR_8);
 if (VAR_10) {
  FUNC_9(&VAR_8->dev);
  FUNC_0(VAR_7, "failed to register vdev: %d\n", VAR_10);
  goto out;
 }

 FUNC_1(VAR_7, "registered %s (type %d)\n", FUNC_2(&VAR_8->dev), VAR_5);

out:
 return VAR_10;
}

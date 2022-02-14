
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* parent; int release; int dma_pfn_offset; } ;
struct TYPE_13__ {int stop; int start; } ;
struct rproc_vdev {int index; int rsc_offset; TYPE_1__ dev; int * vring; TYPE_2__ subdev; int node; struct rproc* rproc; int id; int refcount; } ;
struct device {TYPE_4__* parent; } ;
struct rproc {int rvdevs; struct device dev; int nb_vdev; } ;
struct fw_rsc_vdev_vring {int dummy; } ;
struct fw_rsc_vdev {int num_of_vrings; int id; int config_len; int dfeatures; scalar_t__* reserved; } ;
typedef int name ;
struct TYPE_14__ {int dma_pfn_offset; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,int ,int ,int ,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_1__*,struct rproc_vdev*) ;
 int FUNC_5 (TYPE_1__*,char*,int ,char*) ;
 int FUNC_6 (struct device*,char*,int ,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int *) ;
 struct rproc_vdev* FUNC_13 (int,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (struct rproc*,TYPE_2__*) ;
 int FUNC_17 (struct rproc_vdev*,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct rproc_vdev*,struct fw_rsc_vdev*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_20 (TYPE_1__*,int ) ;
 int FUNC_21 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_22(struct rproc *VAR_6, struct fw_rsc_vdev *VAR_7,
        int VAR_8, int VAR_9)
{
 struct device *VAR_10 = &VAR_6->dev;
 struct rproc_vdev *VAR_11;
 int VAR_12, VAR_13;
 char VAR_14[16];


 if (sizeof(*VAR_7) + VAR_7->num_of_vrings * sizeof(struct fw_rsc_vdev_vring)
   + VAR_7->config_len > VAR_9) {
  FUNC_2(VAR_10, "vdev rsc is truncated\n");
  return -VAR_0;
 }


 if (VAR_7->reserved[0] || VAR_7->reserved[1]) {
  FUNC_2(VAR_10, "vdev rsc has non zero reserved bytes\n");
  return -VAR_0;
 }

 FUNC_1(VAR_10, "vdev rsc: id %d, dfeatures 0x%x, cfg len %d, %d vrings\n",
  VAR_7->id, VAR_7->dfeatures, VAR_7->config_len, VAR_7->num_of_vrings);


 if (VAR_7->num_of_vrings > FUNC_0(VAR_11->vring)) {
  FUNC_2(VAR_10, "too many vrings: %d\n", VAR_7->num_of_vrings);
  return -VAR_0;
 }

 VAR_11 = FUNC_13(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 FUNC_12(&VAR_11->refcount);

 VAR_11->id = VAR_7->id;
 VAR_11->rproc = VAR_6;
 VAR_11->index = VAR_6->nb_vdev++;


 FUNC_21(VAR_14, sizeof(VAR_14), "vdev%dbuffer", VAR_11->index);
 VAR_11->dev.parent = VAR_6->dev.parent;
 VAR_11->dev.dma_pfn_offset = VAR_6->dev.parent->dma_pfn_offset;
 VAR_11->dev.release = VAR_3;
 FUNC_5(&VAR_11->dev, "%s#%s", FUNC_3(VAR_11->dev.parent), VAR_14);
 FUNC_4(&VAR_11->dev, VAR_11);

 VAR_13 = FUNC_7(&VAR_11->dev);
 if (VAR_13) {
  FUNC_15(&VAR_11->dev);
  return VAR_13;
 }

 FUNC_20(&VAR_11->dev, FUNC_11(VAR_6->dev.parent));

 VAR_13 = FUNC_9(&VAR_11->dev,
        FUNC_10(VAR_6->dev.parent));
 if (VAR_13) {
  FUNC_6(VAR_10,
    "Failed to set DMA mask %llx. Trying to continue... %x\n",
    FUNC_10(VAR_6->dev.parent), VAR_13);
 }


 for (VAR_12 = 0; VAR_12 < VAR_7->num_of_vrings; VAR_12++) {
  VAR_13 = FUNC_19(VAR_11, VAR_7, VAR_12);
  if (VAR_13)
   goto free_rvdev;
 }


 VAR_11->rsc_offset = VAR_8;


 for (VAR_12 = 0; VAR_12 < VAR_7->num_of_vrings; VAR_12++) {
  VAR_13 = FUNC_17(VAR_11, VAR_12);
  if (VAR_13)
   goto unwind_vring_allocations;
 }

 FUNC_14(&VAR_11->node, &VAR_6->rvdevs);

 VAR_11->subdev.start = VAR_4;
 VAR_11->subdev.stop = VAR_5;

 FUNC_16(VAR_6, &VAR_11->subdev);

 return 0;

unwind_vring_allocations:
 for (VAR_12--; VAR_12 >= 0; VAR_12--)
  FUNC_18(&VAR_11->vring[VAR_12]);
free_rvdev:
 FUNC_8(&VAR_11->dev);
 return VAR_13;
}

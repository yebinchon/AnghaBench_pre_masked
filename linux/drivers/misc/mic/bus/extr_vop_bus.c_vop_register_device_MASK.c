
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u8 ;
struct vop_hw_ops {int dummy; } ;
struct TYPE_7__ {int * bus; int release; int coherent_dma_mask; int * dma_mask; struct dma_map_ops const* dma_ops; struct device* parent; } ;
struct TYPE_6__ {int device; int vendor; } ;
struct vop_device {TYPE_2__ dev; void* index; struct dma_chan* dma_ch; struct mic_mw* aper; void* dnode; struct vop_hw_ops* hw_ops; TYPE_1__ id; } ;
struct mic_mw {int dummy; } ;
struct dma_map_ops {int dummy; } ;
struct dma_chan {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct vop_device* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,char*,void*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 struct vop_device* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;

struct vop_device *
FUNC_7(struct device *VAR_5, int VAR_6,
      const struct dma_map_ops *VAR_7,
      struct vop_hw_ops *VAR_8, u8 VAR_9, struct mic_mw *VAR_10,
      struct dma_chan *VAR_11)
{
 int VAR_12;
 struct vop_device *VAR_13;

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return FUNC_1(-VAR_0);

 VAR_13->dev.parent = VAR_5;
 VAR_13->id.device = VAR_6;
 VAR_13->id.vendor = VAR_2;
 VAR_13->dev.dma_ops = VAR_7;
 VAR_13->dev.dma_mask = &VAR_13->dev.coherent_dma_mask;
 FUNC_4(&VAR_13->dev, FUNC_0(64));
 VAR_13->dev.release = VAR_4;
 VAR_13->hw_ops = VAR_8;
 VAR_13->dev.bus = &VAR_3;
 VAR_13->dnode = VAR_9;
 VAR_13->aper = VAR_10;
 VAR_13->dma_ch = VAR_11;
 VAR_13->index = VAR_9 - 1;
 FUNC_2(&VAR_13->dev, "vop-dev%u", VAR_13->index);




 VAR_12 = FUNC_3(&VAR_13->dev);
 if (VAR_12)
  goto free_vdev;
 return VAR_13;
free_vdev:
 FUNC_6(&VAR_13->dev);
 return FUNC_1(VAR_12);
}

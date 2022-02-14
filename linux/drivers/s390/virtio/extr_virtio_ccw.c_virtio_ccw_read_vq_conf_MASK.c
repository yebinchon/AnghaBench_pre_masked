
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vq_config_block {int dummy; } ;
struct virtio_ccw_device {TYPE_2__* dma_area; } ;
struct ccw1 {int count; scalar_t__ cda; scalar_t__ flags; int cmd_code; } ;
typedef scalar_t__ __u32 ;
struct TYPE_3__ {int index; scalar_t__ num; } ;
struct TYPE_4__ {TYPE_1__ config_block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct virtio_ccw_device*,struct ccw1*,int ) ;

__attribute__((used)) static int FUNC_1(struct virtio_ccw_device *VAR_3,
       struct ccw1 *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_3->dma_area->config_block.index = VAR_5;
 VAR_4->cmd_code = VAR_0;
 VAR_4->flags = 0;
 VAR_4->count = sizeof(struct vq_config_block);
 VAR_4->cda = (__u32)(unsigned long)(&VAR_3->dma_area->config_block);
 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_2);
 if (VAR_6)
  return VAR_6;
 return VAR_3->dma_area->config_block.num ?: -VAR_1;
}

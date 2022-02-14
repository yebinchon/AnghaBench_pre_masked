
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct virtio_device {int dummy; } ;
struct virtio_ccw_device {int revision; TYPE_1__* dma_area; int cdev; } ;
struct ccw1 {int count; scalar_t__ cda; scalar_t__ flags; int cmd_code; } ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ccw1*,int) ;
 struct ccw1* FUNC_1 (int ,int) ;
 int FUNC_2 (struct virtio_ccw_device*,struct ccw1*,int ) ;
 struct virtio_ccw_device* FUNC_3 (struct virtio_device*) ;

__attribute__((used)) static u8 FUNC_4(struct virtio_device *VAR_2)
{
 struct virtio_ccw_device *VAR_3 = FUNC_3(VAR_2);
 u8 VAR_4 = VAR_3->dma_area->status;
 struct ccw1 *VAR_5;

 if (VAR_3->revision < 1)
  return VAR_3->dma_area->status;

 VAR_5 = FUNC_1(VAR_3->cdev, sizeof(*VAR_5));
 if (!VAR_5)
  return VAR_4;

 VAR_5->cmd_code = VAR_0;
 VAR_5->flags = 0;
 VAR_5->count = sizeof(VAR_3->dma_area->status);
 VAR_5->cda = (__u32)(unsigned long)&VAR_3->dma_area->status;
 FUNC_2(VAR_3, VAR_5, VAR_1);






 FUNC_0(VAR_3->cdev, VAR_5, sizeof(*VAR_5));

 return VAR_3->dma_area->status;
}

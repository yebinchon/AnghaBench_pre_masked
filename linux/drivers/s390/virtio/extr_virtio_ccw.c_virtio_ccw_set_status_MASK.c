
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct virtio_device {int dummy; } ;
struct virtio_ccw_device {int cdev; TYPE_1__* dma_area; } ;
struct ccw1 {int count; scalar_t__ cda; scalar_t__ flags; int cmd_code; } ;
typedef int status ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {void* status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ccw1*,int) ;
 struct ccw1* FUNC_1 (int ,int) ;
 int FUNC_2 (struct virtio_ccw_device*,struct ccw1*,int ) ;
 struct virtio_ccw_device* FUNC_3 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_4(struct virtio_device *VAR_2, u8 VAR_3)
{
 struct virtio_ccw_device *VAR_4 = FUNC_3(VAR_2);
 u8 VAR_5 = VAR_4->dma_area->status;
 struct ccw1 *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_4->cdev, sizeof(*VAR_6));
 if (!VAR_6)
  return;


 VAR_4->dma_area->status = VAR_3;
 VAR_6->cmd_code = VAR_0;
 VAR_6->flags = 0;
 VAR_6->count = sizeof(VAR_3);
 VAR_6->cda = (__u32)(unsigned long)&VAR_4->dma_area->status;
 VAR_7 = FUNC_2(VAR_4, VAR_6, VAR_1);

 if (VAR_7)
  VAR_4->dma_area->status = VAR_5;
 FUNC_0(VAR_4->cdev, VAR_6, sizeof(*VAR_6));
}

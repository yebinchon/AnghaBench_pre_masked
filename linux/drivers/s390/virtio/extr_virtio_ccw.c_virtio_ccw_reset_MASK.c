
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_device {int dummy; } ;
struct virtio_ccw_device {int cdev; TYPE_1__* dma_area; } ;
struct ccw1 {scalar_t__ cda; scalar_t__ count; scalar_t__ flags; int cmd_code; } ;
struct TYPE_2__ {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ccw1*,int) ;
 struct ccw1* FUNC_1 (int ,int) ;
 int FUNC_2 (struct virtio_ccw_device*,struct ccw1*,int ) ;
 struct virtio_ccw_device* FUNC_3 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_4(struct virtio_device *VAR_2)
{
 struct virtio_ccw_device *VAR_3 = FUNC_3(VAR_2);
 struct ccw1 *VAR_4;

 VAR_4 = FUNC_1(VAR_3->cdev, sizeof(*VAR_4));
 if (!VAR_4)
  return;


 VAR_3->dma_area->status = 0;


 VAR_4->cmd_code = VAR_0;
 VAR_4->flags = 0;
 VAR_4->count = 0;
 VAR_4->cda = 0;
 FUNC_2(VAR_3, VAR_4, VAR_1);
 FUNC_0(VAR_3->cdev, VAR_4, sizeof(*VAR_4));
}

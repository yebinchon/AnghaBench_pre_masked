
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int fpnum; int dma; int * addr; } ;
struct TYPE_5__ {int free_queue; int table_work; int request; } ;
struct TYPE_4__ {int entity; } ;
struct isp_ccdc_device {int ioctl_lock; TYPE_3__ fpc; TYPE_2__ lsc; TYPE_1__ subdev; int video_out; } ;
struct isp_device {int dev; struct isp_ccdc_device isp_ccdc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct isp_ccdc_device*,int *) ;
 int FUNC_2 (struct isp_ccdc_device*,int ) ;
 int FUNC_3 (int ,int,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct isp_device *VAR_0)
{
 struct isp_ccdc_device *VAR_1 = &VAR_0->isp_ccdc;

 FUNC_6(&VAR_1->video_out);
 FUNC_4(&VAR_1->subdev.entity);




 FUNC_2(VAR_1, VAR_1->lsc.request);
 FUNC_0(&VAR_1->lsc.table_work);
 FUNC_1(VAR_1, &VAR_1->lsc.free_queue);

 if (VAR_1->fpc.addr != ((void*)0))
  FUNC_3(VAR_0->dev, VAR_1->fpc.fpnum * 4, VAR_1->fpc.addr,
      VAR_1->fpc.dma);

 FUNC_5(&VAR_1->ioctl_lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {size_t mtu; int phydev; } ;
struct macb_queue {int napi; } ;
struct TYPE_4__ {int (* mog_init_rings ) (struct macb*) ;} ;
struct macb {unsigned int num_queues; TYPE_3__* pdev; TYPE_2__* ptp_info; TYPE_1__ macbgem_ops; struct macb_queue* queues; int dev; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int (* ptp_init ) (struct net_device*) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct macb*) ;
 int FUNC_1 (struct macb*) ;
 int FUNC_2 (struct macb*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct net_device*,char*,int) ;
 struct macb* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct macb*) ;
 int FUNC_13 (struct net_device*) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_4)
{
 struct macb *VAR_5 = FUNC_6(VAR_4);
 size_t VAR_6 = VAR_4->mtu + VAR_2 + VAR_1 + VAR_3;
 struct macb_queue *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 FUNC_4(VAR_5->dev, "open\n");

 VAR_9 = FUNC_10(&VAR_5->pdev->dev);
 if (VAR_9 < 0)
  goto pm_exit;


 FUNC_7(VAR_4);


 if (!VAR_4->phydev) {
  VAR_9 = -VAR_0;
  goto pm_exit;
 }


 FUNC_2(VAR_5, VAR_6);

 VAR_9 = FUNC_0(VAR_5);
 if (VAR_9) {
  FUNC_5(VAR_4, "Unable to allocate DMA memory (error %d)\n",
      VAR_9);
  goto pm_exit;
 }

 for (VAR_8 = 0, VAR_7 = VAR_5->queues; VAR_8 < VAR_5->num_queues; ++VAR_8, ++VAR_7)
  FUNC_3(&VAR_7->napi);

 VAR_5->macbgem_ops.mog_init_rings(VAR_5);
 FUNC_1(VAR_5);


 FUNC_9(VAR_4->phydev);

 FUNC_8(VAR_4);

 if (VAR_5->ptp_info)
  VAR_5->ptp_info->ptp_init(VAR_4);

pm_exit:
 if (VAR_9) {
  FUNC_11(&VAR_5->pdev->dev);
  return VAR_9;
 }
 return 0;
}

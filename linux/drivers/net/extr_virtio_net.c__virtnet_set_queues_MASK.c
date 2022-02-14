
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct virtnet_info {int refill; int curr_queue_pairs; TYPE_1__* ctrl; int vdev; int has_cvq; struct net_device* dev; } ;
struct scatterlist {int dummy; } ;
struct net_device {int flags; int dev; } ;
struct TYPE_4__ {int virtqueue_pairs; } ;
struct TYPE_3__ {TYPE_2__ mq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct scatterlist*,TYPE_2__*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct virtnet_info*,int ,int ,struct scatterlist*) ;

__attribute__((used)) static int FUNC_6(struct virtnet_info *VAR_5, u16 VAR_6)
{
 struct scatterlist VAR_7;
 struct net_device *VAR_8 = VAR_5->dev;

 if (!VAR_5->has_cvq || !FUNC_4(VAR_5->vdev, VAR_4))
  return 0;

 VAR_5->ctrl->mq.virtqueue_pairs = FUNC_0(VAR_5->vdev, VAR_6);
 FUNC_3(&VAR_7, &VAR_5->ctrl->mq, sizeof(VAR_5->ctrl->mq));

 if (!FUNC_5(VAR_5, VAR_2,
      VAR_3, &VAR_7)) {
  FUNC_1(&VAR_8->dev, "Fail to set num of queue pairs to %d\n",
    VAR_6);
  return -VAR_0;
 } else {
  VAR_5->curr_queue_pairs = VAR_6;

  if (VAR_8->flags & VAR_1)
   FUNC_2(&VAR_5->refill, 0);
 }

 return 0;
}

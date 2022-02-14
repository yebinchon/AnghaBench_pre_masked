
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct virtnet_info {TYPE_2__* dev; TYPE_1__* ctrl; int vdev; } ;
struct scatterlist {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int offloads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct scatterlist*,int *,int) ;
 int FUNC_3 (struct virtnet_info*,int ,int ,struct scatterlist*) ;

__attribute__((used)) static int FUNC_4(struct virtnet_info *VAR_3, u64 VAR_4)
{
 struct scatterlist VAR_5;
 VAR_3->ctrl->offloads = FUNC_0(VAR_3->vdev, VAR_4);

 FUNC_2(&VAR_5, &VAR_3->ctrl->offloads, sizeof(VAR_3->ctrl->offloads));

 if (!FUNC_3(VAR_3, VAR_1,
      VAR_2, &VAR_5)) {
  FUNC_1(&VAR_3->dev->dev, "Fail to set guest offload.\n");
  return -VAR_0;
 }

 return 0;
}

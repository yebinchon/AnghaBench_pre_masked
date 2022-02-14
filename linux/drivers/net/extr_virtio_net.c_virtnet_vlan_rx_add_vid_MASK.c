
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct virtnet_info {TYPE_1__* ctrl; int vdev; } ;
struct scatterlist {int dummy; } ;
struct net_device {int dev; } ;
typedef int __be16 ;
struct TYPE_2__ {int vid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 struct virtnet_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct scatterlist*,int *,int) ;
 int FUNC_4 (struct virtnet_info*,int ,int ,struct scatterlist*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
       __be16 VAR_3, u16 VAR_4)
{
 struct virtnet_info *VAR_5 = FUNC_2(VAR_2);
 struct scatterlist VAR_6;

 VAR_5->ctrl->vid = FUNC_0(VAR_5->vdev, VAR_4);
 FUNC_3(&VAR_6, &VAR_5->ctrl->vid, sizeof(VAR_5->ctrl->vid));

 if (!FUNC_4(VAR_5, VAR_0,
      VAR_1, &VAR_6))
  FUNC_1(&VAR_2->dev, "Failed to add VLAN ID %d.\n", VAR_4);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtproc_info {TYPE_2__* vdev; } ;
struct TYPE_6__ {int release; struct device* parent; } ;
struct TYPE_4__ {int name; } ;
struct rpmsg_device {scalar_t__ src; int announce; TYPE_3__ dev; TYPE_1__ id; int * ops; int dst; } ;
struct virtio_rpmsg_channel {struct rpmsg_device rpdev; struct virtproc_info* vrp; } ;
struct rpmsg_channel_info {scalar_t__ src; int name; int dst; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int ,scalar_t__,int ) ;
 struct virtio_rpmsg_channel* FUNC_1 (int,int ) ;
 int FUNC_2 (struct device*) ;
 struct device* FUNC_3 (struct device*,struct rpmsg_channel_info*) ;
 int FUNC_4 (struct rpmsg_device*) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct rpmsg_device *FUNC_6(struct virtproc_info *VAR_5,
       struct rpmsg_channel_info *VAR_6)
{
 struct virtio_rpmsg_channel *VAR_7;
 struct rpmsg_device *VAR_8;
 struct device *VAR_9, *VAR_10 = &VAR_5->vdev->dev;
 int VAR_11;


 VAR_9 = FUNC_3(VAR_10, VAR_6);
 if (VAR_9) {

  FUNC_2(VAR_9);
  FUNC_0(VAR_10, "channel %s:%x:%x already exist\n",
    VAR_6->name, VAR_6->src, VAR_6->dst);
  return ((void*)0);
 }

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);


 VAR_7->vrp = VAR_5;


 VAR_8 = &VAR_7->rpdev;
 VAR_8->src = VAR_6->src;
 VAR_8->dst = VAR_6->dst;
 VAR_8->ops = &VAR_3;





 VAR_8->announce = VAR_8->src != VAR_1;

 FUNC_5(VAR_8->id.name, VAR_6->name, VAR_2);

 VAR_8->dev.parent = &VAR_5->vdev->dev;
 VAR_8->dev.release = VAR_4;
 VAR_11 = FUNC_4(VAR_8);
 if (VAR_11)
  return ((void*)0);

 return VAR_8;
}

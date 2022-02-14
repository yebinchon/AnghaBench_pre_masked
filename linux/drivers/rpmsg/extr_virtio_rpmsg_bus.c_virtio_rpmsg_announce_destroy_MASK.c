
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtproc_info {int vdev; } ;
struct virtio_rpmsg_channel {struct virtproc_info* vrp; } ;
struct rpmsg_ns_msg {int flags; int addr; int name; } ;
struct TYPE_3__ {int name; } ;
struct device {int dummy; } ;
struct rpmsg_device {TYPE_2__* ept; TYPE_1__ id; scalar_t__ announce; struct device dev; } ;
typedef int nsm ;
struct TYPE_4__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (TYPE_2__*,struct rpmsg_ns_msg*,int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct virtio_rpmsg_channel* FUNC_3 (struct rpmsg_device*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct rpmsg_device *VAR_4)
{
 struct virtio_rpmsg_channel *VAR_5 = FUNC_3(VAR_4);
 struct virtproc_info *VAR_6 = VAR_5->vrp;
 struct device *VAR_7 = &VAR_4->dev;
 int VAR_8 = 0;


 if (VAR_4->announce && VAR_4->ept &&
     FUNC_4(VAR_6->vdev, VAR_3)) {
  struct rpmsg_ns_msg VAR_9;

  FUNC_2(VAR_9.name, VAR_4->id.name, VAR_0);
  VAR_9.addr = VAR_4->ept->addr;
  VAR_9.flags = VAR_2;

  VAR_8 = FUNC_1(VAR_4->ept, &VAR_9, sizeof(VAR_9), VAR_1);
  if (VAR_8)
   FUNC_0(VAR_7, "failed to announce service %d\n", VAR_8);
 }

 return VAR_8;
}

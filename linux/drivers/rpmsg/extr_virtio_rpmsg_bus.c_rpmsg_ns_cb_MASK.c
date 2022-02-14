
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct virtproc_info {TYPE_1__* vdev; } ;
struct rpmsg_ns_msg {char* name; int flags; int addr; } ;
struct rpmsg_device {int dummy; } ;
struct rpmsg_channel_info {int dst; int src; int name; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,char*,char*,int ) ;
 int FUNC_2 (char*,int ,int,int,void*,int,int) ;
 struct rpmsg_device* FUNC_3 (struct virtproc_info*,struct rpmsg_channel_info*) ;
 int FUNC_4 (struct device*,struct rpmsg_channel_info*) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int FUNC_6(struct rpmsg_device *VAR_5, void *VAR_6, int VAR_7,
         void *VAR_8, u32 VAR_9)
{
 struct rpmsg_ns_msg *VAR_10 = VAR_6;
 struct rpmsg_device *VAR_11;
 struct rpmsg_channel_info VAR_12;
 struct virtproc_info *VAR_13 = VAR_8;
 struct device *VAR_14 = &VAR_13->vdev->dev;
 int VAR_15;






 if (VAR_7 != sizeof(*VAR_10)) {
  FUNC_0(VAR_14, "malformed ns msg (%d)\n", VAR_7);
  return -VAR_1;
 }







 if (VAR_5) {
  FUNC_0(VAR_14, "anomaly: ns ept has an rpdev handle\n");
  return -VAR_1;
 }


 VAR_10->name[VAR_3 - 1] = '\0';

 FUNC_1(VAR_14, "%sing channel %s addr 0x%x\n",
   VAR_10->flags & VAR_4 ? "destroy" : "creat",
   VAR_10->name, VAR_10->addr);

 FUNC_5(VAR_12.name, VAR_10->name, sizeof(VAR_12.name));
 VAR_12.src = VAR_2;
 VAR_12.dst = VAR_10->addr;

 if (VAR_10->flags & VAR_4) {
  VAR_15 = FUNC_4(&VAR_13->vdev->dev, &VAR_12);
  if (VAR_15)
   FUNC_0(VAR_14, "rpmsg_destroy_channel failed: %d\n", VAR_15);
 } else {
  VAR_11 = FUNC_3(VAR_13, &VAR_12);
  if (!VAR_11)
   FUNC_0(VAR_14, "rpmsg_create_channel failed\n");
 }

 return 0;
}

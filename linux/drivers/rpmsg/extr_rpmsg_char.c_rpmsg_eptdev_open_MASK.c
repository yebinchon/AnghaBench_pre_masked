
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct device {int dummy; } ;
struct rpmsg_eptdev {struct rpmsg_endpoint* ept; TYPE_1__ chinfo; struct device dev; struct rpmsg_device* rpdev; } ;
struct rpmsg_endpoint {int dummy; } ;
struct rpmsg_device {int dummy; } ;
struct inode {int i_cdev; } ;
struct file {struct rpmsg_eptdev* private_data; } ;


 int VAR_0 ;
 struct rpmsg_eptdev* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 struct rpmsg_endpoint* FUNC_4 (struct rpmsg_device*,int ,struct rpmsg_eptdev*,TYPE_1__) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct rpmsg_eptdev *VAR_4 = FUNC_0(VAR_2->i_cdev);
 struct rpmsg_endpoint *VAR_5;
 struct rpmsg_device *VAR_6 = VAR_4->rpdev;
 struct device *VAR_7 = &VAR_4->dev;

 FUNC_2(VAR_7);

 VAR_5 = FUNC_4(VAR_6, VAR_1, VAR_4, VAR_4->chinfo);
 if (!VAR_5) {
  FUNC_1(VAR_7, "failed to open %s\n", VAR_4->chinfo.name);
  FUNC_3(VAR_7);
  return -VAR_0;
 }

 VAR_4->ept = VAR_5;
 VAR_3->private_data = VAR_4;

 return 0;
}

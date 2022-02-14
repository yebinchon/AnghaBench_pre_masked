
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int notifier_call; } ;
struct miscdevice {TYPE_2__ notifier; int wait_event; int events; struct cros_ec_dev* ec_dev; int parent; } ;
struct inode {int dummy; } ;
struct file {struct miscdevice* private_data; } ;
struct cros_ec_dev {int dev; TYPE_1__* ec_dev; } ;
struct chardev_priv {TYPE_2__ notifier; int wait_event; int events; struct cros_ec_dev* ec_dev; int parent; } ;
struct TYPE_3__ {int event_notifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 struct cros_ec_dev* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct miscdevice*) ;
 struct miscdevice* FUNC_6 (int,int ) ;
 int FUNC_7 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_3, struct file *VAR_4)
{
 struct miscdevice *VAR_5 = VAR_4->private_data;
 struct cros_ec_dev *VAR_6 = FUNC_3(VAR_5->parent);
 struct chardev_priv *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->ec_dev = VAR_6;
 VAR_4->private_data = VAR_7;
 FUNC_0(&VAR_7->events);
 FUNC_4(&VAR_7->wait_event);
 FUNC_7(VAR_3, VAR_4);

 VAR_7->notifier.notifier_call = VAR_2;
 VAR_8 = FUNC_1(&VAR_6->ec_dev->event_notifier,
            &VAR_7->notifier);
 if (VAR_8) {
  FUNC_2(VAR_6->dev, "failed to register event notifier\n");
  FUNC_5(VAR_7);
 }

 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct hl_fpriv {int is_control; int taskpid; struct file* filp; struct hl_device* hdev; int dev_node; } ;
struct hl_device {int fpriv_list_lock; int fpriv_list; int dev_ctrl; } ;
struct file {struct hl_fpriv* private_data; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct hl_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct hl_device* FUNC_4 (int *,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct hl_fpriv*) ;
 struct hl_fpriv* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct inode*,struct file*) ;
 int FUNC_13 (char*,int ,int ) ;

int FUNC_14(struct inode *VAR_7, struct file *VAR_8)
{
 struct hl_device *VAR_9;
 struct hl_fpriv *VAR_10;
 int VAR_11;

 FUNC_10(&VAR_6);
 VAR_9 = FUNC_4(&VAR_5, FUNC_6(VAR_7));
 FUNC_11(&VAR_6);

 if (!VAR_9) {
  FUNC_13("Couldn't find device %d:%d\n",
   FUNC_5(VAR_7), FUNC_6(VAR_7));
  return -VAR_1;
 }

 VAR_10 = FUNC_8(sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_0;

 FUNC_10(&VAR_9->fpriv_list_lock);

 if (FUNC_3(VAR_9)) {
  FUNC_0(VAR_9->dev_ctrl,
   "Can't open %s because it is disabled or in reset\n",
   FUNC_1(VAR_9->dev_ctrl));
  VAR_11 = -VAR_2;
  goto out_err;
 }

 FUNC_9(&VAR_10->dev_node, &VAR_9->fpriv_list);
 FUNC_11(&VAR_9->fpriv_list_lock);

 VAR_10->hdev = VAR_9;
 VAR_8->private_data = VAR_10;
 VAR_10->filp = VAR_8;
 VAR_10->is_control = 1;
 FUNC_12(VAR_7, VAR_8);

 VAR_10->taskpid = FUNC_2(VAR_4->pid);

 return 0;

out_err:
 FUNC_11(&VAR_9->fpriv_list_lock);
 FUNC_7(VAR_10);
 return VAR_11;
}

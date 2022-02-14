
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct hl_fpriv {int taskpid; int restore_phase_mutex; int ctx_mgr; struct hl_device* hdev; int cb_mgr; int dev_node; int refcount; struct file* filp; } ;
struct hl_device {int fpriv_list_lock; int fpriv_list; int dev; scalar_t__ compute_ctx; scalar_t__ in_debug; } ;
struct file {struct hl_fpriv* private_data; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hl_device*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct hl_device*,struct hl_fpriv*) ;
 int FUNC_8 (struct hl_device*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct hl_fpriv*) ;
 scalar_t__ FUNC_11 (struct hl_device*) ;
 int FUNC_12 (struct hl_device*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 struct hl_device* FUNC_13 (int *,int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct hl_fpriv*) ;
 int FUNC_17 (int *) ;
 struct hl_fpriv* FUNC_18 (int,int ) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct inode*,struct file*) ;
 int FUNC_25 (char*,int ,int ) ;
 int FUNC_26 (int ) ;

int FUNC_27(struct inode *VAR_9, struct file *VAR_10)
{
 struct hl_device *VAR_11;
 struct hl_fpriv *VAR_12;
 int VAR_13;

 FUNC_22(&VAR_8);
 VAR_11 = FUNC_13(&VAR_7, FUNC_15(VAR_9));
 FUNC_23(&VAR_8);

 if (!VAR_11) {
  FUNC_25("Couldn't find device %d:%d\n",
   FUNC_14(VAR_9), FUNC_15(VAR_9));
  return -VAR_2;
 }

 VAR_12 = FUNC_18(sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->hdev = VAR_11;
 VAR_10->private_data = VAR_12;
 VAR_12->filp = VAR_10;
 FUNC_21(&VAR_12->restore_phase_mutex);
 FUNC_17(&VAR_12->refcount);
 FUNC_24(VAR_9, VAR_10);

 FUNC_6(&VAR_12->cb_mgr);
 FUNC_9(&VAR_12->ctx_mgr);

 VAR_12->taskpid = FUNC_4(VAR_6->pid);

 FUNC_22(&VAR_11->fpriv_list_lock);

 if (FUNC_11(VAR_11)) {
  FUNC_2(VAR_11->dev,
   "Can't open %s because it is disabled or in reset\n",
   FUNC_3(VAR_11->dev));
  VAR_13 = -VAR_3;
  goto out_err;
 }

 if (VAR_11->in_debug) {
  FUNC_2(VAR_11->dev,
   "Can't open %s because it is being debugged by another user\n",
   FUNC_3(VAR_11->dev));
  VAR_13 = -VAR_3;
  goto out_err;
 }

 if (VAR_11->compute_ctx) {
  FUNC_0(VAR_11->dev,
   "Can't open %s because another user is working on it\n",
   FUNC_3(VAR_11->dev));
  VAR_13 = -VAR_0;
  goto out_err;
 }

 VAR_13 = FUNC_7(VAR_11, VAR_12);
 if (VAR_13) {
  FUNC_1(VAR_11->dev, "Failed to create context %d\n", VAR_13);
  goto out_err;
 }






 FUNC_12(VAR_11, VAR_5);

 FUNC_19(&VAR_12->dev_node, &VAR_11->fpriv_list);
 FUNC_23(&VAR_11->fpriv_list_lock);

 FUNC_10(VAR_12);

 return 0;

out_err:
 FUNC_23(&VAR_11->fpriv_list_lock);

 FUNC_5(VAR_12->hdev, &VAR_12->cb_mgr);
 FUNC_8(VAR_12->hdev, &VAR_12->ctx_mgr);
 VAR_10->private_data = ((void*)0);
 FUNC_20(&VAR_12->restore_phase_mutex);
 FUNC_26(VAR_12->taskpid);

 FUNC_16(VAR_12);
 return VAR_13;
}

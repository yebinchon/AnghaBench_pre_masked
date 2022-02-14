
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct mq_attr {int dummy; } ;
struct ipc_namespace {scalar_t__ mq_queues_count; scalar_t__ mq_queues_max; } ;
struct inode {int i_atime; int i_mtime; int i_ctime; int i_size; int i_sb; } ;
struct dentry {TYPE_1__* d_parent; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct ipc_namespace* FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct dentry*) ;
 int VAR_4 ;
 struct inode* FUNC_7 (int ,struct ipc_namespace*,int ,struct mq_attr*) ;
 int FUNC_8 (struct ipc_namespace*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct dentry *VAR_5, umode_t VAR_6, void *VAR_7)
{
 struct inode *VAR_8 = VAR_5->d_parent->d_inode;
 struct inode *VAR_9;
 struct mq_attr *VAR_10 = VAR_7;
 int VAR_11;
 struct ipc_namespace *VAR_12;

 FUNC_9(&VAR_4);
 VAR_12 = FUNC_2(VAR_8);
 if (!VAR_12) {
  VAR_11 = -VAR_2;
  goto out_unlock;
 }

 if (VAR_12->mq_queues_count >= VAR_12->mq_queues_max &&
     !FUNC_3(VAR_0)) {
  VAR_11 = -VAR_3;
  goto out_unlock;
 }
 VAR_12->mq_queues_count++;
 FUNC_10(&VAR_4);

 VAR_9 = FUNC_7(VAR_8->i_sb, VAR_12, VAR_6, VAR_10);
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_1(VAR_9);
  FUNC_9(&VAR_4);
  VAR_12->mq_queues_count--;
  goto out_unlock;
 }

 FUNC_8(VAR_12);
 VAR_8->i_size += VAR_1;
 VAR_8->i_ctime = VAR_8->i_mtime = VAR_8->i_atime = FUNC_4(VAR_8);

 FUNC_5(VAR_5, VAR_9);
 FUNC_6(VAR_5);
 return 0;
out_unlock:
 FUNC_10(&VAR_4);
 if (VAR_12)
  FUNC_8(VAR_12);
 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int i_lock; int i_state; TYPE_1__* i_op; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int (* tmpfile ) (struct inode*,struct dentry*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dentry* FUNC_1 (struct dentry*,int *) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int) ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,struct dentry*,int ) ;
 scalar_t__ FUNC_8 (int) ;

struct dentry *FUNC_9(struct dentry *VAR_8, umode_t VAR_9, int VAR_10)
{
 struct dentry *VAR_11 = ((void*)0);
 struct inode *VAR_12 = VAR_8->d_inode;
 struct inode *VAR_13;
 int VAR_14;


 VAR_14 = FUNC_4(VAR_12, VAR_5 | VAR_4);
 if (VAR_14)
  goto out_err;
 VAR_14 = -VAR_2;
 if (!VAR_12->i_op->tmpfile)
  goto out_err;
 VAR_14 = -VAR_1;
 VAR_11 = FUNC_1(VAR_8, &VAR_7);
 if (FUNC_8(!VAR_11))
  goto out_err;
 VAR_14 = VAR_12->i_op->tmpfile(VAR_12, VAR_11, VAR_9);
 if (VAR_14)
  goto out_err;
 VAR_14 = -VAR_0;
 VAR_13 = VAR_11->d_inode;
 if (FUNC_8(!VAR_13))
  goto out_err;
 if (!(VAR_10 & VAR_6)) {
  FUNC_5(&VAR_13->i_lock);
  VAR_13->i_state |= VAR_3;
  FUNC_6(&VAR_13->i_lock);
 }
 FUNC_3(VAR_13);
 return VAR_11;

out_err:
 FUNC_2(VAR_11);
 return FUNC_0(VAR_14);
}

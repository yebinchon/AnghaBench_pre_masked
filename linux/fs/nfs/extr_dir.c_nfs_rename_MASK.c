
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {int tk_status; scalar_t__ tk_calldata; } ;
struct nfs_renamedata {int cancelled; } ;
struct inode {int i_lock; int i_mode; } ;
struct dentry {int d_name; int d_parent; } ;
struct TYPE_2__ {int cache_validity; int attr_gencount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct rpc_task*) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 struct dentry* FUNC_4 (int ,int *) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 struct inode* FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*,struct dentry*) ;
 int FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (int ,char*,struct dentry*,struct dentry*,int) ;
 int FUNC_12 (struct dentry*) ;
 struct rpc_task* FUNC_13 (struct inode*,struct inode*,struct dentry*,struct dentry*,int *) ;
 int FUNC_14 (struct dentry*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 () ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct dentry*,int ) ;
 int FUNC_19 (struct inode*,struct dentry*) ;
 int FUNC_20 (struct rpc_task*) ;
 int FUNC_21 (struct rpc_task*) ;
 int FUNC_22 () ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct inode*,struct dentry*,struct inode*,struct dentry*) ;
 int FUNC_26 (struct inode*,struct dentry*,struct inode*,struct dentry*,int) ;

int FUNC_27(struct inode *VAR_7, struct dentry *VAR_8,
        struct inode *VAR_9, struct dentry *VAR_10,
        unsigned int VAR_11)
{
 struct inode *VAR_12 = FUNC_7(VAR_8);
 struct inode *VAR_13 = FUNC_7(VAR_10);
 struct dentry *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 struct rpc_task *VAR_16;
 int VAR_17 = -VAR_0;

 if (VAR_11)
  return -VAR_1;

 FUNC_11(VAR_6, "NFS: rename(%pd2 -> %pd2, ct=%d)\n",
   VAR_8, VAR_10,
   FUNC_5(VAR_10));

 FUNC_25(VAR_7, VAR_8, VAR_9, VAR_10);






 if (VAR_13 && !FUNC_3(VAR_13->i_mode)) {




  if (!FUNC_10(VAR_10)) {
   FUNC_6(VAR_10);
   VAR_15 = VAR_10;
  }

  if (FUNC_5(VAR_10) > 2) {
   int VAR_18;


   VAR_14 = FUNC_4(VAR_10->d_parent,
      &VAR_10->d_name);
   if (!VAR_14)
    goto out;


   VAR_18 = FUNC_19(VAR_9, VAR_10);
   if (VAR_18)
    goto out;

   VAR_10 = VAR_14;
   VAR_15 = ((void*)0);
   VAR_13 = ((void*)0);
  }
 }

 VAR_16 = FUNC_13(VAR_7, VAR_9, VAR_8, VAR_10, ((void*)0));
 if (FUNC_0(VAR_16)) {
  VAR_17 = FUNC_2(VAR_16);
  goto out;
 }

 VAR_17 = FUNC_21(VAR_16);
 if (VAR_17 != 0) {
  ((struct nfs_renamedata *)VAR_16->tk_calldata)->cancelled = 1;

  FUNC_22();
 } else
  VAR_17 = VAR_16->tk_status;
 FUNC_20(VAR_16);

 if (VAR_17 == 0) {
  FUNC_23(&VAR_12->i_lock);
  FUNC_1(VAR_12)->attr_gencount = FUNC_16();
  FUNC_1(VAR_12)->cache_validity |= VAR_3
   | VAR_4
   | VAR_5;
  FUNC_24(&VAR_12->i_lock);
 }
out:
 if (VAR_15)
  FUNC_9(VAR_15);
 FUNC_26(VAR_7, VAR_8,
   VAR_9, VAR_10, VAR_17);
 if (!VAR_17) {
  if (VAR_13 != ((void*)0))
   FUNC_15(VAR_13);






  FUNC_8(VAR_8, VAR_10);
  FUNC_18(VAR_8,
     FUNC_17(VAR_9));
 } else if (VAR_17 == -VAR_2)
  FUNC_14(VAR_8);


 if (VAR_14)
  FUNC_12(VAR_14);
 return VAR_17;
}

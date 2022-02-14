
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ovl_path {TYPE_1__* layer; struct dentry* dentry; } ;
struct ovl_inode_params {int numlower; int redirect; int index; int lowerdata; scalar_t__ newinode; struct ovl_path* lowerpath; struct dentry* upperdentry; } ;
struct inode {int i_nlink; int i_state; unsigned long i_ino; int i_rdev; int i_mode; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int redirect; } ;
struct TYPE_3__ {int fsid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ) ;
 struct inode* FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct dentry*) ;
 scalar_t__ FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct inode*,int ,int ,unsigned long,int) ;
 unsigned int FUNC_11 (struct dentry*,struct dentry*,unsigned int) ;
 int FUNC_12 (struct super_block*,struct dentry*,struct dentry*,int ) ;
 struct inode* FUNC_13 (struct super_block*,scalar_t__,struct inode*) ;
 int FUNC_14 (struct inode*,struct dentry*,struct dentry*,int ) ;
 scalar_t__ FUNC_15 (struct dentry*) ;
 int FUNC_16 (int ,struct inode*) ;
 int FUNC_17 (struct inode*,struct dentry*,struct dentry*,int) ;
 int FUNC_18 (char*,int) ;
 int FUNC_19 (struct inode*,unsigned int) ;
 int FUNC_20 (struct inode*) ;

struct inode *FUNC_21(struct super_block *VAR_9,
       struct ovl_inode_params *VAR_10)
{
 struct dentry *VAR_11 = VAR_10->upperdentry;
 struct ovl_path *VAR_12 = VAR_10->lowerpath;
 struct inode *VAR_13 = VAR_11 ? FUNC_3(VAR_11) : ((void*)0);
 struct inode *VAR_14;
 struct dentry *VAR_15 = VAR_12 ? VAR_12->dentry : ((void*)0);
 bool VAR_16 = FUNC_12(VAR_9, VAR_11, VAR_15,
     VAR_10->index);
 int VAR_17 = VAR_16 ? VAR_10->lowerpath->layer->fsid : 0;
 bool VAR_18, VAR_19 = 0;
 unsigned long VAR_20 = 0;
 int VAR_21 = VAR_10->newinode ? -VAR_0 : -VAR_1;

 if (!VAR_13)
  VAR_13 = FUNC_3(VAR_15);





 VAR_18 = FUNC_2(VAR_13->i_mode);
 if (VAR_11 || VAR_16) {
  struct inode *VAR_22 = FUNC_3(VAR_16 ? VAR_15 :
            VAR_11);
  unsigned int VAR_23 = VAR_18 ? 1 : VAR_13->i_nlink;

  VAR_14 = FUNC_13(VAR_9, VAR_10->newinode, VAR_22);
  if (!VAR_14)
   goto out_err;
  if (!(VAR_14->i_state & VAR_3)) {




   if (!FUNC_17(VAR_14, VAR_15, VAR_11,
           1)) {
    FUNC_5(VAR_14);
    VAR_21 = -VAR_2;
    goto out_err;
   }

   FUNC_4(VAR_11);
   FUNC_6(VAR_10->redirect);
   goto out;
  }


  if (!VAR_18)
   VAR_23 = FUNC_11(VAR_15, VAR_11, VAR_23);
  FUNC_19(VAR_14, VAR_23);
  VAR_20 = VAR_22->i_ino;
 } else {

  VAR_14 = FUNC_7(VAR_9);
  if (!VAR_14) {
   VAR_21 = -VAR_1;
   goto out_err;
  }
 }
 FUNC_10(VAR_14, VAR_13->i_mode, VAR_13->i_rdev, VAR_20, VAR_17);
 FUNC_14(VAR_14, VAR_11, VAR_15, VAR_10->lowerdata);

 if (VAR_11 && FUNC_15(VAR_11))
  FUNC_16(VAR_5, VAR_14);

 if (VAR_10->index)
  FUNC_16(VAR_6, VAR_14);

 if (VAR_11) {
  VAR_21 = FUNC_8(VAR_11);
  if (VAR_21 < 0)
   goto out_err;
  VAR_19 = VAR_21;
  if (!VAR_19)
   FUNC_16(VAR_7, VAR_14);
 }

 FUNC_1(VAR_14)->redirect = VAR_10->redirect;

 if (VAR_16)
  FUNC_16(VAR_4, VAR_14);


 if (VAR_18) {
  if (((VAR_11 && VAR_15) || VAR_10->numlower > 1) ||
      FUNC_9(VAR_11 ?: VAR_15)) {
   FUNC_16(VAR_8, VAR_14);
  }
 }

 if (VAR_14->i_state & VAR_3)
  FUNC_20(VAR_14);
out:
 return VAR_14;

out_err:
 FUNC_18("overlayfs: failed to get inode (%i)\n", VAR_21);
 VAR_14 = FUNC_0(VAR_21);
 goto out;
}

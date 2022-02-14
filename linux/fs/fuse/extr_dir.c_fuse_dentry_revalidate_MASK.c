
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_mode; } ;
struct fuse_inode {int state; int lock; int nlookup; } ;
struct fuse_forget_link {int dummy; } ;
struct TYPE_2__ {int mode; } ;
struct fuse_entry_out {scalar_t__ nodeid; TYPE_1__ attr; } ;
struct fuse_conn {int dummy; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct inode* FUNC_1 (struct dentry*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct fuse_entry_out*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 struct fuse_forget_link* FUNC_8 () ;
 int FUNC_9 (struct inode*,TYPE_1__*,int ,int ) ;
 int FUNC_10 (struct dentry*,struct fuse_entry_out*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct fuse_conn*) ;
 int FUNC_13 (struct fuse_conn*,int *,scalar_t__,int *,struct fuse_entry_out*) ;
 int FUNC_14 (struct fuse_conn*,struct fuse_forget_link*,scalar_t__,int) ;
 int FUNC_15 (struct fuse_conn*,int *) ;
 struct fuse_conn* FUNC_16 (struct inode*) ;
 struct fuse_inode* FUNC_17 (struct inode*) ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 (struct inode*) ;
 scalar_t__ FUNC_20 (struct inode*) ;
 int FUNC_21 (struct fuse_forget_link*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int ,int *) ;
 scalar_t__ FUNC_25 (int ,int *) ;
 scalar_t__ FUNC_26 (int ,int ) ;

__attribute__((used)) static int FUNC_27(struct dentry *VAR_8, unsigned int VAR_9)
{
 struct inode *VAR_10;
 struct dentry *VAR_11;
 struct fuse_conn *VAR_12;
 struct fuse_inode *VAR_13;
 int VAR_14;

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10 && FUNC_20(VAR_10))
  goto invalid;
 else if (FUNC_26(FUNC_11(VAR_8), FUNC_18()) ||
   (VAR_9 & VAR_5)) {
  struct fuse_entry_out VAR_15;
  FUNC_0(VAR_7);
  struct fuse_forget_link *VAR_16;
  u64 VAR_17;


  if (!VAR_10)
   goto invalid;

  VAR_14 = -VAR_0;
  if (VAR_9 & VAR_4)
   goto out;

  VAR_12 = FUNC_16(VAR_10);

  VAR_16 = FUNC_8();
  VAR_14 = -VAR_2;
  if (!VAR_16)
   goto out;

  VAR_17 = FUNC_12(VAR_12);

  VAR_11 = FUNC_3(VAR_8);
  FUNC_13(VAR_12, &VAR_7, FUNC_19(FUNC_1(VAR_11)),
     &VAR_8->d_name, &VAR_15);
  VAR_14 = FUNC_15(VAR_12, &VAR_7);
  FUNC_4(VAR_11);

  if (!VAR_14 && !VAR_15.nodeid)
   VAR_14 = -VAR_1;
  if (!VAR_14) {
   VAR_13 = FUNC_17(VAR_10);
   if (VAR_15.nodeid != FUNC_19(VAR_10)) {
    FUNC_14(VAR_12, VAR_16, VAR_15.nodeid, 1);
    goto invalid;
   }
   FUNC_22(&VAR_13->lock);
   VAR_13->nlookup++;
   FUNC_23(&VAR_13->lock);
  }
  FUNC_21(VAR_16);
  if (VAR_14 == -VAR_2)
   goto out;
  if (VAR_14 || (VAR_15.attr.mode ^ VAR_10->i_mode) & VAR_6)
   goto invalid;

  FUNC_6(VAR_10);
  FUNC_9(VAR_10, &VAR_15.attr,
           FUNC_5(&VAR_15),
           VAR_17);
  FUNC_10(VAR_8, &VAR_15);
 } else if (VAR_10) {
  VAR_13 = FUNC_17(VAR_10);
  if (VAR_9 & VAR_4) {
   if (FUNC_25(VAR_3, &VAR_13->state))
    return -VAR_0;
  } else if (FUNC_24(VAR_3, &VAR_13->state)) {
   VAR_11 = FUNC_3(VAR_8);
   FUNC_7(FUNC_1(VAR_11));
   FUNC_4(VAR_11);
  }
 }
 VAR_14 = 1;
out:
 return VAR_14;

invalid:
 VAR_14 = 0;
 goto out;
}

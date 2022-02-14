
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct qstr {char* name; int len; int hash; } ;
struct inode {int i_mode; int i_sb; } ;
struct fuse_inode {int state; int lock; int nlookup; } ;
struct TYPE_5__ {int mode; } ;
struct fuse_entry_out {scalar_t__ nodeid; TYPE_2__ attr; int generation; } ;
struct fuse_dirent {int namelen; int name; } ;
struct fuse_direntplus {struct fuse_dirent dirent; struct fuse_entry_out entry_out; } ;
struct fuse_conn {scalar_t__ readdirplus_auto; } ;
struct TYPE_4__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 struct qstr FUNC_4 (int ,int ) ;
 int VAR_3 ;
 struct dentry* FUNC_5 (struct dentry*,struct qstr*,int *) ;
 int FUNC_6 (struct dentry*) ;
 struct inode* FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 struct dentry* FUNC_9 (struct dentry*,struct qstr*) ;
 int FUNC_10 (struct dentry*) ;
 struct dentry* FUNC_11 (struct inode*,struct dentry*) ;
 int FUNC_12 (struct dentry*) ;
 int FUNC_13 (struct fuse_entry_out*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct dentry*,char*,int) ;
 int FUNC_16 (struct inode*,TYPE_2__*,int ,int ) ;
 int FUNC_17 (struct dentry*,struct fuse_entry_out*) ;
 struct inode* FUNC_18 (int ,scalar_t__,int ,TYPE_2__*,int ,int ) ;
 int FUNC_19 (int) ;
 struct fuse_conn* FUNC_20 (struct inode*) ;
 struct fuse_inode* FUNC_21 (struct inode*) ;
 scalar_t__ FUNC_22 (struct inode*) ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 scalar_t__ FUNC_24 (struct inode*) ;
 int FUNC_25 (int ,int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_28(struct file *VAR_5,
    struct fuse_direntplus *VAR_6,
    u64 VAR_7)
{
 struct fuse_entry_out *VAR_8 = &VAR_6->entry_out;
 struct fuse_dirent *VAR_9 = &VAR_6->dirent;
 struct dentry *VAR_10 = VAR_5->f_path.dentry;
 struct qstr VAR_11 = FUNC_4(VAR_9->name, VAR_9->namelen);
 struct dentry *VAR_12;
 struct dentry *VAR_13;
 struct inode *VAR_14 = FUNC_7(VAR_10);
 struct fuse_conn *VAR_15;
 struct inode *VAR_16;
 FUNC_0(VAR_4);

 if (!VAR_8->nodeid) {







  return 0;
 }

 if (VAR_11.name[0] == '.') {




  if (VAR_11.len == 1)
   return 0;
  if (VAR_11.name[1] == '.' && VAR_11.len == 2)
   return 0;
 }

 if (FUNC_23(VAR_8->nodeid))
  return -VAR_0;
 if (!FUNC_19(VAR_8->attr.mode))
  return -VAR_0;

 VAR_15 = FUNC_20(VAR_14);

 VAR_11.hash = FUNC_15(VAR_10, VAR_11.name, VAR_11.len);
 VAR_12 = FUNC_9(VAR_10, &VAR_11);
 if (!VAR_12) {
retry:
  VAR_12 = FUNC_5(VAR_10, &VAR_11, &VAR_4);
  if (FUNC_2(VAR_12))
   return FUNC_3(VAR_12);
 }
 if (!FUNC_6(VAR_12)) {
  struct fuse_inode *VAR_17;
  VAR_16 = FUNC_7(VAR_12);
  if (!VAR_16 ||
      FUNC_22(VAR_16) != VAR_8->nodeid ||
      ((VAR_8->attr.mode ^ VAR_16->i_mode) & VAR_3)) {
   FUNC_8(VAR_12);
   FUNC_12(VAR_12);
   goto retry;
  }
  if (FUNC_24(VAR_16)) {
   FUNC_12(VAR_12);
   return -VAR_0;
  }

  VAR_17 = FUNC_21(VAR_16);
  FUNC_26(&VAR_17->lock);
  VAR_17->nlookup++;
  FUNC_27(&VAR_17->lock);

  FUNC_14(VAR_16);
  FUNC_16(VAR_16, &VAR_8->attr,
           FUNC_13(VAR_8),
           VAR_7);




 } else {
  VAR_16 = FUNC_18(VAR_14->i_sb, VAR_8->nodeid, VAR_8->generation,
      &VAR_8->attr, FUNC_13(VAR_8),
      VAR_7);
  if (!VAR_16)
   VAR_16 = FUNC_1(-VAR_1);

  VAR_13 = FUNC_11(VAR_16, VAR_12);
  FUNC_10(VAR_12);
  if (VAR_13) {
   FUNC_12(VAR_12);
   VAR_12 = VAR_13;
  }
  if (FUNC_2(VAR_12))
   return FUNC_3(VAR_12);
 }
 if (VAR_15->readdirplus_auto)
  FUNC_25(VAR_2, &FUNC_21(VAR_16)->state);
 FUNC_17(VAR_12, VAR_8);

 FUNC_12(VAR_12);
 return 0;
}

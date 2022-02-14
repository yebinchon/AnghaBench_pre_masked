
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct name_snapshot {int name; } ;
struct inode {unsigned int i_nlink; TYPE_3__* i_sb; int i_flags; TYPE_1__* i_op; } ;
struct dentry {int d_name; struct inode* d_inode; } ;
struct TYPE_6__ {unsigned int s_max_links; TYPE_2__* s_type; } ;
struct TYPE_5__ {int fs_flags; } ;
struct TYPE_4__ {int (* rename ) (struct inode*,struct dentry*,struct inode*,struct dentry*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dentry*,struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct inode*,struct inode*,int *,int,struct inode*,struct dentry*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct inode*) ;
 scalar_t__ FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct inode*,struct inode*) ;
 int FUNC_13 (struct inode*,struct dentry*) ;
 int FUNC_14 (struct inode*,struct dentry*,int) ;
 int FUNC_15 (struct name_snapshot*) ;
 int FUNC_16 (struct inode*,struct dentry*,struct inode*,struct dentry*,unsigned int) ;
 int FUNC_17 (struct dentry*) ;
 int FUNC_18 (struct inode*,struct dentry*,struct inode*,struct dentry*,unsigned int) ;
 int FUNC_19 (struct name_snapshot*,struct dentry*) ;
 int FUNC_20 (struct inode*,struct inode**) ;
 int FUNC_21 (struct inode*,struct inode*) ;

int FUNC_22(struct inode *VAR_7, struct dentry *VAR_8,
        struct inode *VAR_9, struct dentry *VAR_10,
        struct inode **VAR_11, unsigned int VAR_12)
{
 int VAR_13;
 bool VAR_14 = FUNC_1(VAR_8);
 struct inode *VAR_15 = VAR_8->d_inode;
 struct inode *VAR_16 = VAR_10->d_inode;
 bool VAR_17 = 0;
 unsigned VAR_18 = VAR_9->i_sb->s_max_links;
 struct name_snapshot VAR_19;

 if (VAR_15 == VAR_16)
  return 0;

 VAR_13 = FUNC_14(VAR_7, VAR_8, VAR_14);
 if (VAR_13)
  return VAR_13;

 if (!VAR_16) {
  VAR_13 = FUNC_13(VAR_9, VAR_10);
 } else {
  VAR_17 = FUNC_1(VAR_10);

  if (!(VAR_12 & VAR_5))
   VAR_13 = FUNC_14(VAR_9, VAR_10, VAR_14);
  else
   VAR_13 = FUNC_14(VAR_9, VAR_10, VAR_17);
 }
 if (VAR_13)
  return VAR_13;

 if (!VAR_7->i_op->rename)
  return -VAR_2;





 if (VAR_9 != VAR_7) {
  if (VAR_14) {
   VAR_13 = FUNC_9(VAR_15, VAR_4);
   if (VAR_13)
    return VAR_13;
  }
  if ((VAR_12 & VAR_5) && VAR_17) {
   VAR_13 = FUNC_9(VAR_16, VAR_4);
   if (VAR_13)
    return VAR_13;
  }
 }

 VAR_13 = FUNC_16(VAR_7, VAR_8, VAR_9, VAR_10,
          VAR_12);
 if (VAR_13)
  return VAR_13;

 FUNC_19(&VAR_19, VAR_8);
 FUNC_4(VAR_10);
 if (!VAR_14 || (VAR_12 & VAR_5))
  FUNC_12(VAR_15, VAR_16);
 else if (VAR_16)
  FUNC_8(VAR_16);

 VAR_13 = -VAR_0;
 if (FUNC_11(VAR_8) || FUNC_11(VAR_10))
  goto out;

 if (VAR_18 && VAR_9 != VAR_7) {
  VAR_13 = -VAR_1;
  if (VAR_14 && !VAR_17 && VAR_9->i_nlink >= VAR_18)
   goto out;
  if ((VAR_12 & VAR_5) && !VAR_14 && VAR_17 &&
      VAR_7->i_nlink >= VAR_18)
   goto out;
 }
 if (!VAR_14) {
  VAR_13 = FUNC_20(VAR_15, VAR_11);
  if (VAR_13)
   goto out;
 }
 if (VAR_16 && !VAR_17) {
  VAR_13 = FUNC_20(VAR_16, VAR_11);
  if (VAR_13)
   goto out;
 }
 VAR_13 = VAR_7->i_op->rename(VAR_7, VAR_8,
           VAR_9, VAR_10, VAR_12);
 if (VAR_13)
  goto out;

 if (!(VAR_12 & VAR_5) && VAR_16) {
  if (VAR_14) {
   FUNC_17(VAR_10);
   VAR_16->i_flags |= VAR_6;
  }
  FUNC_5(VAR_10);
  FUNC_3(VAR_10);
 }
 if (!(VAR_7->i_sb->s_type->fs_flags & VAR_3)) {
  if (!(VAR_12 & VAR_5))
   FUNC_2(VAR_8, VAR_10);
  else
   FUNC_0(VAR_8, VAR_10);
 }
out:
 if (!VAR_14 || (VAR_12 & VAR_5))
  FUNC_21(VAR_15, VAR_16);
 else if (VAR_16)
  FUNC_10(VAR_16);
 FUNC_6(VAR_10);
 if (!VAR_13) {
  FUNC_7(VAR_7, VAR_9, &VAR_19.name, VAR_14,
         !(VAR_12 & VAR_5) ? VAR_16 : ((void*)0), VAR_8);
  if (VAR_12 & VAR_5) {
   FUNC_7(VAR_9, VAR_7, &VAR_8->d_name,
          VAR_17, ((void*)0), VAR_10);
  }
 }
 FUNC_15(&VAR_19);

 return VAR_13;
}

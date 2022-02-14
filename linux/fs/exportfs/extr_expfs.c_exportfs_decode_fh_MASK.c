
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {TYPE_1__* mnt_sb; } ;
struct fid {int dummy; } ;
struct export_operations {struct dentry* (* fh_to_parent ) (TYPE_1__*,struct fid*,int,int) ;struct dentry* (* fh_to_dentry ) (TYPE_1__*,struct fid*,int,int) ;} ;
struct dentry {int d_flags; scalar_t__ d_inode; } ;
struct TYPE_3__ {struct export_operations* s_export_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int VAR_4 ;
 int FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct vfsmount*,struct dentry*,char*,struct dentry*) ;
 struct dentry* FUNC_8 (struct dentry*,int (*) (void*,struct dentry*),void*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 struct dentry* FUNC_11 (char*,struct dentry*,int ) ;
 int FUNC_12 (struct vfsmount*,struct dentry*,char*) ;
 int FUNC_13 (char*) ;
 struct dentry* FUNC_14 (TYPE_1__*,struct fid*,int,int) ;
 struct dentry* FUNC_15 (TYPE_1__*,struct fid*,int,int) ;

struct dentry *FUNC_16(struct vfsmount *VAR_5, struct fid *VAR_6,
  int VAR_7, int VAR_8,
  int (*VAR_9)(void *, struct dentry *), void *VAR_10)
{
 const struct export_operations *VAR_11 = VAR_5->mnt_sb->s_export_op;
 struct dentry *VAR_12, *VAR_13;
 char VAR_14[VAR_4+1];
 int VAR_15;




 if (!VAR_11 || !VAR_11->fh_to_dentry)
  return FUNC_1(-VAR_3);
 VAR_12 = VAR_11->fh_to_dentry(VAR_5->mnt_sb, VAR_6, VAR_7, VAR_8);
 if (FUNC_4(VAR_12) == -VAR_2)
  return FUNC_0(VAR_12);
 if (FUNC_3(VAR_12))
  return FUNC_1(-VAR_3);







 if (!VAR_9)
  return VAR_12;

 if (FUNC_5(VAR_12)) {
  if (VAR_12->d_flags & VAR_0) {
   VAR_15 = FUNC_12(VAR_5, VAR_12, VAR_14);
   if (VAR_15)
    goto err_result;
  }

  if (!VAR_9(VAR_10, VAR_12)) {
   VAR_15 = -VAR_1;
   goto err_result;
  }

  return VAR_12;
 } else {



  struct dentry *VAR_16, *VAR_17;
  VAR_13 = FUNC_8(VAR_12, VAR_9, VAR_10);
  if (VAR_13)
   return VAR_13;





  VAR_15 = -VAR_3;
  if (!VAR_11->fh_to_parent)
   goto err_result;

  VAR_16 = VAR_11->fh_to_parent(VAR_5->mnt_sb, VAR_6,
    VAR_7, VAR_8);
  if (!VAR_16)
   goto err_result;
  VAR_15 = FUNC_4(VAR_16);
  if (FUNC_2(VAR_16))
   goto err_result;






  VAR_15 = FUNC_12(VAR_5, VAR_16, VAR_14);
  if (VAR_15) {
   FUNC_6(VAR_16);
   goto err_result;
  }






  VAR_15 = FUNC_7(VAR_5, VAR_16, VAR_14, VAR_12);
  if (!VAR_15) {
   FUNC_9(VAR_16->d_inode);
   VAR_17 = FUNC_11(VAR_14, VAR_16,
       FUNC_13(VAR_14));
   FUNC_10(VAR_16->d_inode);
   if (!FUNC_2(VAR_17)) {
    if (VAR_17->d_inode) {
     FUNC_6(VAR_12);
     VAR_12 = VAR_17;
    } else
     FUNC_6(VAR_17);
   }
  }





  FUNC_6(VAR_16);





  VAR_13 = FUNC_8(VAR_12, VAR_9, VAR_10);
  if (!VAR_13) {
   VAR_15 = -VAR_1;
   goto err_result;
  }

  return VAR_13;
 }

 err_result:
 FUNC_6(VAR_12);
 if (VAR_15 != -VAR_2)
  VAR_15 = -VAR_3;
 return FUNC_1(VAR_15);
}

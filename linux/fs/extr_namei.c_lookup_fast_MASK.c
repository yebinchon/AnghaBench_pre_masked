
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct path {struct dentry* dentry; struct vfsmount* mnt; } ;
struct TYPE_2__ {struct dentry* dentry; struct vfsmount* mnt; } ;
struct nameidata {int flags; int last; int seq; TYPE_1__ path; } ;
struct inode {int dummy; } ;
struct dentry {int d_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (struct dentry*,int *) ;
 struct dentry* FUNC_1 (struct dentry*,int *,unsigned int*) ;
 int FUNC_2 (struct nameidata*,struct path*,struct inode**,unsigned int*) ;
 int FUNC_3 (int *,int ) ;
 struct inode* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*,int) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct path*,struct nameidata*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int *,unsigned int) ;
 scalar_t__ FUNC_12 (struct nameidata*,struct dentry*,unsigned int) ;
 scalar_t__ FUNC_13 (struct nameidata*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct nameidata *VAR_3,
         struct path *VAR_4, struct inode **VAR_5,
         unsigned *VAR_6)
{
 struct vfsmount *VAR_7 = VAR_3->path.mnt;
 struct dentry *VAR_8, *VAR_9 = VAR_3->path.dentry;
 int VAR_10 = 1;
 int VAR_11;






 if (VAR_3->flags & VAR_2) {
  unsigned VAR_12;
  bool VAR_13;
  VAR_8 = FUNC_1(VAR_9, &VAR_3->last, &VAR_12);
  if (FUNC_14(!VAR_8)) {
   if (FUNC_13(VAR_3))
    return -VAR_0;
   return 0;
  }





  *VAR_5 = FUNC_4(VAR_8);
  VAR_13 = FUNC_6(VAR_8);
  if (FUNC_14(FUNC_11(&VAR_8->d_seq, VAR_12)))
   return -VAR_0;
  if (FUNC_14(FUNC_3(&VAR_9->d_seq, VAR_3->seq)))
   return -VAR_0;

  *VAR_6 = VAR_12;
  VAR_10 = FUNC_7(VAR_8, VAR_3->flags);
  if (FUNC_10(VAR_10 > 0)) {




   if (FUNC_14(VAR_13))
    return -VAR_1;
   VAR_4->mnt = VAR_7;
   VAR_4->dentry = VAR_8;
   if (FUNC_10(FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6)))
    return 1;
  }
  if (FUNC_12(VAR_3, VAR_8, VAR_12))
   return -VAR_0;
  if (FUNC_14(VAR_10 == -VAR_0))

   VAR_10 = FUNC_7(VAR_8, VAR_3->flags);
 } else {
  VAR_8 = FUNC_0(VAR_9, &VAR_3->last);
  if (FUNC_14(!VAR_8))
   return 0;
  VAR_10 = FUNC_7(VAR_8, VAR_3->flags);
 }
 if (FUNC_14(VAR_10 <= 0)) {
  if (!VAR_10)
   FUNC_5(VAR_8);
  FUNC_8(VAR_8);
  return VAR_10;
 }
 if (FUNC_14(FUNC_6(VAR_8))) {
  FUNC_8(VAR_8);
  return -VAR_1;
 }

 VAR_4->mnt = VAR_7;
 VAR_4->dentry = VAR_8;
 VAR_11 = FUNC_9(VAR_4, VAR_3);
 if (FUNC_10(VAR_11 > 0))
  *VAR_5 = FUNC_4(VAR_4->dentry);
 return VAR_11;
}

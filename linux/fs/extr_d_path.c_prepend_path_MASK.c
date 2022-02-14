
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {struct dentry* mnt_root; } ;
struct path {struct vfsmount* mnt; struct dentry* dentry; } ;
struct mount {int mnt_ns; struct vfsmount mnt; int mnt_mountpoint; int mnt_parent; } ;
struct dentry {int d_name; struct dentry* d_parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct vfsmount*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (char**,int*,int *) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *,unsigned int*) ;
 struct mount* FUNC_11 (struct vfsmount*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_12(const struct path *VAR_3,
   const struct path *VAR_4,
   char **VAR_5, int *VAR_6)
{
 struct dentry *VAR_7;
 struct vfsmount *VAR_8;
 struct mount *VAR_9;
 int VAR_10 = 0;
 unsigned VAR_11, VAR_12 = 0;
 char *VAR_13;
 int VAR_14;

 FUNC_8();
restart_mnt:
 FUNC_10(&VAR_1, &VAR_12);
 VAR_11 = 0;
 FUNC_8();
restart:
 VAR_13 = *VAR_5;
 VAR_14 = *VAR_6;
 VAR_10 = 0;
 VAR_7 = VAR_3->dentry;
 VAR_8 = VAR_3->mnt;
 VAR_9 = FUNC_11(VAR_8);
 FUNC_10(&VAR_2, &VAR_11);
 while (VAR_7 != VAR_4->dentry || VAR_8 != VAR_4->mnt) {
  struct dentry * VAR_15;

  if (VAR_7 == VAR_8->mnt_root || FUNC_0(VAR_7)) {
   struct mount *VAR_16 = FUNC_1(VAR_9->mnt_parent);

   if (VAR_7 != VAR_8->mnt_root) {
    VAR_13 = *VAR_5;
    VAR_14 = *VAR_6;
    VAR_10 = 3;
    break;
   }

   if (VAR_9 != VAR_16) {
    VAR_7 = FUNC_1(VAR_9->mnt_mountpoint);
    VAR_9 = VAR_16;
    VAR_8 = &VAR_9->mnt;
    continue;
   }
   if (FUNC_4(VAR_8) && !FUNC_3(VAR_9->mnt_ns))
    VAR_10 = 1;
   else
    VAR_10 = 2;
   break;
  }
  VAR_15 = VAR_7->d_parent;
  FUNC_6(VAR_15);
  VAR_10 = FUNC_7(&VAR_13, &VAR_14, &VAR_7->d_name);
  if (VAR_10)
   break;

  VAR_7 = VAR_15;
 }
 if (!(VAR_11 & 1))
  FUNC_9();
 if (FUNC_5(&VAR_2, VAR_11)) {
  VAR_11 = 1;
  goto restart;
 }
 FUNC_2(&VAR_2, VAR_11);

 if (!(VAR_12 & 1))
  FUNC_9();
 if (FUNC_5(&VAR_1, VAR_12)) {
  VAR_12 = 1;
  goto restart_mnt;
 }
 FUNC_2(&VAR_1, VAR_12);

 if (VAR_10 >= 0 && VAR_13 == *VAR_5) {
  if (--VAR_14 < 0)
   VAR_10 = -VAR_0;
  else
   *--VAR_13 = '/';
 }
 *VAR_5 = VAR_13;
 *VAR_6 = VAR_14;
 return VAR_10;
}

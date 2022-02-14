
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct super_block {int dummy; } ;
struct path {int dentry; } ;
struct ovl_fs {scalar_t__ indexdir; int indexdir_trap; struct vfsmount* upper_mnt; } ;
struct ovl_entry {TYPE_1__* lowerstack; } ;
struct TYPE_2__ {int dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vfsmount*) ;
 int FUNC_1 (struct vfsmount*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ovl_fs*) ;
 int FUNC_4 (struct super_block*,scalar_t__,int *,char*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (scalar_t__,int ,int ,int,int) ;
 int FUNC_7 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_8 (struct ovl_fs*,int ,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct super_block *VAR_2, struct ovl_fs *VAR_3,
       struct ovl_entry *VAR_4, struct path *VAR_5)
{
 struct vfsmount *VAR_6 = VAR_3->upper_mnt;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_5(VAR_5->dentry, VAR_4->lowerstack[0].dentry,
    1);
 if (VAR_7) {
  FUNC_9("overlayfs: failed to verify upper root origin\n");
  goto out;
 }

 VAR_3->indexdir = FUNC_8(VAR_3, VAR_0, 1);
 if (VAR_3->indexdir) {
  VAR_7 = FUNC_4(VAR_2, VAR_3->indexdir, &VAR_3->indexdir_trap,
         "indexdir");
  if (VAR_7)
   goto out;
  if (FUNC_2(VAR_3->indexdir)) {
   VAR_7 = FUNC_6(VAR_3->indexdir, VAR_1,
      VAR_5->dentry, 1, 0);
   if (VAR_7)
    FUNC_9("overlayfs: failed to verify index dir 'origin' xattr\n");
  }
  VAR_7 = FUNC_7(VAR_3->indexdir, VAR_5->dentry, 1);
  if (VAR_7)
   FUNC_9("overlayfs: failed to verify index dir 'upper' xattr\n");


  if (!VAR_7)
   VAR_7 = FUNC_3(VAR_3);
 }
 if (VAR_7 || !VAR_3->indexdir)
  FUNC_10("overlayfs: try deleting index dir or mounting with '-o index=off' to disable inodes index.\n");

out:
 FUNC_0(VAR_6);
 return VAR_7;
}

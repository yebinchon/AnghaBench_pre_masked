
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_umount; int s_user_ns; } ;
struct path {scalar_t__ dentry; TYPE_1__* mnt; } ;
struct mount {int mnt; } ;
struct fs_context {int dummy; } ;
struct TYPE_2__ {scalar_t__ mnt_root; struct super_block* mnt_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct fs_context*) ;
 int VAR_3 ;
 int FUNC_1 (struct fs_context*) ;
 int FUNC_2 (struct mount*,int) ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (int *) ;
 struct fs_context* FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (struct path*,int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (struct fs_context*,void*) ;
 int FUNC_9 (struct fs_context*) ;
 struct mount* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct fs_context*) ;
 int FUNC_12 (struct mount*,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct path *VAR_4, int VAR_5, int VAR_6,
        int VAR_7, void *VAR_8)
{
 int VAR_9;
 struct super_block *VAR_10 = VAR_4->mnt->mnt_sb;
 struct mount *VAR_11 = FUNC_10(VAR_4->mnt);
 struct fs_context *VAR_12;

 if (!FUNC_3(VAR_11))
  return -VAR_1;

 if (VAR_4->dentry != VAR_4->mnt->mnt_root)
  return -VAR_1;

 if (!FUNC_2(VAR_11, VAR_7))
  return -VAR_2;

 VAR_12 = FUNC_5(VAR_4->dentry, VAR_6, VAR_3);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_9 = FUNC_8(VAR_12, VAR_8);
 if (!VAR_9) {
  FUNC_4(&VAR_10->s_umount);
  VAR_9 = -VAR_2;
  if (FUNC_7(VAR_10->s_user_ns, VAR_0)) {
   VAR_9 = FUNC_11(VAR_12);
   if (!VAR_9)
    FUNC_12(VAR_11, VAR_7);
  }
  FUNC_13(&VAR_10->s_umount);
 }

 FUNC_6(VAR_4, &VAR_11->mnt);

 FUNC_9(VAR_12);
 return VAR_9;
}

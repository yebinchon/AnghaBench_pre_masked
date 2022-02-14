
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct super_block {int s_umount; } ;
struct path {int dummy; } ;
struct fs_context {TYPE_1__* root; } ;
struct TYPE_2__ {struct super_block* d_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vfsmount*) ;
 int FUNC_1 (struct vfsmount*) ;
 int FUNC_2 (int ,struct path*,unsigned int) ;
 int FUNC_3 (struct fs_context*) ;
 int FUNC_4 (struct path*,struct vfsmount*) ;
 int FUNC_5 (struct vfsmount*) ;
 scalar_t__ FUNC_6 (struct super_block*,unsigned int*) ;
 int FUNC_7 (struct vfsmount*) ;
 int FUNC_8 (struct super_block*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 struct vfsmount* FUNC_11 (struct fs_context*) ;

__attribute__((used)) static int FUNC_12(struct fs_context *VAR_1, struct path *VAR_2,
      unsigned int VAR_3)
{
 struct vfsmount *VAR_4;
 struct super_block *VAR_5 = VAR_1->root->d_sb;
 int VAR_6;

 VAR_6 = FUNC_8(VAR_5);
 if (!VAR_6 && FUNC_6(VAR_5, &VAR_3))
  VAR_6 = -VAR_0;

 if (FUNC_9(VAR_6)) {
  FUNC_3(VAR_1);
  return VAR_6;
 }

 FUNC_10(&VAR_5->s_umount);

 VAR_4 = FUNC_11(VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_6 = FUNC_2(FUNC_7(VAR_4), VAR_2, VAR_3);
 if (VAR_6 < 0) {
  FUNC_5(VAR_4);
  return VAR_6;
 }

 FUNC_4(VAR_2, VAR_4);

 return VAR_6;
}

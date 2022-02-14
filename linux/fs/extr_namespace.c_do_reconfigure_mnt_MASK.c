
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_umount; } ;
struct path {scalar_t__ dentry; TYPE_1__* mnt; } ;
struct TYPE_4__ {scalar_t__ mnt_root; } ;
struct mount {TYPE_2__ mnt; } ;
struct TYPE_3__ {struct super_block* mnt_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mount*,unsigned int) ;
 int FUNC_1 (struct mount*,unsigned int) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct path*,TYPE_2__*) ;
 struct mount* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct mount*,unsigned int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct path *VAR_2, unsigned int VAR_3)
{
 struct super_block *VAR_4 = VAR_2->mnt->mnt_sb;
 struct mount *VAR_5 = FUNC_5(VAR_2->mnt);
 int VAR_6;

 if (!FUNC_2(VAR_5))
  return -VAR_0;

 if (VAR_2->dentry != VAR_5->mnt.mnt_root)
  return -VAR_0;

 if (!FUNC_0(VAR_5, VAR_3))
  return -VAR_1;

 FUNC_3(&VAR_4->s_umount);
 VAR_6 = FUNC_1(VAR_5, VAR_3);
 if (VAR_6 == 0)
  FUNC_6(VAR_5, VAR_3);
 FUNC_7(&VAR_4->s_umount);

 FUNC_4(VAR_2, &VAR_5->mnt);

 return VAR_6;
}

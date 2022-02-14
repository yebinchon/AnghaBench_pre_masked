
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int fs_npsect; } ;
struct TYPE_7__ {TYPE_1__ fs_sunx86; } ;
struct ufs_super_block_third {TYPE_2__ fs_un2; } ;
struct TYPE_8__ {int fs_npsect; } ;
struct TYPE_9__ {TYPE_3__ fs_sun; } ;
struct ufs_super_block_first {TYPE_4__ fs_u1; } ;
struct super_block {int dummy; } ;
struct TYPE_10__ {int s_flags; } ;


 TYPE_5__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct super_block*,int ) ;

__attribute__((used)) static inline u32
FUNC_2(struct super_block *VAR_2, struct ufs_super_block_first *VAR_3,
    struct ufs_super_block_third *VAR_4)
{
 if ((FUNC_0(VAR_2)->s_flags & VAR_0) == VAR_1)
  return FUNC_1(VAR_2, VAR_4->fs_un2.fs_sunx86.fs_npsect);
 else
  return FUNC_1(VAR_2, VAR_3->fs_u1.fs_sun.fs_npsect);
}

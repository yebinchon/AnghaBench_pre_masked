
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {int * fs_qfmask; } ;
struct TYPE_7__ {int * fs_qfmask; } ;
struct TYPE_6__ {int * fs_qfmask; } ;
struct TYPE_9__ {TYPE_3__ fs_44; TYPE_2__ fs_sunx86; TYPE_1__ fs_sun; } ;
struct ufs_super_block_third {TYPE_4__ fs_un2; } ;
struct super_block {int dummy; } ;
typedef int __fs64 ;
typedef int __fs32 ;
struct TYPE_10__ {int s_flags; } ;


 TYPE_5__* FUNC_0 (struct super_block*) ;

 int VAR_0 ;



 int FUNC_1 (struct super_block*,int ) ;

__attribute__((used)) static inline u64
FUNC_2(struct super_block *VAR_1, struct ufs_super_block_third *VAR_2)
{
 __fs64 VAR_3;

 switch (FUNC_0(VAR_1)->s_flags & VAR_0) {
 case 129:
 case 130:
  ((__fs32 *)&VAR_3)[0] = VAR_2->fs_un2.fs_sun.fs_qfmask[0];
  ((__fs32 *)&VAR_3)[1] = VAR_2->fs_un2.fs_sun.fs_qfmask[1];
  break;
 case 128:
  ((__fs32 *)&VAR_3)[0] = VAR_2->fs_un2.fs_sunx86.fs_qfmask[0];
  ((__fs32 *)&VAR_3)[1] = VAR_2->fs_un2.fs_sunx86.fs_qfmask[1];
  break;
 case 131:
  ((__fs32 *)&VAR_3)[0] = VAR_2->fs_un2.fs_44.fs_qfmask[0];
  ((__fs32 *)&VAR_3)[1] = VAR_2->fs_un2.fs_44.fs_qfmask[1];
  break;
 }

 return FUNC_1(VAR_1, VAR_3);
}

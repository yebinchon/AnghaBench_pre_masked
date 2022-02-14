
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_sb_private_info {scalar_t__ fs_magic; } ;
typedef scalar_t__ __fs64 ;
typedef scalar_t__ __fs32 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ufs_sb_private_info *VAR_1,
          void *VAR_2)
{
 if (VAR_1->fs_magic == VAR_0)
  *(__fs64 *)VAR_2 = 0;
 else
  *(__fs32 *)VAR_2 = 0;
}

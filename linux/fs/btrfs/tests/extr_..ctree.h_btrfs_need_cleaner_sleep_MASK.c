
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_fs_info {TYPE_1__* sb; } ;
struct TYPE_2__ {int s_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_fs_info*) ;

__attribute__((used)) static inline int FUNC_1(struct btrfs_fs_info *VAR_1)
{
 return VAR_1->sb->s_flags & VAR_0 || FUNC_0(VAR_1);
}

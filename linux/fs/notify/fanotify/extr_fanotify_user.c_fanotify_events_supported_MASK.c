
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct path {TYPE_3__* mnt; } ;
typedef int __u64 ;
struct TYPE_6__ {TYPE_2__* mnt_sb; } ;
struct TYPE_5__ {TYPE_1__* s_type; } ;
struct TYPE_4__ {int fs_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct path *VAR_3, __u64 VAR_4)
{
 if (VAR_4 & VAR_1 &&
     VAR_3->mnt->mnt_sb->s_type->fs_flags & VAR_2)
  return -VAR_0;
 return 0;
}

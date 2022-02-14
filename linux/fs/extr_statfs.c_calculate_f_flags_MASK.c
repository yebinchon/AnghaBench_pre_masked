
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {TYPE_1__* mnt_sb; int mnt_flags; } ;
struct TYPE_2__ {int s_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct vfsmount *VAR_1)
{
 return VAR_0 | FUNC_0(VAR_1->mnt_flags) |
  FUNC_1(VAR_1->mnt_sb->s_flags);
}

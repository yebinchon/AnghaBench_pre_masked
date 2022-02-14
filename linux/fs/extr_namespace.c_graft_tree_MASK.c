
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mountpoint {int m_dentry; } ;
struct TYPE_4__ {int mnt_root; TYPE_1__* mnt_sb; } ;
struct mount {TYPE_2__ mnt; } ;
struct TYPE_3__ {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mount*,struct mount*,struct mountpoint*,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mount *VAR_3, struct mount *VAR_4, struct mountpoint *VAR_5)
{
 if (VAR_3->mnt.mnt_sb->s_flags & VAR_2)
  return -VAR_0;

 if (FUNC_1(VAR_5->m_dentry) !=
       FUNC_1(VAR_3->mnt.mnt_root))
  return -VAR_1;

 return FUNC_0(VAR_3, VAR_4, VAR_5, 0);
}

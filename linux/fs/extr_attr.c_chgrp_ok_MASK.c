
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; int i_gid; int i_uid; } ;
typedef int kgid_t ;
struct TYPE_2__ {int s_user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode const*,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static bool FUNC_6(const struct inode *VAR_2, kgid_t VAR_3)
{
 if (FUNC_5(FUNC_1(), VAR_2->i_uid) &&
     (FUNC_3(VAR_3) || FUNC_2(VAR_3, VAR_2->i_gid)))
  return 1;
 if (FUNC_0(VAR_2, VAR_0))
  return 1;
 if (FUNC_2(VAR_2->i_gid, VAR_1) &&
     FUNC_4(VAR_2->i_sb->s_user_ns, VAR_0))
  return 1;
 return 0;
}

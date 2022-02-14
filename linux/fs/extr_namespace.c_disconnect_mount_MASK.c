
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mount {TYPE_2__* mnt_parent; } ;
typedef enum umount_tree_flags { ____Placeholder_umount_tree_flags } umount_tree_flags ;
struct TYPE_3__ {int mnt_flags; } ;
struct TYPE_4__ {TYPE_1__ mnt; } ;


 scalar_t__ FUNC_0 (struct mount*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mount*) ;

__attribute__((used)) static bool FUNC_2(struct mount *VAR_3, enum umount_tree_flags VAR_4)
{

 if (VAR_4 & VAR_2)
  return 1;


 if (!FUNC_1(VAR_3))
  return 1;





 if (!(VAR_3->mnt_parent->mnt.mnt_flags & VAR_0))
  return 1;


 if (VAR_4 & VAR_1)
  return 0;


 if (FUNC_0(VAR_3))
  return 0;


 return 1;
}
